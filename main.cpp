#include <iostream>
#include "views/RawConsoleMainView.h"
#include "workers/WoodchopperWorker.h"
#include "workers/SawmillWorker.h"
#include "workers/TransporterToSawmill.h"
#include "workers/Dealer.h"
#include <thread>
#include <vector>

int main() {

    std::string command;
    // mapa zliczająca wątki do tworzenia generatora ID
    std::map<std::string, int> counterMap;
    counterMap.insert(std::make_pair("Woodchopper", 0));
    counterMap.insert(std::make_pair("SawmillWorker", 0));
    counterMap.insert(std::make_pair("TransporterToSawmill", 0));
    counterMap.insert(std::make_pair("Dealer", 0));

    RawConsoleMainView view;
    std::thread viewThread = std::thread(&RawConsoleMainView::refresh, &view);

    // powstanie wektorów trzymających wątki
    std::vector<WoodchopperWorker> woodchoppers;
    std::vector<SawmillWorker> sawmillworkers;
    std::vector<TransporterToSawmill> transportertosawmills;
    std::vector<Dealer> dealers;

    // inicjalizacja pojemników
    BaseSeparator forestStorage("FOREST", 30);
    BaseSeparator sawmillStorage("SAWMILL", 50);
    BaseSeparator warehouseStorage("WAREHOUSE", 100);
    BaseSeparator soldStorage("SOLDSTORAGE", 0);


    while(command != "q")
    {
        std::cout << "\nCommand: ";
        std::cin >> command;
        if(command == "w")
        {
            woodchoppers.push_back(WoodchopperWorker(&view, &forestStorage, counterMap.at("Woodchopper")++));
            woodchoppers[woodchoppers.size() -1].run();
        }
        else if(command == "t")
        {
            transportertosawmills.push_back(TransporterToSawmill(&view, &sawmillStorage, &forestStorage, counterMap.at("TransporterToSawmill")++));
            transportertosawmills[transportertosawmills.size() -1].run();
        }
        else if(command == "s")
        {
            sawmillworkers.push_back(SawmillWorker(&view, &warehouseStorage, &sawmillStorage, counterMap.at("SawmillWorker")++));
            sawmillworkers[sawmillworkers.size() -1].run();
        }
        else if(command == "d")
        {
            dealers.push_back(Dealer(&view, &soldStorage, &warehouseStorage, counterMap.at("Dealer")++));
            dealers[dealers.size() -1].run();
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

    for(int i = 0; i < dealers.size(); i++) {
        dealers[i].stopWorking();
        std::cout << "Dealer_" << i << " stopped" << std::endl;
    }



    view.stopRefreshing();
    viewThread.join();
    return 0;
}