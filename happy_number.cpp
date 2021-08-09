class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7)
            return true;
        else if(n<10)
            return false;
        else
        {
            int sum=0;
            while(n)
            {
                int rem=n%10;
                sum=sum+(rem*rem);
                n=n/10;
            }
            return isHappy(sum);
        }
    }
};
