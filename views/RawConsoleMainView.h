//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_MAINVIEW_H
#define SO2_PROJEKT_MAINVIEW_H

#include <string>
#include <map>
#include <mutex>
#include "../utils/StateRaport.h"
#include "IView.h"

class RawConsoleMainView : public IView{
    std::mutex mut;
    bool exitFlag = false;
    std::map<std::string, StateRaport> raports;
public:
    void addRaport(StateRaport raport) override;
    void refresh() override;
    void stopRefreshing() override;
};


#endif //SO2_PROJEKT_MAINVIEW_H
