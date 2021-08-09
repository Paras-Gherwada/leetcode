class Solution {
public:
    int lengthOfLastWord(string s) {
        int back_idx=s.size()-1;
        int counter=0;
        while(back_idx>-1)
        {
            if(s[back_idx]!=' ')
            {
                counter++;
                if(back_idx!=0 && s[back_idx-1]==' ')
                    break;
            }
            back_idx--;
        }
        return counter;
    }
};
