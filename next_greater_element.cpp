class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for(int num : nums1){
            int idx = 0;
            int num_to_push = -1;
            while(nums2[idx] != num) ++idx;
            while(idx < nums2.size()){
                if(nums2[idx] > num){
                    num_to_push = nums2[idx];
                    break;
                }
                ++idx;
            }
            result.push_back(num_to_push);
        }
        return result;
    }
};
