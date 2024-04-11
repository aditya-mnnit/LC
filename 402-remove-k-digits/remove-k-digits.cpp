class Solution {
public:
    string removeKdigits(string s, int k) {
        int n=s.size();
        stack<char>st;
        int c=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            char x=s[i];
            while(f==0&&!st.empty()&&st.top()>x)
            {
                // cout<<st.top()<<" ";
                st.pop();
                c++;
                 if(c==k)
                 {
                    f=1;
                    break;
                 }
            }
         
            st.push(x);
           
        }
        string w="";
        for(int i=c;i<k;i++)
        {
            if(!st.empty())
            {
               
                st.pop();
            }
        }
        while(!st.empty())
        {
            w.push_back(st.top());
            st.pop();
        }
        cout<<w<<" ";
        for(int i=w.size()-1;i>=0;i--)
        {
            if(w[i]=='0')
            w.pop_back();
            else
            break;
        }
       reverse(w.begin(),w.end());
       if(w.size()==0)
       w.push_back('0');
       
        return w;
    }
};