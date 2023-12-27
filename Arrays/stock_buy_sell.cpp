#include <iostream>
#include <vector>
#include <algorithm> // for max function

using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.empty()) {
        return 0; // No prices, no profit
    }

    int buy = 0;
    int sell = 0;

    for(int i=1;i<prices.size();i++) {
        if(prices[i] < prices[buy]) {
            buy = i;
        }
        else{
            sell = max(sell,prices[i] - prices[buy]);
        }
     }
    return sell;
}

int main() {
    vector<int> prices = {7, 1, 5, 4, 6, 3};

    cout << "Maximum Profit: " << maxProfit(prices) << "\n";
    return 0;
}
