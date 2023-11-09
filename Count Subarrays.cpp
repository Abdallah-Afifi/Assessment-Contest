#include <iostream>
using namespace std;

int main() {
    long long int test_cases, num_elements, array[100000], counter, current_run_length;

    cin >> test_cases;

    while (test_cases--) {
        cin >> num_elements;
        counter = 0;

        for (int i = 0; i < num_elements; i++)
            cin >> array[i];

        int index = 0;

        while (index < num_elements) {
            counter++;
            current_run_length = 1;

            while (index + current_run_length < num_elements) {
                if (array[index + current_run_length] >= array[index + current_run_length - 1])
                    counter += (current_run_length + 1);
                else
                    break;
                current_run_length++;
            }
            index = index + current_run_length;
        }

        cout << counter << "\n";
    }
    return 0;
}
