//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_IVIEW_H
#define SO2_PROJEKT_IVIEW_H

#include "../utils/StateRaport.h"

class IView {
public:
    virtual void addRaport(StateRaport raport) = 0;
    virtual void refresh() = 0;
    virtual void stopRefreshing()  = 0;
};


#endif //SO2_PROJEKT_IVIEW_H
