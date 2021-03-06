//
// Created by flint on 03.04.18.
//

#include <string>
#include <thread>

#include "WoodchopperWorker.h"

void WoodchopperWorker::work() {
    while(!this->endWork) {
        switch (this->currentState.getEnum()) {

            case StateEnum::Idle:
                std::this_thread::sleep_for(std::chrono_literals::operator ""s(2));
                this->currentState.transition(StateEnum::DataProcessing);
                this->view->addRaport(this->currentState.getRaport());
                break;
            case StateEnum::DataProcessing:
                std::this_thread::sleep_for(std::chrono_literals::operator ""s(2));
                this->currentState.transition(StateEnum::DataOnOutput);
                this->view->addRaport(this->currentState.getRaport());
                break;
            case StateEnum::DataOnOutput:
                std::this_thread::sleep_for(std::chrono_literals::operator ""s(2));
                this->currentState.transition(StateEnum::Idle);
                this->view->addRaport(this->currentState.getRaport());
                this->dataDestination->put(5);
                break;
        }
    }
}

WoodchopperWorker::WoodchopperWorker(IView *view , BaseSeparator *dataDestination, int counter)
        : BaseWorker(view, dataDestination, nullptr, "Woodchopper_" + std::to_string(counter)) {

}

WoodchopperWorker::WoodchopperWorker(WoodchopperWorker && worker)
    : BaseWorker(std::move(worker)) {

}

WoodchopperWorker::~WoodchopperWorker() {
}