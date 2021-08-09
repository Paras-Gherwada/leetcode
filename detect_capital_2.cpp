#include<iostream>
#include<string.h>

using namespace std;

class Solution
{
    public:
    bool detectCapitalUse(string word)
    {
        int count=0;
        int idx=0;
        for(char temp:word)
        {
            if(isupper(temp))
                count++;
        }
        return (count==0) || (count==1 && isupper(word[0])) || (count==word.size());
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
