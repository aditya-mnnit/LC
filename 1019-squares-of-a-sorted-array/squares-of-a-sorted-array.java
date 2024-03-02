class Solution {
    public int[] sortedSquares(int[] nums) {
        int a[]=new int[10001];
        int n=nums.length;
        int ans[]=new int[n];
        for(int i=0;i<n;i++)
        {
            int x=Math.abs(nums[i]);
            a[x]++;
        }
        int k=0;
        for(int i=0;i<10001;i++)
        {
            while(a[i]>0)
            {
                ans[k]=i*i;
                a[i]--;
                k++;
            }
        }
        return ans;
    }
}