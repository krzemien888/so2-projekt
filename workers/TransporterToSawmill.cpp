//
// Created by pawel on 03.05.18.
//

#include "TransporterToSawmill.h"
#include <string>
#include <thread>


void TransporterToSawmill::work() {
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
                this->dataSource->get(5);
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

TransporterToSawmill::TransporterToSawmill(IView *view, BaseSeparator *dataDestination, BaseSeparator *dataSource, int counter)
        : BaseWorker(view, dataDestination, nullptr, "TransporterToSawmill_" + std::to_string(counter))
{

}

TransporterToSawmill::TransporterToSawmill(TransporterToSawmill && worker)
        : BaseWorker(std::move(worker))
{

}

TransporterToSawmill::~TransporterToSawmill() {

}
