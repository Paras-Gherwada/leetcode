class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target>nums[nums.size()-1])
            return nums.size();
        for(int i=0;i<nums.size();i++)
        {
           for(int j=0;j<nums.size();j++)
           {
               if(target<=nums[i] && target<=nums[j])
                   return i;
           }
        }
        return 0;
    }
};
