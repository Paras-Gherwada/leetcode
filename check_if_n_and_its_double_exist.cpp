class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i_idx, j_idx;
        i_idx = j_idx = arr.size()-1;
        while(i_idx > -1){
            j_idx = i_idx - 1;
            while(j_idx > -1){
                if(arr[i_idx] == (arr[j_idx] * 2))
                    return true;
                if(arr[j_idx] == (arr[i_idx] * 2))
                    return true;
                --j_idx;
            }
            --i_idx;
        }
        return false;
    }
};
