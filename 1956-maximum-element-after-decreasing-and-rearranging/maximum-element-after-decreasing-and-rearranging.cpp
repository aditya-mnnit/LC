class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int mx=1;
        arr[0]=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>1)
            arr[i]=arr[i-1]+1;
            mx=max(mx,arr[i]);
        }
        return mx;
    }
};