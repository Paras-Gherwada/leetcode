class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int, int>, bool> coordinates;
        int x = 0, y = 0;
        coordinates[{x, y}] = true;
        for(char direction : path) {
            switch(direction) {
                case 'N':
                    ++y;
                    break;
                case 'S':
                    --y;
                    break;
                case 'E':
                    ++x;
                    break;
                case 'W':
                    --x;
                    break;
            }
            
            if(coordinates[{x, y}])
                return true;
            
            coordinates[{x, y}] = true;
        }
        
        return false;
    }
};