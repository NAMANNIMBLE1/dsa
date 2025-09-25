#include<bits/stdc++.h>
using namespace std;

void max_zeroes(vector<int> arr , int n){
    int count = 0;
    int maxCount = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 1){
            count++;
            maxCount = max(maxCount,count);
        }
        else{
            count = 0;
        }
    }

    cout<<maxCount<<endl;
}

int main(){
    vector<int> arr = {1,1,0,1,1,1};
    int n = arr.size();
    max_zeroes(arr,n);
    return 0;
}