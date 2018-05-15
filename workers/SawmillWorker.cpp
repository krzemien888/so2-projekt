//
// Created by pawel on 03.05.18.
//

#include "SawmillWorker.h"
#include <string>
#include <thread>


void SawmillWorker::work() {
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

SawmillWorker::SawmillWorker(IView *view , BaseSeparator *dataDestination, int counter)
        : BaseWorker(view, dataDestination, nullptr, "SawmillWorker_" + std::to_string(counter))
{

}

SawmillWorker::SawmillWorker(SawmillWorker && worker)
        : BaseWorker(std::move(worker))
{

}

SawmillWorker::~SawmillWorker() {

}
