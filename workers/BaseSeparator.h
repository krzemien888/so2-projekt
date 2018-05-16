//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_BASESEPARATOR_H
#define SO2_PROJEKT_BASESEPARATOR_H

#include <mutex>
#include <condition_variable>

class BaseSeparator {
    std::mutex lock;
    std::condition_variable not_empty;
    std::condition_variable not_full;
    const size_t MAX_CAPACITY = 20;
    int data = 0;

public:
    void put(int amount);
    void get(int amount);
};


#endif //SO2_PROJEKT_BASESEPARATOR_H
