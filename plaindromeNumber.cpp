class Solution {
public:
    bool isPalindrome(int x) {
        long long int y=x;
         long long int rev=0;
        if(x<0)
            return false;
        else
        {
            int r=0;
           
            while(x!=0)
            {
                r=x%10;
                rev=rev*10+r;
                x=x/10;
            }
        }
        int z=y-rev;
        if(z==0)
            return true;
        else
            return false;
    }
};
