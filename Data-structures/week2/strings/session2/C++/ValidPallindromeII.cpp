//problem https://leetcode.com/problems/valid-palindrome-ii/
class Solution {
    bool checkPallindrome(string s, int start, int end) {
        while(start < end) {
            if(s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int start = 0, j = 0, end = s.length() - 1;
        while(j < s.length()) {
            if(s[start] != s[end]) {
                return checkPallindrome(s, start, end - 1) || checkPallindrome(s, start + 1, end);
            }
            start++;
            end--;
            j++;
        }
        return true; 
    }
};