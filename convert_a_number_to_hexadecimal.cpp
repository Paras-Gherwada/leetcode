#include<iostream>
#include<string.h>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        int remainder;
        string hex_string;
	while(num){
		remainder = num%16;
		remainder += ((remainder >=10 && remainder <= 15)? 87: 48); 
		hex_string = ((char)remainder)+hex_string;
		num /= 16;
       	}
        return hex_string;
    }
};

int main(void){
	int num;
	cout << "Enter number to convert to hex: ";
	cin >> num;
	Solution s;
	cout << "Hex is: 0x" << s.toHex(num) << endl;
	return 0;
}
