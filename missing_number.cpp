#include<bits/stdc++.h>
using namespace std;

void missingNumber(vector<int>& arr, int n)
{
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<total-sum;
}

void xor_missing(vector<int> &arr , int n){
    int xor1=0;
    int xor2=0;
    for(int i = 0 ; i < n ; i++){
        xor1 ^= arr[i];
        xor2 ^=i+1;
    }

    cout<<(xor1^xor2);
}


int main()
{
    vector<int> arr={3,0,1};
    int n=arr.size();
    
    missingNumber(arr,n);
    cout<<endl;
    xor_missing(arr,n);
    return 0;
}