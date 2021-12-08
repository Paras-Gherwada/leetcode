class Solution {
public:
    string reformatDate(string date) {
        stringstream date_stream(date);
        string data;
        vector<string> date_vector;
        while(getline(date_stream, data, ' ')) date_vector.push_back(data);
        
        date_vector[0] = date_vector[0].substr(0, date_vector[0].size() - 2);
        if(date_vector[0].size() == 1) date_vector[0] = "0" + date_vector[0];
        
        if(date_vector[1] == "Jan") date_vector[1] = "01";
        if(date_vector[1] == "Feb") date_vector[1] = "02";
        if(date_vector[1] == "Mar") date_vector[1] = "03";
        if(date_vector[1] == "Apr") date_vector[1] = "04";
        if(date_vector[1] == "May") date_vector[1] = "05";
        if(date_vector[1] == "Jun") date_vector[1] = "06";
        if(date_vector[1] == "Jul") date_vector[1] = "07";
        if(date_vector[1] == "Aug") date_vector[1] = "08";
        if(date_vector[1] == "Sep") date_vector[1] = "09";
        if(date_vector[1] == "Oct") date_vector[1] = "10";
        if(date_vector[1] == "Nov") date_vector[1] = "11";
        if(date_vector[1] == "Dec") date_vector[1] = "12";
        
        return date_vector[2] + "-" + date_vector[1] + "-" + date_vector[0];
    }
};