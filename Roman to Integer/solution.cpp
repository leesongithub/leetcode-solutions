// C++ solution to Roman to Integer
// https://leetcode.com/problems/roman-to-integer/
// Leeson Chen September 25 2019

class Solution {
public:
    int romanToInt(string s) {
        
        // slide through and look for subtraction
        // IV = 4
        // IX = 9
        // XL = 40
        // XC = 90
        // CD = 400
        // CM = 900
        
        // then iterate through again and add, excluding previous numbers
        
        
        // --------------- one pass solution -------------
        char arr[50];
        strcpy(arr, s.c_str());
        
        // iterate through
        // for every arr[i]...
        int num = 0;
        for (int i = 0; i < 50; i++) {
            if ((arr[i] == 'I') && (arr[i+1] == 'V')) {
                num += 4;
                i++;
            } else if ((arr[i] == 'I') && (arr[i+1] == 'X')) {
                num += 9;
                i++;
            } else if ((arr[i] == 'X') && (arr[i+1] == 'L')) {
                num += 40;
                i++;
            } else if ((arr[i] == 'X') && (arr[i+1] == 'C')) {
                num += 90;
                i++;
            } else if ((arr[i] == 'C') && (arr[i+1] == 'D')) {
                num += 400;
                i++;
            } else if ((arr[i] == 'C') && (arr[i+1] == 'M')) {
                num += 900;
                i++;
            } else if (arr[i] == 'I') {
                num += 1;
            } else if (arr[i] == 'V') {
                num += 5;
            } else if (arr[i] == 'X') {
                num += 10;
            } else if (arr[i] == 'L') {
                num += 50;
            } else if (arr[i] == 'C') {
                num += 100;
            } else if (arr[i] == 'D') {
                num += 500;
            } else if (arr[i] == 'M') {
                num += 1000;
            }
            std::cout << "num is " << num << std::endl;
            if (arr[i+1] == NULL) {
                break;
            }
        }
        
        // if i = [something] AND i+1 makes that other keyword
        // add special number and then jump i forward 2 places
        
        return num;
        
        
    }
};
