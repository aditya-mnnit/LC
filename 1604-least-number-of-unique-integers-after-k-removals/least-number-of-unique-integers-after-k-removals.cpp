class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>v;
        for(auto x:mp)
        v.push_back(x.second);
        sort(v.begin(),v.end());
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            k-=v[i];
            if(k<0)
            break;
            else
            c++;
        }
        return mp.size()-c;
    }
};