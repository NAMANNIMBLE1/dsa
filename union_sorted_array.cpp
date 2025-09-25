#include<bits/stdc++.h>
using namespace std;

void union_array(vector<int> &arr , vector<int> &brr , int n , int m)
{
    map<int,int> mp;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        /* code */
        mp[arr[i]]++;
    }
    
    for (int i = 0; i < m; i++)
    {
        /* code */
        mp[brr[i]]++;
    }

    for(auto &it : mp)
    {
        // cout<<it.first<<" "<<it.second<<endl;
        if(it.second >= 1)
        {
            ans.push_back(it.first);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}


void union_array_pointers(vector<int> &arr , vector<int> &brr , int n , int m) {
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        if (arr[i] <= brr[j]) {
            if (ans.empty() || ans.back() != arr[i]) {
                ans.push_back(arr[i]);
            }
            i++;
        } else {
            if (ans.empty() || ans.back() != brr[j]) {
                ans.push_back(brr[j]);
            }
            j++;
        }
    }

    while (i < n) {
        if (ans.empty() || ans.back() != arr[i]) {
            ans.push_back(arr[i]);
        }
        i++;
    }

    while (j < m) {
        if (ans.empty() || ans.back() != brr[j]) {
            ans.push_back(brr[j]);
        }
        j++;
    }

    for (auto x : ans) {
        cout << x << " ";
    }
    cout << endl;
}


int main()
{
    vector<int> arr={1,2,3,4,5};
    vector<int> brr={2,3,4,5,6};
    int n = arr.size();
    int m = brr.size();
    
    union_array(arr,brr,n,m);
    cout<<endl;
    union_array_pointers(arr,brr,n,m);
    return 0;
}