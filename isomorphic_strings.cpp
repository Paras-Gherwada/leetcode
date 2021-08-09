class Solution {
public:
    bool isIsomorphic(string s, string t) {
		vector<int> mapper_ss(128, -1);
		vector<int> mapper_ts(128, -1);
        int idx = 0, s_val, t_val;
        
        while(idx < s.size()){
            s_val = s[idx];
            t_val = t[idx];
            
            if(mapper_ss[s_val] == -1 && mapper_ts[t_val] == -1){
                mapper_ss[s_val] = t_val;
                mapper_ts[t_val] = s_val;
            }
            else{
                if(mapper_ss[s_val] != t_val || mapper_ts[t_val] != s_val)
                    return false;
            }
            ++idx;
        }
		return true;
    }
};
