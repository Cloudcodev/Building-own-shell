#include <iostream>
#include <string>

int main() {
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    while (true) {
        std::cout << "$ ";

        std::string input;
        if (!std::getline(std::cin, input)) {
            break; 
        }

        // This check handles both "exit" and "exit 0".
        if (input == "exit 0" || input == "exit") {
            break;
        }

        if (input.empty()) {
            continue;
        }

        std::cout << input << ": command not found" << std::endl;
    }

    return 0;
}
