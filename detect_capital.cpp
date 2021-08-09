#include<iostream>
#include<string.h>

using namespace std;

class Solution {
	bool isLowerCase(string& word)
	{
		int idx=1;
		bool value=true;
		while(idx<word.size())
		{
			if(isupper(word[idx]))
			{
				value=false;
				break;
			}
			idx++;
		}
		return value;
	}
public:
    bool detectCapitalUse(string word) {
        int idx=1;
        bool value=true;
	if(isupper(word[0]))
	{
		if(isupper(word[idx]))
		{
			while(idx<word.size())
			{
				if(islower(word[idx]))
				{
					value=false;
					break;
				}
				idx++;
			}
		}
		else
			value=isLowerCase(word);
	}
	else
		value=isLowerCase(word);
        return value;
    }
};

int main(void)
{
	string word;
	cout<<"Enter a word : ";
	cin>>word;
	Solution s;
	if(s.detectCapitalUse(word))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
	return 0;
}
