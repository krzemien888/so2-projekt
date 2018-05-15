//
// Created by flint on 03.04.18.
//

#include "BaseSeparator.h"
#include <iostream>

void BaseSeparator::put(int amount)
{
    std::unique_lock<std::mutex> lk(inputMutex);

    while( this-> data >= 20)
    {
        ready_cv.wait(lk);
    }

    std::cout << "Base separator acquired " << amount << " of wood" << std::endl;
    this->data += amount;
    std::cout << "Current ammount of wood: "<< this -> data <<std::endl;
    lk.unlock();
}

int BaseSeparator::get(int amount) {
//    int acquiredAmount = 0;
//
        std::unique_lock<std::mutex> lk(inputMutex);
        this->data -= amount;


    ready_cv.notify_one();

//    if(amount < this->data)
//        acquiredAmount = amount;
//    else
//        acquiredAmount = this->data;
//    this->data -= acquiredAmount;
    lk.unlock();
//    return acquiredAmount;
}
