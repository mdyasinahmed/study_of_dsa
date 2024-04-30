#include <iostream>
#include <stack>

int main() {
    // 1. Declaration of stack
    std::stack<int> s;

    // 2. Stack Operations
    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Show all elements in the stack
    std::cout << "Current stack:" << std::endl;
    std::stack<int> temp = s;  // Temporary stack to display contents
    while (!temp.empty()) {
        std::cout << temp.top() << std::endl;
        temp.pop();
    }

    // Pop element from the stack
    s.pop();
    std::cout << "Stack after one pop:" << std::endl;
    temp = s;  // Refresh the temporary stack to display current contents
    while (!temp.empty()) {
        std::cout << temp.top() << std::endl;
        temp.pop();
    }

    // Accessing the top element of the stack
    std::cout << "The current top element of the stack is: " << s.top() << std::endl;

    // Check if stack is empty
    if (s.empty()) {
        std::cout << "The stack is empty." << std::endl;
    } else {
        std::cout << "The stack is not empty." << std::endl;
    }

    // 3. Additional example for dynamic input-output
    int number;
    std::cout << "Enter numbers to push to the stack (type -1 to stop):" << std::endl;
    while (true) {
        std::cin >> number;
        if (number == -1) {
            break;
        }
        s.push(number);
    }

    std::cout << "Stack after additional inputs:" << std::endl;
    temp = s;  // Refresh the temporary stack again to display current contents
    while (!temp.empty()) {
        std::cout << temp.top() << std::endl;
        temp.pop();
    }

    return 0;
}
