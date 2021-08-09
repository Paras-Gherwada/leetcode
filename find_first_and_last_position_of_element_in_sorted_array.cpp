class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i1=-1,i2=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                i1=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                i2=i;
                break;
            }
        }
        return {i1,i2};
    }
};
