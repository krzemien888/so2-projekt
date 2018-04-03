//
// Created by flint on 03.04.18.
//

#include "RawConsoleMainView.h"

#include <iostream>
#include <iostream>
#include <thread>

void RawConsoleMainView::refresh() {
    while(!this->exitFlag)
    {
        for(auto raport: raports)
        {
            std::cout << raport.second.name << ": " << raport.second.state << std::endl;
        }
        std::this_thread::sleep_for(std::chrono_literals::operator""s(2));
    }

}

void RawConsoleMainView::addRaport(StateRaport raport) {
    std::unique_lock<std::mutex> lk(mut);
    this->raports[raport.name] = raport;
    lk.unlock();
}

void RawConsoleMainView::stopRefreshing() {
    this->exitFlag = true;
}
