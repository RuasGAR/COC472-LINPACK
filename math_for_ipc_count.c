#include <stdio.h>
#include <math.h>

double intensiveMath(double x) {
    return sin(x) * cos(x) + sqrt(x);
}

int main() {
    int i;
    double result;

    for (i = 0; i < 10000; i++) {
        double x = 1909.2345123219;

        result = intensiveMath(x);
    }
    return 0;
}
