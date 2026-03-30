#include <iostream>
#include <string>

int main() {
    std::cout << std::unitbuf;
    std::cerr << std::unitbuf;

    while (true) {
        std::cout << "$ ";
        std::string input;
        std::getline(std::cin, input);

        // This check handles both "exit" and "exit 0".
        if (input == "exit 0" || input == "exit") {
            break;
        }

        //adding feature: "echo"
        if (input.substr(0, 5) == "echo ") {
        std::cout << input.substr(5) << std::endl;
        continue; 
    }
        if (!input.empty()) {
        std::cout << input << ": command not found" << std::endl;
    }
  }

    return 0;
}
