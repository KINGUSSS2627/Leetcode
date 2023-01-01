#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        s += ' ';
        int c = 0;
        int p = pattern.size(), n = s.size();
        string str = "";
        vector<string> res;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ' ')
            {
                str += s[i];
            }
            else
            {
                res.push_back(str);
                str = "";
            }
        }
        int r = res.size();
        if (p != r)
        {
            return false;
        }
        for (int i = 0; i < p - 1; i++)
        {
            for (int j = i + 1; j < p; j++)
            {
                if (pattern[i] == pattern[j] && res[i] == res[j])
                {
                    c++;
                }
                else if (pattern[i] != pattern[j] && res[i] != res[j])
                {
                    c++;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{
    Solution s;
    string pattern = "abba", s1 = "dog cat cat dog";
    cout << s.wordPattern(pattern, s1) << endl;
}