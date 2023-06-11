    int firstUniqChar(string s) {
        unordered_map<char,int> charfrequencyMap;
        for(int i = 0; i < s.length(); i++) {
            charfrequencyMap[s[i]]++;
        }
        for(int i = 0; i < s.length(); i++) {
            if(charfrequencyMap[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }