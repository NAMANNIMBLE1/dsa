#include <bits/stdc++.h>
using namespace std;


int longest_consecutive(vector<int> arr, int n) {
    if (n == 0) return 0;

    sort(arr.begin(), arr.end());

    int count = 1;
    int max_count = 1;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            // skip duplicates
            continue;
        }
        else if (arr[i] + 1 == arr[i + 1]) {
            // consecutive element
            count++;
        }
        else {
            // reset sequence
            count = 1;
        }
        max_count = max(max_count, count);
    }

    return max_count;
}
int main()
{
    vector<int> arr = {100, 200, 1, 3, 2, 4};
    int n = arr.size();
    cout << longest_consecutive(arr, n) << " ";
    return 0;
}