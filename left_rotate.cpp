#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> nums(arr.size());
    int k=2; // number of rotations
    for (int i = 1; i < arr.size(); i++)
    {
        /* code */
        if(i < k){
            nums[nums.size()-k+i] = arr[i];
        }else{
            nums[i-k] = arr[i];
        }
    }
    nums[nums.size()-1] = arr[0];
    
    for(auto x : nums){
        cout<<x<<" ";
    }
}