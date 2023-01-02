#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        if (word.size() == 1)
        {
            return true;
        }
        int c = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (isupper(word[i]))
            {
                c++;
            }
        }
        if ((c == 1 && isupper(word[0])) || c == 0 || c == word.size())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    string s = "USA", s1 = "India", s2 = "paKistan";
    Solution q;
    cout << q.detectCapitalUse(s) << '\n';
    cout << q.detectCapitalUse(s1) << '\n';
    cout << q.detectCapitalUse(s2);
    return 0;
}