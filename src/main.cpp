#include <iostream>
#include <string>

int main() {
  std::cout << std::unitbuf; //Forces the output to be printed immediately
  std::cerr << std::unitbuf; //used for error messages to show up on screen

  std::cout << "$ "; //printing prompt

}
