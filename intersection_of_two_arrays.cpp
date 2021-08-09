class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()), nums1.end());
        
        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()), nums2.end());
        
        if(nums1.size() > nums2.size())
            nums1.swap(nums2);
        
        vector<int> intersection;
        for(int num : nums1)
            if(binary_search(nums2.begin(), nums2.end(), num)) intersection.push_back(num);
        
        return intersection;
    }
};
