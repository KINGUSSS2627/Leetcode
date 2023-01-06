#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        int count = 0;
        sort(costs.begin(), costs.end());
        for (int i = 0; i < costs.size(); i++)
        {
            if (costs[i] > coins)
            {
                break;
            }
            coins -= costs[i];
            count++;
        }
        return count;
    }
};
int main()
{
    Solution s;
    vector<int> v = {1, 2, 3, 4, 6, 7, 5};
    int coins = 10;
    cout << s.maxIceCream(v, coins);
    return 0;
}