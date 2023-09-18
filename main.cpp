#include <iostream>
#include <cmath>
#include <iomanip>

const long double e = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;

int main() {


    int x, k;
    std::cin >> x >> k;

    const long long tenPow = pow(10, k);
    long double leftSide = trunc((pow(e, x) - pow(e, -x)) / 2 * tenPow);

    long double sum = x;
    long long xPow = x;
    long long fact = 1;

    for (int i = 1; i < 1000000000; i++) {
        long long rightSide = trunc(sum * tenPow);
        if (leftSide == rightSide) {
            break;
        }

        xPow *= x * x;
        fact *= (i * 2) * (i * 2 + 1);
        sum += double(xPow) / fact;
    }

    std::cout << std::setprecision(30) << sum;

    return 0;
}
