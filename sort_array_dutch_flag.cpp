#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n){
    sort(arr.begin(), arr.end());

    for( auto &it : arr){
        cout<<it<<" ";
    }
}


void sortArrayDutch(vector<int> & arr , int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while (mid <= high)
    {
        /* code */

        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            mid++;
            high--;
        }
    }
}

int main(){
    vector<int> arr = {0,1,2,0,1,2,1,0};
    int n = arr.size();

    // sortArray(arr, n);
    sortArrayDutch(arr,n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    return 0;
}