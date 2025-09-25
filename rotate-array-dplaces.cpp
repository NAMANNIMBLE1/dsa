#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr, int k){
    // copy the first till k elements to a temp array
    vector<int> temp(k);
    for(int i = 0 ; i < k ; i++){
        temp[i] = arr[i];
    }
    
    // shift the rest of the elements to the left by k places
    for(int i = 0 ; i < arr.size() - k ; i++){
        arr[i] = arr[i + k];
    }

    // copy the elements from temp array to the end of the original array
    for(int i = 0 ; i < k ; i++){
        arr[arr.size() - k + i] = temp[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
}

void reverse(vector<int> &arr , int start , int end){
    while (start < end)
    {
        /* code */
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}

void reverseArray(vector<int> &arr , int k)
{
    reverse(arr,0,arr.size()-k-1);
    reverse(arr,arr.size()-k , arr.size()-1);
    reverse(arr,0,arr.size()-1);
    
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int k=2; // number of rotations
    // rotateArray(arr, k);
    reverseArray(arr, k);

    for (int i = 0; i < arr.size(); i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    return 0;
}