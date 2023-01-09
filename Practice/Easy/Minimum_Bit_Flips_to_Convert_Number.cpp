#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minBitFlips(int start, int goal)
    {
        string str = bitset<32>(start).to_string();
        string str2 = bitset<32>(goal).to_string();
        int count = 0;
        for (int i = 0; i < 32; i++)
            if (str[i] != str2[i])
                count++;
        return count;
    }
};
int main()
{
    int a = 5, b = 4;
    Solution s;
    cout << s.minBitFlips(a, b);
    return 0;
}