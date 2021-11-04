class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int zero_start = nums1.size() - 1;
        while(zero_start >= 0) {
            if(nums1[zero_start] != 0)
                break;
            --zero_start;
        }
        
        
        for(int val : nums2) {
            ++zero_start;
            nums1[zero_start] = val;
        }
        
        sort(nums1.begin(), nums1.end());
    }
};