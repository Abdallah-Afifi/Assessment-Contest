#include <bits/stdc++.h>

using namespace std;

int num_elements, window_size, values[100001], is_taken[100001], cumulative_sum[100001];

int main() {
	cin >> num_elements >> window_size;
	long long total_sum = 0;
	for(int i = 0; i < num_elements; ++i) {
		cin >> values[i];
	}
	for(int i = 0; i < num_elements; ++i) {
		cin >> is_taken[i];
		if(is_taken[i]) {
			total_sum += values[i];
			values[i] = 0;
		}
	}

	cumulative_sum[0] = 0;
	for(int i = 1; i <= num_elements; ++i) {
		cumulative_sum[i] = values[i-1] + cumulative_sum[i-1];
	}

	long long max_subarray_sum = 0;
	for(int i = num_elements; i >= window_size; --i) {
		max_subarray_sum = max(max_subarray_sum, 1ll * cumulative_sum[i] - cumulative_sum[i - window_size]);
	}

	cout << total_sum + max_subarray_sum << endl;

	return 0;
}
