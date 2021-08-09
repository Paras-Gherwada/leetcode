class Solution {
public:
    int fib(int N) {
        int result=0;
        int first=0,second=1,third;
        while(N!=0)
        {
            third=first+second;
            first=second;
            second=third;
            N--;
        }
        return first;
    }
};
