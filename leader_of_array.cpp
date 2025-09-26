#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

void find_leader(vector<int> arr, int n) {
    vector<int> ans;

    int max_from_right = arr[n - 1];   // last element is always a leader
    ans.push_back(max_from_right);

    // Traverse from second last to first
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            max_from_right = arr[i];
            ans.push_back(arr[i]);
        }
    }

    // Leaders collected in reverse order, so reverse them
    reverse(ans.begin(), ans.end());

    // Print result
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int>arr = {4,7,1,0};
    int n = arr.size();

    find_leader(arr,n);
    return 0;
}