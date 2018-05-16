cmake_minimum_required(VERSION 3.9)
project(so2_projekt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -lpthread")


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
        views/IView.cpp
        views/IView.h
        workers/BaseSeparator.cpp
        workers/BaseSeparator.h
        workers/WoodchopperWorker.cpp
        workers/WoodchopperWorker.h
        workers/SawmillWorker.cpp
        workers/SawmillWorker.h
        workers/TransporterToSawmill.cpp
        workers/TransporterToSawmill.h)

target_link_libraries (so2_projekt ${CMAKE_THREAD_LIBS_INIT})
