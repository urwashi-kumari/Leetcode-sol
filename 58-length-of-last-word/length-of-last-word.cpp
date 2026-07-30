class Solution {
public:
    int lengthOfLastWord(string s) {

       
   

        int n = s.size() - 1;
        int cnt = 0;
        while (n >= 0 && s[n] == ' ') {
            n--;
        }

        for (int i = n; i >= 0; i--) {
            if (s[i] == ' ')
                return cnt;
            cnt++;
        }

        return cnt;
    }
};

        
    
