class Solution {
public:
    int addNum(int num)
    {
        int sum=0;
        while(num)
        {
            int digit=num%10;
            sum=sum+digit;
            num=num/10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(num<10)
            return num;
        else
        {
            while(1)
            {
                num=addNum(num);
                if(num<10)
                    break;
            }
        }
        return num;
    }
};
