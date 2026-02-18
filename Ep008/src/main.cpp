#include <iostream>
#include <vector>
#include "stats.h"

#include "supermath.h"

int main(int argc, char* argv[]) {
    std::vector<int> values = {1, 2, 3, 4, 5};
 
    double avg = mean(values.data(), values.size());
    std::cout << "Mean: " << avg << std::endl;
 
    return 0;
}
