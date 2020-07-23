class Solution {
public:
    int myAtoi(string str) {
        
         int len=str.size();
        int flag=0;
         int ss;
       int mark=1;
        int c=0;
        int f2=0;
        long long int data=0;
        
        for(int i=0;i<len;i++)
        {
            if(str[i]!=' '&&(flag==0||flag==1))
            {    
                flag=1;
                if((str[i]>='A' and str[i]<='Z')||(str[i]>='a' and str[i]<='z')||(str[i]>=33 and str[i]<=42)||(str[i]>=':' and str[i]<='DEL')||(str[i]>='.' and str[i]<='/')||(str[i]==44))
                    return data*mark;
                if(str[i]=='-'){
                    if(f2)
                    {
                        return data*mark;
                    }
                    mark=-1;
                    c++;
                }
                else if(str[i]=='+'){
                    if(f2)
                    {
                        return data*mark;
                    }
                    mark=1;
                    c++;
                }
                else{
                int ss=str[i]-'0';
                data=data*10+ss;
                    f2=1;
                }
                if(c>=2)
                    return 0;

    
            }
           else if((str[i]==' ')&&flag==1)
            {
                return data*mark;
            }
         
           cout<<data<<endl;
            if (data*mark > INT_MAX  || (data *mark == INT_MAX && ss > 7))
            return INT_MAX;
              if (data*mark < INT_MIN  || (data *mark == INT_MIN  && ss < -8))
            return INT_MIN;
        }
        
            data=data*mark;
        return data;
      
        
        
    }
};
