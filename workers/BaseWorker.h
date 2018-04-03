//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_BASEWORKER_H
#define SO2_PROJEKT_BASEWORKER_H

#include "../utils/State.h"
#include "../views/IView.h"
#include "BaseSeparator.h"

class BaseWorker {
    IView* view;
    BaseSeparator* dataDestination;
    BaseSeparator* dataSource;
    State currentState;
public:
    BaseWorker(IView *view, BaseSeparator *dataDestination, BaseSeparator *dataSource, std::string &name);
    virtual void work() = 0;
};


#endif //SO2_PROJEKT_BASEWORKER_H
