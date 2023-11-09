#include <iostream>
#include <vector>
#include <algorithm> 

bool isBeautifulArray(const std::vector<int>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int sum = arr[i] + arr[j];
                if (std::find(arr.begin(), arr.end(), sum) == arr.end()) {
                    return false;
                }
            }
        }
    }

    return true;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N;
        std::cin >> N;
        std::vector<int> arr(N);

        for (int i = 0; i < N; ++i) {
            std::cin >> arr[i];
        }

        if (isBeautifulArray(arr)) {
            std::cout << "yes\n";
        } else {
            std::cout << "no\n";
        }
    }

    return 0;
}
