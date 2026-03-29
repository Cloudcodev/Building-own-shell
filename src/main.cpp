#include <iostream>
#include <string>

int main() {
  std::cout << std::unitbuf; //Forces the output to be printed immediately
  std::cerr << std::unitbuf; //used for error messages to show up on screen

  std::cout << "$ "; //printing prompt

  //keeps the program alive to handle multiple commands.
  while (true) {
        std::cout << "$ ";

        std::string input;
        std::getline(std::cin, input);

        if (!std::getline(std::cin, input)) {
            break; 
        }

        // If user hits enter without typing, skip the error message
        if (!input.empty()) {
            std::cout << input << ": command not found" << std::endl;
        }
    }

    return 0;
}
