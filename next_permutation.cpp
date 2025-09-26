#include <bits/stdc++.h>
using namespace std;

void return_next_permutation(vector<int> arr)
{
    // use vector iterators, not pointers
    next_permutation(arr.begin(), arr.end());

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}

void return_next_permutation_optimized(vector<int> &arr, int n)
{
    int ind = -1;

    // 1. Find the pivot (first element from right where arr[i] < arr[i+1])
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1]) {
            ind = i;
            break;
        }
    }

    // 2. If no pivot -> reverse whole array
    if (ind == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    // 3. Find element just greater than arr[ind], from the right
    for (int i = n - 1; i > ind; i--)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }

    // 4. Reverse the suffix
    reverse(arr.begin() + ind + 1, arr.end());
}


int main()
{
    vector<int> arr = {1, 3, 2};
    return_next_permutation(arr);
    return_next_permutation_optimized(arr, arr.size());
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}
