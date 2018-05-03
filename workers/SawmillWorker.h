//
// Created by pawel on 03.05.18.
//

#ifndef SO2_PROJEKT_SAWMILL_H
#define SO2_PROJEKT_SAWMILL_H


#include "BaseWorker.h"

class SawmillWorker : public BaseWorker
{
public:
    virtual void work() override;
    SawmillWorker(IView*, BaseSeparator* dataDestination);
    SawmillWorker(SawmillWorker&&);
};


#endif //SO2_PROJEKT_SAWMILL_H
