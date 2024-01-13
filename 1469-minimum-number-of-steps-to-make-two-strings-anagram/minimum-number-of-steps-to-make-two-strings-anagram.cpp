class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        vector<int>v(26,0);
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            v[t[i]-'a']--;
            if(v[t[i]-'a']<0)
            c++;
        }
        return c;
    }
};