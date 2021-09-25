#include<iostream>

using namespace std;

class Solution {
public:
    int tribonacci(int n) {
		int num_1, num_2, num_3, num_4, idx;
		num_1 = num_4 = 0;
		num_2 = num_3 = 1;
		if(n == 1 || n == 2) {
			num_4 = 1;
		} else {
			while(n > 2) {
				num_4 = num_1 + num_2 + num_3;
				num_1 = num_2;
				num_2 = num_3;
				num_3 = num_4;
				--n;
			}
		}
		return num_4;
    }
};

int main(int args_c, char* args_v[]) {
	int n;
	cout << "Enter n : ";
	cin >> n;

	Solution s;
	cout << endl << "Output : " << s.tribonacci(n) << endl;
	return 0;
}
