#include <iostream>
#include <string>
#include "views/RawConsoleMainView.h"
#include "utils/StateRaport.h"
#include "workers/WoodchopperWorker.h"
#include <thread>
#include <list>

int main() {

    std::string command;
    RawConsoleMainView view;
    auto viewThread = std::thread(&RawConsoleMainView::refresh, &view);
    std::list<WoodchopperWorker> woodchoppers;
    BaseSeparator firstStorage;
    std::list<std::thread> threads;
    while(command != "q")
    {
        std::cin >> command;
        if(command == "w")
        {
            WoodchopperWorker worker(&view, &firstStorage);
            threads.emplace_back(std::thread(&WoodchopperWorker::work, &worker));
        }
    }


    for(auto it = threads.begin();it != threads.end(); it++)
    {
        it->join();
    }

    view.stopRefreshing();
    viewThread.join();
    return 0;
}