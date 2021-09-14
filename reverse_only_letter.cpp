#include<iostream>
#include<strings.h>

using namespace std;

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left_idx = 0;
        int right_idx = s.size()-1;


		while(true){

        	while(left_idx < right_idx){
            	if(isalpha(s[left_idx]))
					break;
    	        ++left_idx;
        	}

			while(right_idx > left_idx){
				if(isalpha(s[right_idx]))
					break;
				--right_idx;
			}

			s[left_idx] = s[left_idx] + s[right_idx] - (s[right_idx] = s[left_idx]);

			++left_idx;
			--right_idx;

			if(left_idx > right_idx)
				break;
		}

		return s;
    }
};

int main(int args_c, char* args_v[]){

	string user_input;
	cout << "Enter a string : ";
	cin >> user_input;

	Solution s;
	cout << "After Swapping : " << s.reverseOnlyLetters(user_input) << endl;
	return 0;
}
