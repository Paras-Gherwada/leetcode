#include<iostream>
#include<strings.h>

using namespace std;

class Solution {
public:
    void generate_new_string(string& candidate_1, string& candidate_2, string& s) {
		int idx = 0;
		for(char chr : candidate_1) {
			s[idx] = chr;
			idx += 2;
		}
		idx = 1;
		for(char chr : candidate_2) {
			s[idx] = chr;
			idx += 2;
		}
    }

    string reformat(string s) {
        if(s.size() == 1) return s;

        string alphabets, digits;
        alphabets = digits = "";

        for(char chr : s) {
            if(isdigit(chr)) digits += chr;
            else alphabets += chr;
        }

		int d_size = digits.size(), a_size = alphabets.size();

		if(abs(d_size - a_size) > 1) s = "";
		else if(d_size > a_size) generate_new_string(digits, alphabets, s);
        else generate_new_string(alphabets, digits, s);

        return s;
    }
};

int main(int args_c, char* args_v[]) {
	string user_input, output;
	cout << "Enter string : ";
	cin >> user_input;

	Solution s;
	output = s.reformat(user_input);
	cout << "Output : " << output << endl;
	return 0;
}
