class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int x=n/3;
        sort(piles.rbegin(),piles.rend());
        int s=0;int k=1;
        for(int i=0;i<x;i++)
        {
            s+=piles[k];
            k+=2;
        }
        return s;
        
    }
};