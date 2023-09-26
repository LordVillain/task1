#include <iostream>
#include <cmath>
#include <iomanip>

const long double e = 2.7182818284590452353602874713526624977572470936999595749669676277240766303535475945713821785251664274;

using namespace std;

int main() {

    int k;
    long double x;
    cout << "vvedite x: ";
    cin >> x;
    cout << "vvedite k: ";
    cin >> k;

    long double eps = pow(10, -k);

    long double ans1, ans2, ans3;

    ans1 = sinh(x);
    ans3 = (pow(e, x) - pow(e, -x)) / 2.0;

    long double a = x;
    ans2 = x;
    int n = 2;

    while (abs(a) > eps) {
        a = a * x * x / (n * (n + 1));
        n += 2;
        ans2 += a;
    }

    cout << fixed << setprecision(k) << "with sinh function:\n " << ans1 << "\nwith my solution:\n " << ans2 << "\nwith the formula with e:\n " << ans3;
    return 0;
}