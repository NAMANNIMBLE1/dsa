#include<bits/stdc++.h>
using namespace std;

int search_item(vector<int> arr, int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int target = 4;

    int ans = search_item(arr, n, target);
    if(ans != -1){
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}