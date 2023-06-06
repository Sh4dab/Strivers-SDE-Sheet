#include <bits/stdc++.h> 

int maximumProfit(vector<int> &prices){
    int minPrice=INT_MAX;
    int maxPrice=INT_MIN;
    for(int i=0;i<prices.size();i++){
        minPrice=min(minPrice,prices[i]);
        maxPrice=max(maxPrice,prices[i]-minPrice);
    }
    return maxPrice;
}