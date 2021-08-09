class Solution {
public:
    bool isPerfectSquare(int num)
    {
        if(num==1)
            return true;
        else
        {
            long value=num/2;
            while(value>1)
            {
                if(value*value == num)
                    return true;
                value--;
            }
        }
        return false;
    }
};
