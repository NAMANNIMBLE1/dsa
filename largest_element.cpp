#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }

        int max_val = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }

        cout << "Largest element is: " << max_val << endl;
    }
    return 0;
}
