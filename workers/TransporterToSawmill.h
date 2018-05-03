//
// Created by pawel on 03.05.18.
//

#ifndef SO2_PROJEKT_TRANSPORTERTOSAWMILL_H
#define SO2_PROJEKT_TRANSPORTERTOSAWMILL_H

#include "BaseWorker.h"

class TransporterToSawmill : public BaseWorker
{
public:
    virtual void work() override;
    TransporterToSawmill(IView*, BaseSeparator* dataDestination);
    TransporterToSawmill(TransporterToSawmill&&);
};

#endif //SO2_PROJEKT_TRANSPORTERTOSAWMILL_H
