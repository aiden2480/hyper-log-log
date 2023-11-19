#include <iostream>
#include <string>
#include "binary.hpp"
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Hello World!" << std::endl;

    for (int i : arr) {
        string input = std::to_string(i);
        unsigned long output = std::hash<string>{}(input);

        std::cout << to_binary(std::to_string(output)) << std::endl;
    }

    std::cout << to_binary("hello") << std::endl;
}
