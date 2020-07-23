class Solution {
public:
    int reverse(int x) {
        
        int mark=1;
        if(x==-2147483648)
            return 0;
        if(x<0){
            mark=-1;
            x=x*mark;
        }
        
        string s=to_string(x);
        //reverse(s.begin(),s.end());
       // reverse(s.begin(), s.end());
       s= string(s.rbegin(),s.rend()); 
        int len=s.size();
        int flag=0;
         int ss;
       
        long long int data=0;
        
        for(int i=0;i<len;i++)
        {
            if(s[i]!='0'&&(flag==0||flag==1))
            {    
                flag=1;
                int ss=s[i]-'0';
                data=data*10+ss;
                
    
            }
            else if(s[i]=='0'&&flag==1)
            {
                ss=s[i]-'0';
                data=data*10+ss;
            }
            cout<<data<<endl;
            if (data*mark > INT_MAX  || (data *mark == INT_MAX && ss > 7))
            return 0;
              if (data*mark < INT_MIN  || (data *mark == INT_MIN  && ss < -8))
            return 0;
        }
        
            data=data*mark;
        return data;
        
    }
};
