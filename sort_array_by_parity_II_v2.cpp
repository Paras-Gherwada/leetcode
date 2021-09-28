#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
		vector<int> even_nums, odd_nums;
		for(int val : nums) {
			if(val & 1) odd_nums.push_back(val);
			else even_nums.push_back(val);
		}

		nums.clear();
		for(int idx = 0; idx < even_nums.size(); ++idx) {
			nums.push_back(even_nums[idx]);
			nums.push_back(odd_nums[idx]);
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
