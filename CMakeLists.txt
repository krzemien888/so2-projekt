cmake_minimum_required(VERSION 3.9)
project(so2_projekt)

set(CMAKE_CXX_STANDARD 17)

find_package (Threads)

add_executable(so2_projekt main.cpp
        views/RawConsoleMainView.cpp
        views/RawConsoleMainView.h
        workers/BaseWorker.cpp
        workers/BaseWorker.h
        utils/State.cpp
        utils/State.h
        utils/StateRaport.cpp
        utils/StateRaport.h
        views/IView.cpp views/IView.h workers/BaseSeparator.cpp workers/BaseSeparator.h workers/WoodchopperWorker.cpp workers/WoodchopperWorker.h)

target_link_libraries (so2_projekt ${CMAKE_THREAD_LIBS_INIT})