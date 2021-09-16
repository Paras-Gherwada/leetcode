#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:

	void display(vector<int>& vec){
		for(int val : vec)
			cout << val << "\t";

		cout << endl;
	}

    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int size = nums.size();
        vector<int> target(size, -1);

        for(int idx = 0; idx < size; ++idx) {
			/*
			cout << "Before : ";
					display(target);
			*/

            if(target[index[idx]] != -1){
			//	cout << "True" << endl;
                for(int inner_idx = size - 1; inner_idx > index[idx]; --inner_idx)
                    target[inner_idx] = target[inner_idx - 1];
            }
            target[index[idx]] = nums[idx];

			/*
			cout << "After  : ";
					display(target);
					cout << endl;
			*/
        }
        return target;
    }
};


int main(int args_c, char* args_v[]){
	vector<int> nums = {1, 2, 3, 4, 0};
	vector<int> index = {0, 1, 2, 3, 0};

	Solution s;
	vector<int> target = s.createTargetArray(nums, index);

	cout << "Result : ";
	for(int val : target)
		cout << val << "\t";

	cout << endl;
	return 0;
}
