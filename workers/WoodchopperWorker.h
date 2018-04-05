//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_WOODCHOPPERWORKER_H
#define SO2_PROJEKT_WOODCHOPPERWORKER_H


#include "BaseWorker.h"

class WoodchopperWorker : public BaseWorker
{
public:
    void work() override ;
    WoodchopperWorker(IView*, BaseSeparator* dataDestination);
};


#endif //SO2_PROJEKT_WOODCHOPPERWORKER_H
