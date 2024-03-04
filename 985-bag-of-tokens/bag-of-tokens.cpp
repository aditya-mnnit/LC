class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int i=0;int  j=tokens.size()-1;
        int s=0;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                s++;
                power-=tokens[i];
                i++;
            }
            else
            {
                if(power+tokens[j]>=tokens[i]&&i!=j&&s>0)
                {
                    s--;
                    power+=tokens[j];
                    j--;

                }
                else
                break;
            }
        }
        return s;
        
    }
};