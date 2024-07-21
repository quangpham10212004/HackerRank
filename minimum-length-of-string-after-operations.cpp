class Solution {
public:
    int minimumLength(string s) {
        map<char, int> m;
        for (int i = 0; i < s.length(); i++)
            m[s[i]]++;
        int temp = 0;
        for (auto x : m) {
            if (x.second % 2 == 0)
                temp -= (x.second - 2);
            else
                temp -= (x.second - 1);
        }
        return s.length() + temp;
    }
};