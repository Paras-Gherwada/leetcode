#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        	int size = nums.size();
		vector<bool> place_holders(size+1);
		vector<int> missing_numbers;

		for(int val : nums)
			place_holders[val] = true;

		for(int idx = 1; idx < size+1; ++idx)
            		if(!place_holders[idx]) missing_numbers.push_back(idx);

		return missing_numbers;
    }
};

int main(void){
	vector<int> numbers;
	int num;
	char choice;
	while(true){
		cout << "Enter numbers to push";
		cin >> num;
		numbers.push_back(num);
		cout << "Continue(Y/N)? ";
		cin >> choice;
		if(choice == 'N' || choice == 'n') break;
	}
	Solution s;
	numbers = s.findDisappearedNumbers(numbers);
	for(int num : numbers) cout << num << "\t";
        cout << endl;
	return 0;	
}
