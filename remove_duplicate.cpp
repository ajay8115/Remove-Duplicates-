// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

string removeDups(string s)
{
    int n = s.size();
    unordered_set<char> st;
    string t = "";
    for (int i = 0; i < n; i++)
    {
        if (st.find(s[i]) == st.end())
        {
            t += s[i];
            st.insert(s[i]);
        }
    }

    return t;
}