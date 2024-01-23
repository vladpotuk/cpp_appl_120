#ifndef LIST_H
#define LIST_H

namespace CustomContainers {
    class Stack;
    class Queue;

    class List {
    public:
        virtual void insert(int value) = 0;
        virtual void remove() = 0;
        virtual ~List() {}
    };
}

#endif
