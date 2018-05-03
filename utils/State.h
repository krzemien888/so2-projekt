//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_STATE_H
#define SO2_PROJEKT_STATE_H

#include "StateRaport.h"

enum StateEnum{
    DataOnOutput,
    DataProcessing,
    DataOnInput,
    Idle
};

class State {

    std::string ownerName;
    StateEnum currentState;
public:
    State(std::string &ownerName);

    State() = default;

    void transition(StateEnum newState);
    StateRaport getRaport();
    StateEnum getEnum();
};


#endif //SO2_PROJEKT_STATE_H
