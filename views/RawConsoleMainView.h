//
// Created by flint on 03.04.18.
//

#ifndef SO2_PROJEKT_MAINVIEW_H
#define SO2_PROJEKT_MAINVIEW_H

#include <string>
#include <map>
#include <mutex>

struct StateRaport
{
    std::string name;
    std::string state;
};

class RawConsoleMainView {
    std::mutex mut;
    bool exitFlag = false;
    std::map<std::string, StateRaport> raports;
public:
    void addRaport(StateRaport raport);
    void refresh();
    void stopRefreshing();
};


#endif //SO2_PROJEKT_MAINVIEW_H
