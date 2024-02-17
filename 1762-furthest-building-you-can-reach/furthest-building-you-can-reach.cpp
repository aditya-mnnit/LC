class Solution {
public:
    int furthestBuilding(vector<int>& nums, int bricks, int ladder) {
        int n=nums.size();
        int c=1;
        int ans=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        int k=1e9;
        for(int i=0;i<n-1;i++)
        {
             
            if(nums[i+1]<=nums[i])
            {
                ans=i+1;
            continue;
            }
            else
            {
            if(ladder==0)
            {
                k=i;
                break;
            }
            else
            {
            pq.push(nums[i+1]-nums[i]);
            ladder--;
            ans=i+1;
            }
            }
            if(i==n-2)
            return n-1;
           
           
        }

       for(int i=k;i<n-1;i++)
       {
           if(nums[i+1]<=nums[i])
           {
               ans=i+1;
            continue;
           }
            else
            {
                 int req=nums[i+1]-nums[i];
                if(pq.empty())
                {
                if(req>bricks)
                {
                    ans=i;
                    break;
                }
                 else
                    {
                    bricks-=req;
                    ans=i+1;
                    }
                }
                else
                {
               
                int x=pq.top();
                if(x>=req)
                {
                    if(req>bricks)
                    {
                        ans=i;
                        break;
                    }
                    else
                    {
                    bricks-=req;
                    ans=i+1;
                    }
                }
                else
                {
                    if(x>bricks)
                    {
                        ans=i;
                        break;
                    }
                    else
                    {
                        bricks-=x;
                        ans=i+1;
                        pq.pop();
                        pq.push(req);
                    }
                }
                }
                ans=i+1;
            }
       }

        return ans;
    }
};