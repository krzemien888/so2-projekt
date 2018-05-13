cmake_minimum_required(VERSION 3.9)
project(so2_projekt)

set(CMAKE_CXX_STANDARD 17)
SET(CMAKE_CXX_FLAGS -pthread)

include_directories(utils)
include_directories(views)
include_directories(workers)

find_package (Threads)

add_executable(so2_projekt
        utils/State.cpp
        utils/State.h
        utils/StateRaport.cpp
        utils/StateRaport.h
        views/IView.cpp
        views/IView.h
        views/RawConsoleMainView.cpp
        views/RawConsoleMainView.h
        workers/BaseSeparator.cpp
        workers/BaseSeparator.h
        workers/BaseWorker.cpp
        workers/BaseWorker.h
        workers/SawmillWorker.cpp
        workers/SawmillWorker.h
        workers/TransporterToSawmill.cpp
        workers/TransporterToSawmill.h
        workers/WoodchopperWorker.cpp
        workers/WoodchopperWorker.h
        gitignore
        main.cpp)
