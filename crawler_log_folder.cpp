class Solution {
public:
    int minOperations(vector<string>& logs) {
        bool isMain = true;
        int operations = 0;
        for(string log : logs) {
            if(log == "../" ) {
                if(!isMain && operations > 0)
                    --operations;
                else
                    isMain = true;
            } else {
                if(log != "./") {
                    ++operations;
                    isMain = false;
                }
            }
        }
        
        return operations;
    }
};