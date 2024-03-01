class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        string ans="";
        // ans.push_back(1);
        for(int i=0; i<cnt-1; i++){
            ans.push_back('1');
        }
        for(int i=0; i<n-cnt; i++){
            ans.push_back('0');
        }
        ans.push_back('1');
        // reverse(ans.begin(),ans.end());
        return ans;
        
    }
};