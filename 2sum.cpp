#include<bits/stdc++.h>
using namespace std;

void two_sum_array(vector<int> arr , int n , int t){
    if(n == 0){
        cout<<"Array is empty"<<endl;
        return;
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] + arr[j] == t){
                cout<<"Pair is ("<<arr[i]<<","<<arr[j]<<")"<<endl;
                return;
            }
        }
    }
}


void two_sum_hashmap(vector<int> arr , int n , int t){
    if(n == 0){
        cout<<"Array is empty"<<endl;
        return;
    }

    unordered_map<int,int> mp;
    for(int i = 0 ; i < n ; i++){
        int complement = t - arr[i];
        if(mp.find(complement) != mp.end()){
            cout<<"Pair is ("<<arr[i]<<","<<complement<<")"<<endl;
            return;
        }
        mp[arr[i]]++;
    }
}

int main(){
    vector<int> arr={2,7,11,15};
    int target = 9;
    int n = arr.size();

    two_sum_array(arr,n,target);
    two_sum_hashmap(arr,n,target);
    return 0;
}