#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digit_counter, num, even_counter = 0;
        for(int val : nums){
            num = val;
            digit_counter = 0;
            while(num > 0){
                ++digit_counter;
                num /= 10;
            }
            if(!(digit_counter&1))
				++even_counter;
        }
        return even_counter;
    }
};


int main(void){
	vector<int> digits;
	int num;
	char choice;
	bool accept_input = true;
	do{
		cout << "Enter number to push : ";
		cin >> num;
		digits.push_back(num);
		cout << "Press x to exit or c to continue : ";
		cin >> choice;
		switch(choice){
			case 'x':
				accept_input = false;
				break;

			case 'c':
				accept_input = true;
				break;
		}
	} while(accept_input);

	Solution s;
	cout << s.findNumbers(digits) << endl;
	return 0;
}
