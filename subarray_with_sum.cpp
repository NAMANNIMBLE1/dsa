#include<bits/stdc++.h>
using namespace std;

int subarray_sum_count(vector<int> arr , int n , int k){

    if(n==0)
        return 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == k){
                count++;
            }
        }
        
    }
    return count;
}

int subarray_count_map(vector<int> arr , int n , int k) {
    unordered_map<int,int> mp;
    int prefix_sum = 0;
    int count = 0;

    mp[0] = 1; 

    for (int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        if (mp.find(prefix_sum - k) != mp.end()) {
            count += mp[prefix_sum - k];
        }

        mp[prefix_sum]++;
    }
    return count;
}


int main()
{

    vector<int> arr = {3, 1, 2, 4};
    int n = arr.size();
    int k = 6;

    cout<<subarray_sum_count(arr,n,k);
    cout<<endl;
    cout<<subarray_count_map(arr,n,k);

    return 0;
}