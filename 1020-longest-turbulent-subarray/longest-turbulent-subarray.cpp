class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        
        int n=arr.size();
        
        //Basic basecase
        if(n==1) return 1;
        else if(n==2)
        {
            if(arr[0]<arr[1]) return 2;
            else if(arr[0]>arr[1]) return 2;
            else return 1;
        }
        
        //main solution
        int maxlen=INT_MIN, c=0, cnt=1;
        for(int i=1; i<n-1; i++)
        {
            //checking if all elements are same
            if(arr[i]==arr[0]) cnt++;
            
            //count hill or valley
            if( (arr[i]<arr[i+1] && arr[i]<arr[i-1]) || 
               (arr[i]>arr[i+1] && arr[i]>arr[i-1]) )
                c++;
            else if(arr[i]==arr[i+1] && arr[i]==arr[i-1])
                maxlen = max(maxlen, 1);
            else
            {
                maxlen = max(maxlen, c+2);
                c=0;
            }
        }
        
        //checking if all elements are same
        if(arr[n-1]==arr[0]) cnt++;
        
        //if all ele are equal return 1
        if(cnt==n) return 1;
        else maxlen = max(maxlen, c+2);
        
        return maxlen;  
    }
};