class Solution {
public:
    string reverseString(string x)
    {
        int init_idx=0,end_idx=x.size()-1;
        while(init_idx<=end_idx)
        {
            if(x[init_idx]!=' ' && x[end_idx]!=' ')
            {
                char temp=x[init_idx];
                x[init_idx]=x[end_idx];
                x[end_idx]=temp;
            }
            init_idx++;
            end_idx--;
        }
        return x;
    }
    string reverseWords(string s) {
        string temp="";
        int counter=0;
        while(counter<=s.size())
        {
            if(s[counter]==' ' || counter==s.size())
                temp=temp+reverseString(s.substr(temp.size(),counter-temp.size()))+" ";
            counter++;
        }
        temp=temp.substr(0,temp.size()-1);
        return temp;
    }
};
