#include<iostream>
#include<math.h>

using namespace std;

class Solution {
public:
    int sumBase(int n, int k) {
	    int pow_limit = 6;
	    int temp, sum, quo;
	    while(pow_limit >= 0){
		temp = pow(k, pow_limit);
	    	if(temp > n){
			--pow_limit;
			continue;
		}	
		quo = n/temp;
		sum += quo;
		n -= (temp*quo);
		cout << quo << "\t" << sum << "\t" << n << endl;
	    }
	    return sum;
    }
};


int main(int argc, char *argv[]){
	int number, base;
	cout << "Enter number: ";
	cin >> number;
	cout << "Enter base: ";
	cin >> base;
	Solution s;
	cout << s.sumBase(number, base) << endl;
	return 0;

}
