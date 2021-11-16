class Solution {
public:
    int countTriples(int n) {
        int counter = 0;
        for(int c = 1; c <= n; ++c)
            for(int a = 1; a <= n; ++a)
                for(int b = 1; b <= n; ++b)
                    if((c * c) == ((a * a) + (b * b)))
                        ++counter;
        
        return counter;
    }
};