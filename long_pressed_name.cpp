class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int out_idx, inn_idx, cc_name, cc_typed;
        out_idx = inn_idx = 0;
        while(out_idx < name.size()) {
            if(name[out_idx] != typed[inn_idx])
                return false;
            
            cc_name = cc_typed = 1;
            while(out_idx < name.size() - 1) {
                if(name[out_idx] == name[out_idx + 1]) ++cc_name;
                else break;
                ++out_idx;
            }
            
            while(inn_idx < typed.size() - 1 && name[out_idx] == typed[inn_idx]) {
                if(typed[inn_idx] == typed[inn_idx + 1]) ++cc_typed;
                else break;
                ++inn_idx;
            }
            
            if(cc_name > cc_typed)
                return false;
            
            ++out_idx;
            ++inn_idx;
        }
        
        return (out_idx == name.size() && inn_idx == typed.size());
    }
};