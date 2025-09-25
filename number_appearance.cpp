#include<bits/stdc++.h>
using namespace std;

void countConsecutiveOnes(vector<int> arr, int n){
    map<int,int> mp;
    for(int i = 0 ; i < n ; i++){
        mp[arr[i]]++;
    }

    for(auto it : mp){
        // cout<<it.first<<" "<<it.second<<endl;
        if(it.second == 1){
            cout<<"single appearance of number is "<<it.first<<endl;
        }
    }
}

void consecutiveOnesXor(vector<int> &arr, int n){
    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    cout<<"XOR of all the elements is "<<xorr<<endl;
}


int main(){
    vector<int> arr={4,1,2,1,2};
    int n = arr.size();

    countConsecutiveOnes(arr,n);
    consecutiveOnesXor(arr,n);
    return 0;
}