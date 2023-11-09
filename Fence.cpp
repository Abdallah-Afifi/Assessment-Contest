#include <iostream>
#include <vector>
#include <climits>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    int min_sum = INT_MAX;
    int min_index = 0;
    int current_sum = 0;

    for (int i = 0; i < k; i++) {
        current_sum += heights[i];
    }
    min_sum = current_sum;

    for (int i = 1; i <= n - k; i++) {
        current_sum = current_sum - heights[i - 1] + heights[i + k - 1];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i;
        }
    }

    std::cout << min_index + 1 << std::endl;

    return 0;
}
