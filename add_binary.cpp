#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

class Solution
{
    long binaryToInt(string temp)
    {
        unsigned long long val=0;
        unsigned long long pow=1;
        int idx=temp.length()-1;
        while(idx>=0)
        {
            if(temp[idx]=='1')
                val=val+pow;
            pow=pow*2;
            idx--;
        }
        return val;
    }
    string intToBinary(unsigned long long temp)
    {
        string val="";
        while(temp!=0)
        {
            val=to_string(temp%2)+val;
            temp=temp/2;
        }
        return val;
    }
	public : string addBinary(string a, string b) {
        if(a=="0" && b=="0")
            return "0";
        unsigned long long sum=binaryToInt(a)+binaryToInt(b);
        return intToBinary(sum);
    }
};

int main()
{
	string a;
	string b;
	cout<<"Enter string a : ";
	getline(cin,a);
	cout<<"Enter string b : ";
	getline(cin,b);
	Solution s;
	cout<<"Result : "<<s.addBinary(a,b)<<endl;
	return 0;
}
