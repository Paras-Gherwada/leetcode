class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        multimap<int, int> mmap;
        for(int num : arr) {
            string bin_stream = bitset<32>(num).to_string();
            mmap.insert({count(bin_stream.begin(), bin_stream.end(), '1'), num});
        }
        
        arr.clear();
        for(auto x : mmap)
            arr.push_back(x.second);
        
        return arr;
    }
};