//
// Created by flint on 03.04.18.
//

#include "State.h"

StateRaport State::getRaport() {
    StateRaport raport;
    switch(this->currentState)
    {
        case StateEnum::DataOnInput:
            raport.state = "Data on input";
            break;
        case StateEnum::DataOnOutput:
            raport.state = "Data on output";
            break;
        case StateEnum::DataProcessing:
            raport.state = "Data processing";
            break;
        case StateEnum::Idle:
            raport.state = "Idle";
            break;
    }
    raport.name = this->ownerName;
    return raport;
}

State::State(std::string &ownerName) {
    this->ownerName = ownerName;
    this->currentState = StateEnum::Idle;
}

void State::transition(StateEnum newState) {
    this->currentState = newState;
}
