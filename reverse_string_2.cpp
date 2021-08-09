class Solution {
public:
    string reverseStr(string s, int k) {
        int counter=0;
        while(counter<s.size())
        {
            string temp=s.substr(counter,k);
            reverse(temp.begin(),temp.end());
            s.replace(counter,k,temp);
            counter=counter+(k*2);
        }
        return s;
    }
};
