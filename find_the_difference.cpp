class Solution {
public:
    char findTheDifference(string s, string t) {
        int temp=0;
        for(auto S : s) temp^=S; 
        for(auto T : t) temp^=T; 
        return (char)temp;  
    }
};
