class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);

        return ch == 'a' ||
               ch == 'e' ||
               ch == 'i' ||
               ch == 'o' ||
               ch == 'u';
    }

    string reverseVowels(string s) {

        int Left = 0;
        int Right = s.size() - 1;

        while (Left < Right) {

            if (isVowel(s[Left]) && isVowel(s[Right])) {

                swap(s[Left++], s[Right--]);

            }
            else if (isVowel(s[Left])) {

                Right--;

            }
            else {

                Left++;
            }
        }

        return s;
    }
};