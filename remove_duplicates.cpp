#include<bits/stdc++.h>
using namespace std;

void remove_duplicates(vector<int> arr, int n)
{
    if(n==0 || n==1) return;
    set<int> s;

    for(auto x : arr){
        s.insert(x);
    }

    for(auto x : s){
        cout<<x<<" ";   
    }
}

int main() {
    vector<int> arr ={1,2,4,7,7,5};  
    int n=arr.size();
    remove_duplicates(arr,n);
    return 0;
}