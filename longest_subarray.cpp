#include<bits/stdc++.h>
using namespace std;

// Function to find the longest subarray with sum k
int longestSubarrayWithSumK(vector<int>& arr, int n, int k) {
    int length = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;  // reset sum for each subarray

            for(int p = i; p <= j; p++) {
                sum += arr[p];
            }

            if(sum == k) {
                length = max(length, j - i + 1);
            }
        }
    }
    return length;
}

int longestSubarrayWithSumKOptimized(vector<int>& arr, int n, int k) {
    int length = 0;
    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += arr[j];
            if(sum == k){
                length = max(length, j - i + 1);
            }
        }
    }
    return length;
}

int longestSubarrayWithSumKUsingMap(vector<int>& arr, int n, int k) {
    unordered_map<int,int> mp;
    int prefix_sum = 0;
    int length = 0;

    for(int i = 0 ; i < n ; i++){
        prefix_sum += arr[i];

        if(prefix_sum == k){
            length = max(length, i + 1);
        }

        if(mp.find(prefix_sum-k) != mp.end()){
            length = max(length, i - mp[prefix_sum - k]);
        }

        if(mp.find(prefix_sum) == mp.end()){
            mp[prefix_sum] = i;
        }
    }
    return length;
}

int longestSubarrayWithSumKUsingPointers(vector<int>& arr, int n, int k) {
    int left = 0;
    int right = 0;
    int sum = 0;
    int length = 0;

    while (right < n)
    {
        /* code */
        sum += arr[right];
        while(sum > k){
            sum -= arr[left];
            left++;
        }

        if(sum == k){
            length = max(length, right - left + 1);
        }

        right++;
    }

    return length;
}

int main()
{
    vector<int> arr = {1, 2, 3, 7, 5};
    int n = arr.size();
    int k = 12;
    cout << longestSubarrayWithSumK(arr, n, k) << endl;
    cout << longestSubarrayWithSumKOptimized(arr, n, k) << endl;
    cout << longestSubarrayWithSumKUsingMap(arr, n, k) << endl;
    cout << longestSubarrayWithSumKUsingPointers(arr, n, k) << endl;
    return 0;
}