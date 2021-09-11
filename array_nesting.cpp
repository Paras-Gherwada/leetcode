#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {

        vector<int> val_counter(nums.size(), 0);
        int outer_idx, inner_idx, primary_counter, temporary_counter;
	outer_idx = inner_idx = primary_counter = temporary_counter =  0;

	while(outer_idx < nums.size()){
		inner_idx = outer_idx;
		temporary_counter = 0;

        	while(true){
	            if(val_counter[inner_idx] != 0)
		    	break;

		    ++temporary_counter;
		    ++val_counter[inner_idx];
		    inner_idx = nums[inner_idx];
	        }
		primary_counter = max(primary_counter, temporary_counter);
		++outer_idx;
	}

	return primary_counter;
    }
};


int main(int args_c, char *args_v[]){
	int args_counter = 0;
	cin >> args_counter;

	vector<int> nums;
	while(args_counter > 0){
		int val = 0;
		cin >> val;
		nums.push_back(val);
		--args_counter;
	}

	Solution s;
	cout << "Longest length : " << s.arrayNesting(nums) << endl;
	return 0;
}
