#include <bits/stdc++.h>
using namespace std;

int max_subarray_sum(vector<int> &arr, int n)
{
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int current_sum = 0;
        for (int j = i; j < n; j++)
        {
            current_sum += arr[j];
            max_sum = max(max_sum, current_sum);
        }
    }
    return max_sum;
}

int max_subarray_sum_optimized(vector<int> &arr, int n)
{
    int max_sum = INT_MIN;
    int current_sum = 0;
    int substart = -1, subend = -1;
    int start = 0;
    

    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        if(current_sum == 0)
            start = i;

        if(current_sum > max_sum){
            max_sum = current_sum;
            substart = start;
            subend = i;
        }

        if (current_sum < 0)
            current_sum = 0;
    }

    for (int i = substart; i <= subend; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return max_sum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();

    cout << max_subarray_sum(arr, n) << endl;
    cout << max_subarray_sum_optimized(arr, n) << endl;
    return 0;
}