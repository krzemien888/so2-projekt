//
// Created by flint on 03.04.18.
//

#include <thread>
#include <memory>
#include "BaseWorker.h"

BaseWorker::BaseWorker(IView *view, BaseSeparator *dataDestination, BaseSeparator *dataSource, std::string name)
    : view(view), dataDestination(dataDestination), dataSource(dataSource), currentState(name)
{}

void BaseWorker::stopWorking() {
    endWork = true;
}

void BaseWorker::run() {
    this->workerThread = std::make_unique<std::thread>(&BaseWorker::work, this);
}

BaseWorker::~BaseWorker() {
    if(this->workerThread != nullptr)
        if(this->workerThread->joinable())
            this->workerThread->join();
}

BaseWorker::BaseWorker(BaseWorker &&worker) {
    this->workerThread = std::move(worker.workerThread);
    this->currentState = worker.currentState;
    this->dataDestination = worker.dataDestination;
    this->dataSource = worker.dataSource;
    this->view = worker.view;
}

