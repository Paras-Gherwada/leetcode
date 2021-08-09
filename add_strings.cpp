class Solution {
public:
    string addStrings(string num1, string num2) {
        int sum =0,carry=0,x=0,y=0,remainder=0;
        string ret;
        for(int i=num1.size()-1, j=num2.size()-1;(i>=0)||(j>=0);i--,j--)
        {
            x= i>=0?num1[i]-'0':0;
            y= j>=0?num2[j]-'0':0;
            remainder = (x+y+carry)%10;
            carry = (x+y+carry)/10;
            ret = (char)(remainder+'0') +ret;
        }
        return carry==1?"1"+ret:ret;
    }
};
