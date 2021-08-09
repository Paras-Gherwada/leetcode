#include<iostream>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        int stair_idx = 0;
        while(stair_idx < n)
		n -= (++stair_idx);
	return stair_idx;
    }
};

int main(void){
	int number_of_coins;
	cout << "Enter number of coins: ";
	cin >> number_of_coins;
	Solution s;
	cout << "Output: " << s.arrangeCoins(number_of_coins) << endl;
	return 0;
}
