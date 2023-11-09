#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int n = s.length();
    int diffCount = 0;

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            diffCount++;
        }
    }

    if (diffCount == 1 || (n % 2 == 1 && diffCount == 0)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
