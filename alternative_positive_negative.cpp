#include <bits/stdc++.h>
using namespace std;

void alternate_positive_negative(vector<int> &arr, int n)
{
    vector<int> pos, neg;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
}

void alternate_positive_negative_optimized(vector<int> &arr, int n)
{
    int neg_index = 1;
    int pos_index = 0;

    vector<int> ans(n,0);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans[neg_index] = arr[i];
            neg_index += 2;
        }
        else
        {
            ans[pos_index] = arr[i];
            pos_index += 2;
        }
    }

    for(int i = 0 ; i < n ; i++){
        arr[i] = ans[i];
    }
}

void alternative_positive_negative_uneven_length(vector<int> &arr , int n) {
    vector<int> positive;
    vector<int> negative;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < 0){
            negative.push_back(arr[i]);
        } else {
            positive.push_back(arr[i]);
        }
    }

    int i = 0, j = 0, k = 0;

    // Alternate while both remain
    while(i < positive.size() && j < negative.size()){
        arr[k++] = positive[i++];
        arr[k++] = negative[j++];
    }

    // Append leftovers
    while(i < positive.size()){
        arr[k++] = positive[i++];
    }
    while(j < negative.size()){
        arr[k++] = negative[j++];
    }
}

int main()
{
    vector<int> arr = {1, 2, -4, -5};
    int n = arr.size();
    // alternate_positive_negative(arr, n);
    // alternate_positive_negative_optimized(arr, n);
    alternative_positive_negative_uneven_length(arr,n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}