class Solution {
public:
    int tribonacci(int n) {
        int a=0;
        int b=1;
        int c=1;
    
        int res=0;
        if(n==0)
            return 0;
        if(n==1||n==2)
            return 1;
        n-=2;
        
        while(n--)
        {
            res=a+b+c;
            a=b;
            b=c;
            c=res;
        }
        return res;
    }
};
