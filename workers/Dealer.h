//
// Created by pawel on 16.05.18.
//

#ifndef SO2_PROJEKT_DEALER_H
#define SO2_PROJEKT_DEALER_H


#include "BaseWorker.h"

class Dealer : public BaseWorker{
public:
    virtual void work() override;
    ~Dealer();
    Dealer(IView*, BaseSeparator* dataDestination, BaseSeparator* dataSource, int counter);
    Dealer(Dealer&&);

};


#endif //SO2_PROJEKT_DEALER_H
