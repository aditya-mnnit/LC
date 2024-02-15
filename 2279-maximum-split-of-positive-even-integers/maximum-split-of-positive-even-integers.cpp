
class Solution {
public:

    vector<long long> maximumEvenSplit(long long n) {
       
       if(n&1)
       return {};
        vector<long long>ans;
       long long k=2;
       while(n>0)
       {
           if(n>=k)
           {
           ans.push_back(k);
          
           n-=k;
           }
           else
           {
        ans.back()+=n;
        break;
           }
            k+=2;
       }
      
        return ans;
    }
};