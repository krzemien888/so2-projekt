//
// Created by pawel on 16.05.18.
//

#include "Dealer.h"
#include <string>
#include <thread>


void Dealer::work() {
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
                break;
        }
    }
}

Dealer::Dealer(IView *view, BaseSeparator *dataDestination, BaseSeparator *dataSource, int counter)
        : BaseWorker(view, dataDestination, dataSource, "Dealer_" + std::to_string(counter))
{

}

Dealer::Dealer(Dealer && worker)
        : BaseWorker(std::move(worker))
{

}

Dealer::~Dealer() {

}
