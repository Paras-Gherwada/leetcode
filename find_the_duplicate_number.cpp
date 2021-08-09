class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size() && j!=i;j++)
            {
                if(nums[i]==nums[j])
                    return nums[i];
            }
        }
        return 0;
    }
};
