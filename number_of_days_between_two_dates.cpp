class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        tm t1{};
        t1.tm_year = stoi(date1.substr(0, 4)) - 1900;
        t1.tm_mon = stoi(date1.substr(5, 2)) - 1;
        t1.tm_mday = stoi(date1.substr(8, 2));
        
        tm t2{};
        t2.tm_year = stoi(date2.substr(0, 4)) - 1900;
        t2.tm_mon = stoi(date2.substr(5, 2)) - 1;
        t2.tm_mday = stoi(date2.substr(8, 2));
        
        double diff_seconds = difftime(mktime(&t1), mktime(&t2));
        
        constexpr int seconds_per_day = 60 * 60 * 24;
        return std::abs(static_cast<int>(diff_seconds / seconds_per_day));
    }
};