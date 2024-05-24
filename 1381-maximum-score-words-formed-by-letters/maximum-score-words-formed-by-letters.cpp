class Solution {
public:
unordered_map<char,int>mp;
int ans=INT_MIN;
void f(int i,int mx,vector<string>& words,vector<int>&score)
{
    if(i==words.size())
    {
        ans=max(ans,mx);
        return;
    }
    int s=0;
    int fl=-1;
       for(int j=0;j<words[i].size();j++)
    {
        if(mp[words[i][j]]>0)
        {
            s+=score[words[i][j]-'a'];
            mp[words[i][j]]--;
        }
        else
        {
            fl=j;
            break;
        }
    }
     if(fl!=-1)
    {
        s=0;
        for(int j=0;j<fl;j++)
        {
        mp[words[i][j]]++;
        }

    }
    f(i+1,mx+s,words,score);
    if(fl==-1)
    {
          for(int j=0;j<words[i].size();j++)
        {
        mp[words[i][j]]++;
        }
        s=0;
    }
    f(i+1,s+mx,words,score);

}

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        int n=words.size();
        int m=letters.size();
      //  unordered_map<char,int>mp;
        for(int i=0;i<m;i++)
        mp[letters[i]]++;
        // vector<vector<int>>dp(n+1,vector<int>(1<<16,-1));
f(0,0,words,score);
    return ans;

    }
};