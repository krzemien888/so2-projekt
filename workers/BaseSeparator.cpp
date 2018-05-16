//
// Created by flint on 03.04.18.
//

#include "BaseSeparator.h"
#include <iostream>

void BaseSeparator::put(int amount)
{
    std::unique_lock<std::mutex> lk(lock);
    not_full.wait( lk, [this] {return data < MAX_CAPACITY;} );


    std::cout << "Base separator acquired " << amount << " of wood" << std::endl;
    this->data += amount;
    std::cout << "Current ammount of wood: "<< this -> data <<std::endl;
    not_empty.notify_all();
    return;
}

void BaseSeparator::get(int amount) {
//    int acquiredAmount = 0;

        std::unique_lock<std::mutex> lk(lock);
        not_empty.wait( lk, [this] {return data > 0;} );
        this->data -= amount;
        not_full.notify_all();
        return;




//    if(amount < this->data)
//        acquiredAmount = amount;
//    else
//        acquiredAmount = this->data;
//    this->data -= acquiredAmount;
    lk.unlock();
//    return acquiredAmount;
}
