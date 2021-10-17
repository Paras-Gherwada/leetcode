/** OG : Time Limit Exceeded. Refer v2 **/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
	public:
		int numSquares(int n) {
			vector<int> squares;
			int val = 1;
			do {
				squares.push_back(val * val);
				++val;
			} while(val * val <= n);

			int counter = 999999;
			for(int val : squares) {
				int quo = n / val;
				int rem = n % val;
				if(rem > 3)
					rem = numSquares(rem);
				counter = min(counter, rem + quo);
			}
			return counter;
		}
};

int main(int args_c, char* args_v[]) {
	Solution s;
	for(int i = 1; i <=  10000; ++i)
		cout << i << "\t | \t" << s.numSquares(i) << endl;
	return 0;
}
