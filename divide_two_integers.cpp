class Solution {
public:
    int divide(int dividend, int divisor)
    {
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;
        long divend=labs(dividend),divsor=labs(divisor),ans=0;
        int sign=((dividend<0) ^ (divisor<0))?-1:1;
        while(divend>=divsor)
        {
            long temp=divsor,q=1;
            while(temp<<1 <=divend)
            {
                q<<=1;
                temp<<=1;
            }
            divend-=temp;
            ans+=q;
        }	
		return ans*sign;
    }
};
