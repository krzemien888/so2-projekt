//
// Created by flint on 03.04.18.
//

#include <string>

#include "WoodchopperWorker.h"

void WoodchopperWorker::work() {

}

WoodchopperWorker::WoodchopperWorker(IView *view , BaseSeparator *dataDestination)
    : BaseWorker(view, dataDestination, nullptr, "Woodchopper" + std::to_string(WoodchopperWorker::created))
{
    WoodchopperWorker::created++;
}
