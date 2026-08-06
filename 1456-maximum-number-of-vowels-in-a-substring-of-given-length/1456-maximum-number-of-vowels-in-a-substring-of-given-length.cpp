class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i = 0; i<k; i++){
            if(isVowel(s[i])) count++;
        }
        int maxCount = count;

        for(int right = k; right<s.length(); right++){
            if(isVowel(s[right - k]))
            count--;
            if(isVowel(s[right]))
            count++;

            maxCount = max(maxCount , count);
        }
        return maxCount;
    }
    private:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }
};