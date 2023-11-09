#include <bits/stdc++.h>

using namespace std;

const int maxElements = 2e5 + 5;
const int infinity = INT_MAX;
const int modulo = 1e9 + 7;

typedef long long int64;

int64 elements[maxElements];
map<int64, int> elementCountMap;
vector<pair<int, int>> sortedElements;

bool comparePairs(pair<int, int> x, pair<int, int> y) {
    return x.second > y.second;
}

void findMinimumOperations() {
    int numElements;
    cin >> numElements;
    sortedElements.clear();
    elementCountMap.clear();
    for (int i = 0; i < numElements; i++) {
        cin >> elements[i];
        elementCountMap[elements[i]]++;
    }
    for (auto it : elementCountMap) {
        sortedElements.emplace_back(it.first, it.second);
    }
    sort(sortedElements.begin(), sortedElements.end(), comparePairs);
    int minOperations = infinity;
    for (int i = 0; i < sortedElements.size(); i++) {
        minOperations = min(minOperations, numElements - sortedElements[i].second * (i + 1));
    }
    cout << minOperations << endl;
}

int main() {
    ios::sync_with_stdio(false);
    int testCases;
    cin >> testCases;
    while (testCases--) {
        findMinimumOperations();
    }

    return 0;
}
