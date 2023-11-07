// Nigussie Tianyvu
// nigussietianyvu@csu.fullerton.edu
// @Choclatewizard101
// Partners: @antcej711

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc < 2) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }
  double sum = 0.0;

  for (int index = 1; index <= argc - 1; ++index) {
    sum += std::stod(arguments[index]);
  }
  double average = sum / (argc - 1);

  std::cout << "average = " << average << std::endl;

  return 0.0;
}
