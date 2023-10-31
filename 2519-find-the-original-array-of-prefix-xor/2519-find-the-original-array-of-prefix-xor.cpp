class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int>ans(n);
        int y=0;
        ans[0]=pref[0];
        int z=0;
        for(int i=0;i<n;i++)
        {
           
           
           
            y=z^pref[i];
             ans[i]=y;
              z^=ans[i];
        }
        return ans;
        
    }
};