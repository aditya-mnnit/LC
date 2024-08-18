class Solution {
public:
    
    string largestPalindrome(int n, int k) {
        string s(n,' ');
        if(k==1)
        {
            for(int i=0;i<n;i++)
                s[i]='9';
        }
        else if(k==2)
        {
            if(n==1)
                return "8";
            else
            {
                s[0]='8';
                s[n-1]='8';
                for(int i=1;i<n-1;i++)
                    s[i]='9';
            }
        }
        else if(k==3)
        {
            // ll su=0;
            for(int i=0;i<n;i++)
            {
                s[i]='9';
                // su+=9;
            }
            // if(su%3==0)
            //     return s;
            // else if(su%3==1)
            // {
            //     if(n&1)
            //     {
            //         s[n/2]='8';
            //     }
            //     else
            //     {
            //         s[n/2]='7';
            //         s[(n/2)-1]='7';
            //     }
            // }
            // else if(su%3==2)
            // {
            //     if(n&1)
            //     {
            //         s[n/2]='7';
            //     }
            //     else
            //     {
            //         s[n/2]='8';
            //         s[(n/2)-1]='8';
            //     }
            // }
        }
        else if(k==4)
        {
            if(n==1)
                return "8";
            else if(n==2)
                return "88";
            else if(n==3)
                return "888";
            else
            {
                s[0]='8';
                s[n-1]='8';
                s[1]='8';
                s[n-2]='8';
                for(int i=2;i<n-2;i++)
                    s[i]='9';
            }
            
        }
        else if(k==5)
        {
            if(n==1)
                return "5";
            else
            {
                s[0]='5';
                s[n-1]='5';
                for(int i=1;i<n-1;i++)
                    s[i]='9';
            }
        }
        else if(k==6)
        {
            if(n==2)
                return "66";
            if(n==1)
                return "6";
            int su=0;
            for(int i=0;i<n;i++)
            {
                if(i==0||i==n-1)
                {
                    s[i]='8';
                    su+=8;
                }
                else
                {
                s[i]='9';
                    su+=9;
                }
            }
             if(su%3==0)
                return s;
            else if(su%3==1)
            {
                if(n&1)
                {
                    s[n/2]='8';
                }
                else
                {
                    s[n/2]='7';
                    s[(n/2)-1]='7';
                }
            }
            else if(su%3==2)
            {
                if(n&1)
                {
                    s[n/2]='7';
                }
                else
                {
                    s[n/2]='8';
                    s[(n/2)-1]='8';
                }
            }
        }
        else if(k==8)
        {
            if(n<=6)
            {
            for(int i=0;i<n;i++)
                s[i]='8';
            }
            else
            {
                s[0]='8';
                s[1]='8';
                s[2]='8';
                s[n-1]='8';
                s[n-2]='8';
                s[n-3]='8';
                for(int i=3;i<n-3;i++)
                    s[i]='9';
            }
        }
        else if(k==7)
        {
              s="";
           if(n%2==0) {
                if(n==2) return "77";
              
                for(int i = 0; i < n; i++) {
                    if(i == n/2 || i == n/2-1) {
                        if(n/2%6==0) {
                            s.push_back('9');
                        } else if(n/2%6==1) {
                            s.push_back('7');
                        } else if(n/2%6==2) {
                            s.push_back('7');
                        } else if(n/2%6==3) {
                            s.push_back('9');
                        } else if(n/2%6==4) {
                            s.push_back('4');
                        } else if(n/2%6==5) {
                            s.push_back('4');
                        }
                    }
                    else s.push_back('9');
                }
            } else {
                if(n==1) return "7";
                for(int i = 0; i < n; i++) {
                    if(i == n/2) {
                        if(n/2%6==0) {
                            s.push_back('7');
                        } else if(n/2%6==1) {
                            s.push_back('5');
                        } else if(n/2%6==2) {
                            s.push_back('7');
                        } else if(n/2%6==3) {
                            s.push_back('4');
                        } else if(n/2%6==4) {
                            s.push_back('6');
                        } else if(n/2%6==5) {
                            s.push_back('4');
                        }
                    }
                    else s.push_back('9');
                }
            }
        }
        else if(k==9)
        {
             for(int i=0;i<n;i++)
            {
                s[i]='9';
                // su+=9;
            }
        }
        return s;
    }
};