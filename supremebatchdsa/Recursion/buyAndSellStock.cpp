#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

int main()
{
  int minPrice = INT_MAX;
  int maxProfit = 0;

  // vector<int> v = {7, 6, 4, 3, 1};
  vector<int> v = {2, 4, 1};
  // this is brute force we have to optimize it

  for (int i = 0; i < v.size(); i++)
  {
    for (int j = i + 1; j < v.size(); j++)
    {
      maxi = max(maxi, v[j] - v[i]);
    }
  }
  if (maxi < 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << maxi << endl;
  }
  for (int i = 0; i < v.size(); i++)
  {
    minPrice = min(minPrice, v[i]);
    // cout << minPrice << endl;
    maxProfit = max(maxProfit, v[i] - minPrice);
    // cout<<maxProfit <<endl;
  }
  cout << minPrice << endl;
  cout << maxProfit << endl;

  return 0;
}