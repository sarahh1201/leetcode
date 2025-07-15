class Solution {
public:
    vector<double> convertTemperature(double celsius) { 
        vector<double> temp;

        // Kelvin 
        temp.push_back(celsius +273.15);
        //Fahrenheit
        temp.push_back(celsius*1.80 +32.00);

        return temp;
    }
};
