//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_BASESEPARATOR_H
#define SO2_PROJEKT_BASESEPARATOR_H

#include <mutex>
#include <condition_variable>

class BaseSeparator {
    std::mutex inputMutex;
    std::mutex outputMutex;
    std::condition_variable ready_cv;
    int data = 0;

public:
    void put(int amount);
    int get(int amount);
};


#endif //SO2_PROJEKT_BASESEPARATOR_H
