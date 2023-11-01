class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n=nums.size();
        // vector<int>a(n+2);
        stack<pair<int,int>>st;
        st.push({INT_MIN,n});
        vector<int>a(n);
        vector<int>b(n);
        for(int i=n-1;i>=0;i--)
        {
            while(true)
            {
            auto x=st.top();
            if(x.first<nums[i])
            {
            b[i]=x.second;
            break;
            }
            else
            {
                st.pop();
            }
            }
            st.push({nums[i],i});
        }
          stack<pair<int,int>>st1;
           st1.push({INT_MIN,-1});
           for(int i=0;i<n;i++)
           {
                while(true)
            {
            auto x=st1.top();
            if(x.first<nums[i])
            {
            a[i]=x.second;
            break;
            }
            else
            {
                st1.pop();
            }
            }
            st1.push({nums[i],i});
           }
           int mi=INT_MIN;
           for(int i=0;i<n;i++)
           {
               int l=a[i];
               int r=b[i];
               if(l<k&&k<r)
               mi=max(mi,(r-l-1)*nums[i]);
            //    cout<<l<<" "<<r<<" "<<nums[i]<<"\n";
           }
           return mi;
        
    }
};