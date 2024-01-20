class Solution {
public:
int mod=1e9+7;
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>st;
        vector<int>v;
         int n=arr.size();
          vector<int>a(n);
        vector<int>b(n);
        v.push_back(INT_MIN);
        for(int i=0;i<n;i++)
        {
            v.push_back(arr[i]);
        }

        v.push_back(INT_MIN);
        // arr=v;
      
       
        
        // a[n]=0;
        st.push(n+1);
        for(int i=n;i>=1;i--)
        {
        while(v[st.top()]>=v[i])
        {
            st.pop();
        }
        a[i-1]=st.top();
        st.push(i);

        }
          stack<int>st1;
        // arr[0]=INT_MIN;
        st1.push(0);
        for(int i=1;i<=n;i++)
        {
        while(v[st1.top()]>v[i])
        {
            st1.pop();
        }
        b[i-1]=st1.top();
        st1.push(i);

        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
        for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
        cout<<"\n";
        long s=0;
        for(int i=0;i<n;i++)
        {
            long  ld=i+1-b[i];
            long  rd=a[i]-i-1;
            s+=(1LL*(ld%mod)*(rd%mod)*(v[i+1]%mod))%mod;
            s%=mod;
        }

        return s%mod;
    }
};