class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(auto i:s) if(isalpha(i) or isdigit(i)) temp+=tolower(i);
        for(int i=0;i<temp.size()/2;i++)
        {
            if(temp[i]!=temp[temp.size()-1-i])
                return false;
        }
        return true;
    }
};
