#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& arr, int n) {
    vector<int> temp;
    for(int i = 0 ; i < n ; i++){
        if (arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    
    for (int i = 0; i < n ; i++)
    {
        /* code */
        if(i < temp.size()){
            arr[i] = temp[i];
        }
        else{
            arr[i] = 0;
        }
    }
    
    for(auto x : arr){
        cout<<x<<" ";
    }
}

void moveZerosOptimize(vector<int> &arr , int n){

    int j= -1;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1){
        return;
    }

    for(int i = j+1 ; i < n ; i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[j]);
            j++;
        }
    }

    for(auto x : arr){
        cout<<x<<" ";
    }
}

int main(){
    vector<int> arr = {0,1,0,3,12};
    int n = arr.size();

    moveZeroes(arr,n);
    cout<<endl;
    moveZerosOptimize(arr,n);
    return 0;
}