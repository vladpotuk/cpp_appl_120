#include "Stack.h"
#include "Queue.h"

int main() {
    CustomContainers::Stack stack;
    CustomContainers::Queue queue;

    stack.insert(42);
    stack.remove();

    queue.insert(99);
    queue.remove();

    return 0;
}

