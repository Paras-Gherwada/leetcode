class Solution {
public:
    double average(vector<int>& salary) {
        double count_sal = 0, total_sal = 0;
        double min_sal = *min_element(salary.begin(), salary.end());
        double max_sal = *max_element(salary.begin(), salary.end());
        
        for(double sal : salary) {
            if(sal != min_sal && sal != max_sal) {
                ++count_sal;
                total_sal += sal;
            }
        }
        
        return (total_sal / count_sal);
    }
};