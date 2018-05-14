#include <iostream>
#include "views/RawConsoleMainView.h"
#include "workers/WoodchopperWorker.h"
#include <thread>
#include <vector>

int main() {

    std::string command;
    std::map<std::string, int> counterMap;
    counterMap.insert(std::make_pair("woodchopper", 0));
    RawConsoleMainView view;
    std::thread viewThread = std::thread(&RawConsoleMainView::refresh, &view);
    std::vector<WoodchopperWorker> woodchoppers;
    BaseSeparator firstStorage;
    while(command != "q")
    {
        std::cout << "\nCommand: ";
        std::cin >> command;
        if(command == "w")
        {
            woodchoppers.push_back(WoodchopperWorker(&view, &firstStorage, counterMap.at("woodchopper")++));
            woodchoppers[woodchoppers.size() -1].run();
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