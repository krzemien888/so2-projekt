#include <iostream>
#include <string>
#include "views/RawConsoleMainView.h"
#include <thread>

int main() {

    std::string command;
    RawConsoleMainView view;
    StateRaport sr1 = {"first", "first"};
    view.addRaport(sr1);
    auto viewThread = std::thread(&RawConsoleMainView::refresh, &view);
    while(command != "q")
    {
        std::cin >> command;
    }
    view.stopRefreshing();
    viewThread.join();
    return 0;
}