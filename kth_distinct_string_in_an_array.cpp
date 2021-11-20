class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int count_distinct = 0;
        for(string word : arr) {
            if(count(arr.begin(), arr.end(), word) == 1)
                ++count_distinct;
            
            if(count_distinct == k)
                return word;
        }
        
        return "";
    }
};