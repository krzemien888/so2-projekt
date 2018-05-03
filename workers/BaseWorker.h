//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_BASEWORKER_H
#define SO2_PROJEKT_BASEWORKER_H

#include "../utils/State.h"
#include "../views/IView.h"
#include "BaseSeparator.h"

#include <memory>
#include <thread>

class BaseWorker {
protected:
    IView* view;
    BaseSeparator* dataDestination;
    BaseSeparator* dataSource;
    State currentState;
    bool endWork = false;
    std::unique_ptr<std::thread> workerThread;
    virtual void work() = 0;

public:
    BaseWorker(IView *view, BaseSeparator *dataDestination, BaseSeparator *dataSource, std::string name);
    BaseWorker(BaseWorker&& worker);
    ~BaseWorker();
    virtual void run() final;
    void stopWorking();
};


#endif //SO2_PROJEKT_BASEWORKER_H
