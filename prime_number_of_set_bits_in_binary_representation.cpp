#include<iostream>
#include<bitset>

using namespace std;

class Solution {
public:
    bool isPrime(int& number) {
        int start_val = 2;
        while(start_val < number - 1) {
            if((number % start_val) == 0) return false;
            ++start_val;
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        string bin_string;
        int counter, one_count;
        counter = one_count = 0;
        while(left <= right) {
            bin_string = bitset<21>(left).to_string();
            one_count = 0;
            for(char byte : bin_string) if(byte == '1') ++one_count;
            if(one_count > 1 && isPrime(one_count)) ++counter;
            ++left;
        }
        return counter;
    }
};

int main(int args_c, char* args_v[]) {
	int left, right;
	cout << "Enter left : ";
	cin >> left;
	cout << "Enter right : ";
	cin >> right;

	Solution s;
	cout << "Result : " << s.countPrimeSetBits(left, right) << endl;
	return 0;
}
