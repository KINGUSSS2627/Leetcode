#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
    {
        int totalCost = 0, totalFuel = 0, n = gas.size();
        for (int i = 0; i < n; i++)
        {
            totalCost += cost[i];
            totalFuel += gas[i];
        }
        if (totalCost > totalFuel)
        {
            return -1;
        }
        int indx = 0, cargas = 0;
        for (int i = 0; i < n; i++)
        {
            if (cargas < 0)
            {
                indx = i;
                cargas = 0;
            }
            cargas += (gas[i] - cost[i]);
        }
        return indx;
    }
};
int main()
{
    Solution s;
    vector<int> cost = {3, 4, 5, 1, 2};
    vector<int> gas = {1, 2, 3, 4, 5};
    cout << s.canCompleteCircuit(gas, cost);
    return 0;
}