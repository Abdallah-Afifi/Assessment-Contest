#include <iostream>
using namespace std;

int main()
{
    int total_numbers, num_queries, query_index;
    cin >> total_numbers >> num_queries;
    int numbers[100005], duplicate_count[100005] = {0};
    bool visited[100005];

    for (int i = 1; i <= total_numbers; i++)
        cin >> numbers[i];

    for (int i = total_numbers; i >= 1; i--)
    {
        if (!visited[numbers[i]])
            duplicate_count[i]++;
        visited[numbers[i]] = true;
    }

    for (int i = total_numbers; i >= 1; i--)
        duplicate_count[i] += duplicate_count[i + 1];

    for (int i = 0; i < num_queries; i++)
    {
        cin >> query_index;
        cout << duplicate_count[query_index] << endl;
    }

    return 0;
}
