//
// Created by flint on 03.04.18.
//

#include "BaseSeparator.h"
#include <iostream>

void BaseSeparator::put(int amount)
{
    std::unique_lock<std::mutex> lk(inputMutex);
    std::cout << "Base separator acquired " << amount << " of wood" << std::endl;
    this->data += amount;
    lk.unlock();
}

int BaseSeparator::get(int amount) {
    int acquiredAmount = 0;
    std::unique_lock<std::mutex> lk(outputMutex);
    if(amount < this->data)
        acquiredAmount = amount;
    else
        acquiredAmount = this->data;
    this->data -= acquiredAmount;
    lk.unlock();
    return acquiredAmount;
}
