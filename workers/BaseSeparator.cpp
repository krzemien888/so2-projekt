//
// Created by flint on 03.04.18.
//

#include "BaseSeparator.h"
#include <iostream>

void BaseSeparator::put(int amount)
{
    std::unique_lock<std::mutex> lk(lock);
    not_full.wait( lk, [this] {return data < MAX_CAPACITY;} );


    std::cout << name_container <<" acquired " << amount << " of wood - > ";
    this->data += amount;
    std::cout << "Current ammount of wood: "<< this -> data <<std::endl;
    not_empty.notify_all();
    return;
}

void BaseSeparator::get(int amount) {

        std::unique_lock<std::mutex> lk(lock);
        not_empty.wait( lk, [this] {return data > 0;} );
        this->data -= amount;
        not_full.notify_all();
        return;

}

BaseSeparator::BaseSeparator(std::string name, size_t capacity) {
    name_container = name;
    MAX_CAPACITY = capacity;
}
