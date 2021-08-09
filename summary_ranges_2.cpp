class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int idx = 0;
	    while (idx < nums.size()){
		    int iterator = idx + 1;
            while (iterator < nums.size() && nums[iterator] == nums[iterator - 1] + 1)
                ++iterator;
		    
            if (iterator-1 > idx)
			    result.push_back(to_string(nums[idx]) + "->" + to_string(nums[iterator-1]));
		    else
			    result.push_back(to_string(nums[idx]));

		    idx = iterator;
	    }
	    return result;
    }
};
