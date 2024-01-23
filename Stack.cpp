#include "Stack.h"
#include <iostream>

namespace CustomContainers {
    void Stack::insert(int value) {
        std::cout << "Stack insert: " << value << std::endl;
    }

    void Stack::remove() {
        std::cout << "Stack remove" << std::endl;
    }
}
