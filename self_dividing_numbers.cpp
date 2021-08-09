class Solution {
    bool contains(string& temp, char chr)
    {
        for(int i=0;i<temp.size();i++)
            if(temp[i]==chr)
                return true;
        return false;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> sdn_list;
        while(left<=right)
        {
            string temp=to_string(left);
            if(contains(temp,'0'))
            {
                left++;
                continue;
            }
            int idx=0;
            bool isdivisible=false;
            while(idx<temp.size())
            {
                int digit=temp[idx]-'0';
                if(left%digit == 0)
                    isdivisible=true;
                else
                {
                    isdivisible=false;
                    break;
                }
                idx++;
            }
            if(isdivisible)
                sdn_list.push_back(left);
            left++;
        }
        return sdn_list;
    }
};
