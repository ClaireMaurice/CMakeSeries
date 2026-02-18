#include "supermath.h"

double mean(int* values, int count) {
    if (count == 0) return 0.0; // Avoid division by zero
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum = add(sum, values[i]); // Using the add function from supermath
    }
    return static_cast<double>(sum) / count;
}
