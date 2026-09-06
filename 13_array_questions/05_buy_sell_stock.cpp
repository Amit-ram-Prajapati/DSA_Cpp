#include <iostream>
using namespace std;

int maxProfit(int arr[], int n)
{
    int maxProfit = 0;
    int bestBuy[10000];
    bestBuy[0] = INTPTR_MAX;
    // cout << bestBuy[0] << ",";
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], arr[i - 1]);
        // cout << bestBuy[i] << ",";
    }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        int profit = arr[i] - bestBuy[i];
        maxProfit = max(maxProfit, profit);
        // cout << profit << ",";
    }
    

    return maxProfit;
}

int main()
{

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    cout << " "<<maxProfit(prices, n);

    return 0;
}