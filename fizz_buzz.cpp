class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int number = 1;
        vector<string> strList;
        while(number <= n){
            if(number % 3 ==0 &&  number % 5 == 0) strList.push_back("FizzBuzz");
            else if(number % 3 == 0) strList.push_back("Fizz");
            else if(number % 5 == 0) strList.push_back("Buzz");
            else strList.push_back(to_string(number));
            ++number;
        }
        return strList;
    }
};

