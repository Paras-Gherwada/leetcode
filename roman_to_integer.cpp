class Solution {
public:
    int function(char& val)
    {
        if(val=='I') return 1;
        if(val=='V') return 5;
        if(val=='X') return 10;
        if(val=='L') return 50;
        if(val=='C') return 100;
        if(val=='D') return 500;
        if(val=='M') return 1000;
        return 0;
    }
    int romanToInt(string s)
    {
        int index=0,value=0;
        while(index<s.length())
        {
            if(function(s[index])<function(s[index+1]))
            {
                int val1=function(s[index+1]);
                value=value+(val1-function(s[index]));
                index+=2;
                continue;
            }
            else
            {
                value=value+function(s[index]);
            }
            index++;
        }
        return value;
    }
};
