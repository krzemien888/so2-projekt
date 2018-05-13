#include <iostream>
#include "views/RawConsoleMainView.h"
#include "workers/WoodchopperWorker.h"
#include <thread>
#include <vector>

int main() {

    std::string command;
    RawConsoleMainView view;
    std::thread viewThread = std::thread(&RawConsoleMainView::refresh, &view);
    std::vector<WoodchopperWorker> woodchoppers;
    BaseSeparator firstStorage;
    while(command != "q")
    {
        std::cin >> command;
        if(command == "w")
        {
            woodchoppers.emplace_back(WoodchopperWorker(&view, &firstStorage));
            std::cout << "The Woodchopper are created";

        }
    }
    std::cout << "Closing application " << std::endl;
    for(int i=0; i < woodchoppers.size(); i++)
        woodchoppers[i].stopWorking();




    view.stopRefreshing();
    viewThread.join();
    return 0;
}