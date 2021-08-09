#include<iostream>
#include<string.h>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
	string value;
	int size = nums.size();
	if(nums.size() == 1) ranges.push_back(to_string(nums[0]));
	else{
		int idx, start_idx, iterator;
		idx = start_idx = iterator = 0;
		while(idx < size){
			if(nums[iterator+1] == nums[iterator]+1) ++iterator;
			else{
				value = to_string(nums[start_idx]);
				if(start_idx != iterator) value += "->" + to_string(nums[iterator]);
				ranges.push_back(value);
				start_idx = ++iterator;		
			}
			idx = start_idx;
		}
	}
	return ranges;
    }
};

int main(void){
	vector<int> numbers;
	int number;
	char choice;
	while(true){
		cout << "Enter a number to push in vector: ";
		cin >> number;
		numbers.push_back(number);
		cout << "Continue? (Y/N)";
		cin >> choice;
		if (choice == 'N' || choice == 'n') break;
	}

	cout << endl << "--- Numbers pushed ---" << endl;
	for(int num : numbers)
		cout << num << "\t";

	cout << endl << endl << "--- Calling summaryRanges() ---" << endl;
	Solution s;
       	vector<string> val_returned = s.summaryRanges(numbers);
	for(string str : val_returned)
		cout << str << "\t";	
	
	cout << endl;
	return 0;
} 
