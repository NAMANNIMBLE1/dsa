#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithNegative(vector<int> arr, int n , int k) {
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


int longestSubarrayWithNegativeOptimized(vector<int> arr, int n , int k) {
    int length = 0;
    unordered_map<int, int> prefixSumMap;
    int prefixSum = 0;

    for(int i = 0 ; i < n ; i++){
        prefixSum += arr[i];

        if(prefixSum == k){
            length = max(length, i + 1);
        }

        if(prefixSumMap.find(prefixSum - k) != prefixSumMap.end()){
            length = max(length, i - prefixSumMap[prefixSum - k]);
        }

        if(prefixSumMap.find(prefixSum) == prefixSumMap.end()){
            prefixSumMap[prefixSum] = i;
        }
    }
    return length;
}

int main(){

    vector<int> arr = {1, -2, 3, 4, -5, 6, -7, 8, 9};
    int k = 10;
    int n = arr.size();

    int result = longestSubarrayWithNegative(arr, n,k);
    cout << "Length of the longest subarray with negative numbers: " << result << endl;
    int resultOptimized = longestSubarrayWithNegativeOptimized(arr, n,k);
    cout << "Length of the longest subarray with negative numbers Optimized: " << resultOptimized << endl;
    return 0;
}