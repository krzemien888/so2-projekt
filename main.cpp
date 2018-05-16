#include <iostream>
#include "views/RawConsoleMainView.h"
#include "workers/WoodchopperWorker.h"
#include "workers/SawmillWorker.h"
#include "workers/TransporterToSawmill.h"
#include <thread>
#include <vector>

int main() {

    std::string command;
    // mapa zliczająca wątki do tworzenia generatora ID
    std::map<std::string, int> counterMap;
    counterMap.insert(std::make_pair("Woodchopper", 0));
    counterMap.insert(std::make_pair("SawmillWorker", 0));
    counterMap.insert(std::make_pair("TransporterToSawmill", 0));

    RawConsoleMainView view;
    std::thread viewThread = std::thread(&RawConsoleMainView::refresh, &view);

    // powstanie wektorów trzymających wątki
    std::vector<WoodchopperWorker> woodchoppers;
    std::vector<SawmillWorker> sawmillworkers;
    std::vector<TransporterToSawmill> transportertosawmills;

    // inicjalizacja pojemników
    BaseSeparator firstStorage("FOREST", 30);
    BaseSeparator secondStorage("SAWMILL", 100);


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
            transportertosawmills.push_back(TransporterToSawmill(&view, &secondStorage, &firstStorage, counterMap.at("TransporterToSawmill")++));
            transportertosawmills[transportertosawmills.size() -1].run();

        }
    }


    std::cout << "Closing application " << std::endl;
    for(int i = 0; i < woodchoppers.size(); i++){
        woodchoppers[i].stopWorking();
        std::cout << "Woodchopper_" << i << " stopped" << std::endl;
    }

    for(int i = 0;  i < sawmillworkers.size(); i++){
        sawmillworkers[i].stopWorking();
        std::cout << "SawmillWorker_" << i << " stopped" << std::endl;
    }

    for(int i = 0; i < transportertosawmills.size(); i++) {
        transportertosawmills[i].stopWorking();
        std::cout << "TransporterToSawmill_" << i << " stopped" << std::endl;
    }


    view.stopRefreshing();
    viewThread.join();
    return 0;
}