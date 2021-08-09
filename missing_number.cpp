class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx=0;
        while(idx<nums.size()-1)
        {
            if(nums[idx]!=nums[idx+1]-1)
                return nums[idx]+1;
            idx++;
        }
        return (nums[0]==0)?nums[nums.size()-1]+1:0;
    }
};
