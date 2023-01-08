#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        int n = points.size();
        if (n < 2)
            return n;
        int ans = 2;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int total = 2;
                for (int k = j + 1; k < n; k++)
                {
                    if ((points[j][1] - points[i][1]) * (points[i][0] - points[k][0]) == (points[i][1] - points[k][1]) * (points[j][0] - points[i][0]))
                    {
                        total++;
                    }
                }
                ans = max(ans, total);
            }
        }
        return ans;
    }
};
int main()
{
    vector<vector<int>> v = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};
    Solution s;
    cout << s.maxPoints(v);
    return 0;
}