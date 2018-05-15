#include <iostream>
#include "views/RawConsoleMainView.h"
#include "workers/WoodchopperWorker.h"
#include "workers/SawmillWorker.h"
#include "workers/TransporterToSawmill.h"
#include <thread>
#include <vector>

int main() {

    std::string command;
    std::map<std::string, int> counterMap;
    counterMap.insert(std::make_pair("Woodchopper", 0));
    counterMap.insert(std::make_pair("SawmillWorker", 0));
    counterMap.insert(std::make_pair("TransporterToSawmill", 0));
    RawConsoleMainView view;
    std::thread viewThread = std::thread(&RawConsoleMainView::refresh, &view);
    std::vector<WoodchopperWorker> woodchoppers;
    std::vector<SawmillWorker> sawmillworkers;
    std::vector<TransporterToSawmill> transportertosawmills;
    BaseSeparator firstStorage;
    while(command != "q")
    {
        std::cout << "\nCommand: ";
        std::cin >> command;
        if(command == "w")
        {
            woodchoppers.push_back(WoodchopperWorker(&view, &firstStorage, counterMap.at("Woodchopper")++));
            woodchoppers[woodchoppers.size() -1].run();
        }
        // Narazie pozostali workerzy piszą do pierwszego separatora
        else if(command == "s")
        {
            sawmillworkers.push_back(SawmillWorker(&view, &firstStorage, counterMap.at("SawmillWorker")++));
            sawmillworkers[sawmillworkers.size() -1].run();

        }
        else if(command == "t")
        {
            transportertosawmills.push_back(TransporterToSawmill(&view, &firstStorage, counterMap.at("TransporterToSawmill")++));
            transportertosawmills[transportertosawmills.size() -1].run();

        }
    }
    std::cout << "Closing application " << std::endl;
    for(int i=0; i < woodchoppers.size(); i++)
        woodchoppers[i].stopWorking();


//    for(std::thread & t : threads)
//        if(t.joinable())
//            t.join();

    view.stopRefreshing();
    viewThread.join();
    return 0;
}