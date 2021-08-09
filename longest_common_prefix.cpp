class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string val = "";
        for(int idx=0; strs.size()>0; val+=strs[0][idx], idx++)
        {
            for(int i=0; i<strs.size(); i++)
            {
                if(idx >= strs[i].size() ||(i > 0 && strs[i][idx] != strs[i-1][idx]))
                    return val;
            }
        }
        return val;
    }
};
