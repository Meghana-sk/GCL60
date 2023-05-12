//problem https://leetcode.com/problems/roman-to-integer/description/
#include<iostream>
using namespace std;
    int mappedValueToRomanliteral(char ch) {
        switch(ch) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
    int romanToInt(string s) {
        int i = 0;
        int result = 0;
        while(i < s.length()) {
            if(mappedValueToRomanliteral(s[i] < mappedValueToRomanliteral(s[i+1]))) {
                result += (mappedValueToRomanliteral(s[i+1]) - mappedValueToRomanliteral(s[i]));
                i++;
            } else {
                result += mappedValueToRomanliteral(s[i]);
            }
            i++;
        }
        return result;    
    }

int main() {
    cout << romanToInt("MCMXCIV");
}