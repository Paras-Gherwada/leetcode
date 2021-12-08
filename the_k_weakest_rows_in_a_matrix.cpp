class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        multimap<int, int> mmap;
        for(int idx = 0; idx < mat.size(); ++idx)
            mmap.insert({count(mat[idx].begin(), mat[idx].end(), 1), idx});
        
        vector<int> result;
        for(auto x : mmap) {
            result.push_back(x.second);
            if(!--k) break;
        }
        
        return result;
    }
};