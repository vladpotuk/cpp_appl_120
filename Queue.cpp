#include "Queue.h"
#include <iostream>

namespace CustomContainers {
    void Queue::insert(int value) {
        std::cout << "Queue insert: " << value << std::endl;
    }

    void Queue::remove() {
        std::cout << "Queue remove" << std::endl;
    }
}
