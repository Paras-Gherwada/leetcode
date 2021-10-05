#include<iostream>
#include<math.h>
#include<strings.h>

using namespace std;

class Solution {
	public:
		int titleToNumber(string columnNumber) {
			int col_number = 0;
			for(char c : columnNumber) {
				col_number *= 26;
				col_number += ((c - 'A') + 1);
			}

			return col_number;
		}
};

int main(int args_c, char* args_v[]) {

	string input;
	cout << "Enter column number : ";
	cin >> input;

	Solution s;
	cout << "Result : " << s.titleToNumber(input) << endl;
	return 0;
}
