class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result;
        int frequency, idx = 0;
        
        while(idx < nums.size()){
            frequency = nums[idx];
            while(frequency > 0){
                result.push_back(nums[idx+1]);
                --frequency;
            }
            idx += 2;
        }
        
        return result;
    }
};
