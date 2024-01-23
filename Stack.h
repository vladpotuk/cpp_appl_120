#ifndef STACK_H
#define STACK_H
#include "List.h"

namespace CustomContainers {
    class Stack : public List {
    public:
        void insert(int value) override;
        void remove() override;
    };
}

#endif
