class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        sort(nums3.begin(), nums3.end());
        nums3.erase(unique(nums3.begin(), nums3.end()), nums3.end());
        
        vector<int> result;
        map<int, int> mapper;
        for(int num : nums1) ++mapper[num];
        for(int num : nums2) ++mapper[num];
        for(int num : nums3) ++mapper[num];
        
        for(auto it : mapper) if(it.second > 1) result.push_back(it.first);
        
        return result;
    }
};