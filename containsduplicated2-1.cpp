class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        while(i<nums.size())
        {
            int j=i+1;
            while(j<nums.size())
            {
                if(nums[i]==nums[j] && j-i<=k)
                    return true;
                j++;
            }
            i++;
        }
        return false;
    }
};
