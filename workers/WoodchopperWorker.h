//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_WOODCHOPPERWORKER_H
#define SO2_PROJEKT_WOODCHOPPERWORKER_H


#include "BaseWorker.h"

class WoodchopperWorker : public BaseWorker
{
public:
    virtual void work() override;
    ~WoodchopperWorker();
    WoodchopperWorker(IView*, BaseSeparator* dataDestination, int counter);
    WoodchopperWorker(WoodchopperWorker&&);
};


#endif //SO2_PROJEKT_WOODCHOPPERWORKER_H
