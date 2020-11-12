class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x<0)
            return false;
        if(x==0)
            return true;
        else if(x>0)
        {
            long long int rev=0,val;
                val=x;
            while(x)
            {
               rev=rev*10+x%10;
                x=x/10;
            }
            if(val==rev)
                return true;
            else
                return false;
        }
          
        return false;
        
    }
};
