class Solution {
public:
    int calc_permutations(int first,int second,int& n)
    {
        int third=0;
        for(int i=3;i<=n;i++)
        {
            third=first+second;
            first=second;
            second=third;
        }
        return second;
    }
    int climbStairs(int n) {
        return (n==1)?1:calc_permutations(1,2,n);
    }
};
