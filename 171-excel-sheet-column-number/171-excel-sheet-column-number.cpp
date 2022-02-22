class Solution {
public:
    int titleToNumber(string columnTitle) {
      int result = 0;
        for(char c : columnTitle)
        {
            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;  // fuck youuuuuu youuu youuu
            // i hate tyour frens and they hate me tooo
        // im throughhh troughhh
    }
};