#include <iostream>
#include <queue>

int main() {
    // 1. Declaration of queue
    std::queue<int> q;

    // 2. Queue Operations
    // Enqueue elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Display all elements in the queue
    std::cout << "Current queue:" << std::endl;
    std::queue<int> temp = q;  // Temporary queue to display contents
    while (!temp.empty()) {
        std::cout << temp.front() << std::endl;
        temp.pop();
    }

    // Dequeue an element from the queue
    q.pop();
    std::cout << "Queue after one dequeue:" << std::endl;
    temp = q;  // Refresh the temporary queue to display current contents
    while (!temp.empty()) {
        std::cout << temp.front() << std::endl;
        temp.pop();
    }

    // Accessing the front element of the queue
    std::cout << "The current front element of the queue is: " << q.front() << std::endl;

    // Check if queue is empty
    if (q.empty()) {
        std::cout << "The queue is empty." << std::endl;
    } else {
        std::cout << "The queue is not empty." << std::endl;
    }

    // 3. Additional example for dynamic input-output
    int number;
    std::cout << "Enter numbers to enqueue to the queue (type -1 to stop):" << std::endl;
    while (true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }
        q.push(number);
    }

    std::cout << "Queue after additional enqueues:" << std::endl;
    temp = q;  // Refresh the temporary queue again to display current contents
    while (!temp.empty()) {
        std::cout << temp.front() << std::endl;
        temp.pop();
    }

    return 0;
}
