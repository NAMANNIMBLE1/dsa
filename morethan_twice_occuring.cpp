#include<bits/stdc++.h>
using namespace std;

int countOcuurance(vector<int> arr , int n){
    unordered_map<int,int> mp;
    for(auto x : arr){
        mp[x]++;
    }

    for(auto &it : mp){
        if(it.second > n/2){
            return it.first;
        }
    }
    return -1;
}


int countOcuuranceMoorseVoting(vector<int> arr , int n){
    int element = 0;
    int count = 0;

    for(int i = 0 ; i < n ; i++){
        if(count == 0){
            element = arr[i];
            count = 1;
        }
        else if(arr[i] == element){
            count++;
        }
        else{
            count--;
        }
    }
    if(count > n/2){
        return element;
    }
    return -1;
}

int main(){

    vector<int> arr = {4,4,4,4,4,4,4, -4, -5};
    int n = arr.size();

    cout<<countOcuurance(arr,n)<<endl;
    cout<<countOcuuranceMoorseVoting(arr,n);
    return 0;
}