class Solution {
public:
    bool isPalindrome(int x)
    {
        bool palindrome=false;
        if(x>=0)
        {
            int rem=0,num=x;
            long rev=0;
            while(num!=0)
            {
                rem=num%10;
                rev=(10*rev)+rem;
                num=num/10;
            }
            if(rev==x)
                palindrome=true;
        }
        return palindrome;
    }
};
