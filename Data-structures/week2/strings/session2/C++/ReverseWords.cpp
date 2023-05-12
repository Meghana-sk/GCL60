//problem: https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    void reverseWord(string& s, int start, int end) {
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    } 
    string reverseWords(string s) {
        int start = 0;
        for(int end = 0; end < s.length(); end++) {
            if(s[end] == ' ') {
                reverseWord(s, start, end - 1);
                start = end + 1;
            }
        }
        reverseWord(s, start, s.length()-1);
        return s;
    }
};