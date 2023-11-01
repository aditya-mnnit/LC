class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        long long s=0,p=0,q=0;;
        vector<int>v;
        int n=nums1.size();
    
        for(int i=0;i<n;i++)
        {
            v.push_back(nums1[i]-nums2[i]);
            s+=v[i];
            if(v[i]>=0)
            p+=v[i];
            else
            q+=v[i];
        }
        if(s==0)
        {
            if(k==0)
            {
            if(p>0)
            return -1;
            else
            return 0;
            }
            for(int i=0;i<v.size();i++)
            {
                if(abs(v[i])%k!=0)
                return -1;
            }
             return p/k;
           
        }
        else
        return -1;
        

       
    }
};