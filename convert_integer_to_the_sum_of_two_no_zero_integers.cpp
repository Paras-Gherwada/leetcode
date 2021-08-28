#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
	bool hasZero(int number){
		while(number > 0){
			if(number%10)
				number /= 10;
			else
				return true;
		}
		return false;
	}

	vector<int> getNoZeroIntegers(int n) {
        int num_1, num_2;
	num_1 = num_2 = 1;
	bool is_valid  = false;

	while(!is_valid){
		num_2 = n - num_1;
		if(!hasZero(num_1) && !hasZero(num_2))
			is_valid = true;
		else
			++num_1;
	}
	return {num_1, num_2};
    }
};


int main(void){
	
	int user_input;
	cout << "Enter a number: ";
	cin >> user_input;

	Solution s;
	for(int num : s.getNoZeroIntegers(user_input))
		cout << num << "\t";
	cout << endl;

	return 0;
}
