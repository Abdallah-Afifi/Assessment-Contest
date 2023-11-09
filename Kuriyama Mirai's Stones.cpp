#include <algorithm>
#include <iostream>
using namespace std;

typedef long long LongInt;

int main()
{
    ios_base::sync_with_stdio(0);
    LongInt n, m, queryType, leftIdx, rightIdx;
    LongInt originalArray[100010], prefixSum[100010] = {0}, sortedPrefixSum[100010] = {0};

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> originalArray[i - 1];
        prefixSum[i] = prefixSum[i - 1] + originalArray[i - 1];
    }

    sort(originalArray, originalArray + n);

    for (int i = 1; i <= n; ++i)
        sortedPrefixSum[i] = sortedPrefixSum[i - 1] + originalArray[i - 1];

    cin >> m;

    for (int i = 0; i < m; ++i) {
        cin >> queryType >> leftIdx >> rightIdx;
        cout << (queryType == 1 ? prefixSum[rightIdx] - prefixSum[leftIdx - 1] : sortedPrefixSum[rightIdx] - sortedPrefixSum[leftIdx - 1]) << endl;
    }

    return 0;
}
