#include<bits/stdc++.h>
using namespace std;

int max_profit_stock(vector<int> &prices , int n){
    int max_profit = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            int profit = prices[j] - prices[i];
            max_profit = max(max_profit , profit);
        }
    }
    return max_profit;
}

int max_profit_stock_optimized(vector<int> &prices , int n){
    int min_price = INT_MAX;
    int max_profit = 0;

    for(int i = 0 ; i < n ; i++){
        min_price = min(min_price , prices[i]);
        int profit = prices[i] - min_price;
        max_profit = max(max_profit , profit);
    }
    return max_profit;
}
int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    cout << max_profit_stock(prices , n) << endl;
    cout << max_profit_stock_optimized(prices , n) << endl;
    return 0;
}