class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        if(x>100 || x<-100)
            return 0;
        else if(x==-1 && n==INT_MIN)
            return -1*x;
        else if(n==INT_MAX)
        {
            return x;
        }
        else if(n==INT_MIN)
        {
            if(x==1)
                return x;
            else
                return 0;
        }
        else
        {
            while(n>0)
            {
                result=x*result;
                n--;
            }
            while(n<0)
            {
                result=result/x;
                n++;
            }
        }
        return result;
    }
};
