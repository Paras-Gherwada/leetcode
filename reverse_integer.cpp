class Solution {
public:
 int reverse(int x) {
        int last=x%10;
        int rev=0;
        while(x!=0){
            last=x%10;
            if (rev>=INT_MAX/10){
                if (rev>INT_MAX/10){
                    return 0;
                }else{
                    if (last>7){
                      return 0;
                    }
                }
            }
            if (rev<=INT_MIN/10){
                if (rev<INT_MIN/10){
                    return 0;
                }else{
                    if (last<-8){
                        return 0;
                    }
                }
            }
            rev=rev*10+last;
            x=x/10;
        }
        return rev;
    }


};
