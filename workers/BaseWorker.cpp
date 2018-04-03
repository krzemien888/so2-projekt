//
// Created by flint on 03.04.18.
//

#include "BaseWorker.h"

BaseWorker::BaseWorker(IView *view, BaseSeparator *dataDestination, BaseSeparator *dataSource, std::string &name)
    : view(view), dataDestination(dataDestination), dataSource(dataSource), currentState(name)
{}

