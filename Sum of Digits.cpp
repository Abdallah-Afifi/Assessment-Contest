#include <iostream>
#include <string>

int main() {
    std::string n;
    std::cin >> n;

    int count = 0;
    while (n.size() > 1) {
        int sum = 0;
        for (char digit : n) {
            sum += digit - '0';
        }
        n = std::to_string(sum);
        count++;
    }

    std::cout << count << std::endl;
    return 0;
}
