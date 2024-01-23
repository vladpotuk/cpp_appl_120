#ifndef QUEUE_H
#define QUEUE_H
#include "List.h"

namespace CustomContainers {
    class Queue : public List {
    public:
        void insert(int value) override;
        void remove() override;
    };
}

#endif 
