#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
		int idx = 0, size = nums.size();
		while(idx < (size - 1)) {
			if((idx & 1) != (nums[idx] & 1)) {
				int target_idx = idx + 1;
				while(target_idx < size) {
					if((idx & 1) == (nums[target_idx] & 1))
						break;
					++target_idx;
				}
				nums[idx] = nums[idx] + nums[target_idx] - (nums[target_idx] = nums[idx]);
			}
			++idx;
		}

		return nums;
    }
};

int main(int args_c, char* args_v[]) {
	vector<int> nums = {
// 		4,2,5,7
// 		2,3
// 		1,4,6,6,7,5,4,3,4,2,9,5,19,10
		4,7,1,8,6,5
	};

	Solution s;
	s.sortArrayByParityII(nums);
	cout << endl;
	for(int value : nums)
		cout << value << "\t";

	cout << endl;
	return 0;
}
