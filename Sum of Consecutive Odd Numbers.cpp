#include <iostream>
#include <algorithm>

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int X, Y;
        std::cin >> X >> Y;

        int sum = 0;

        if (X > Y) {
            std::swap(X, Y);
        }

        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }

        std::cout << sum << std::endl;
    }

    return 0;
}
