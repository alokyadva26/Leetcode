class Solution {
public:

    pair<int, int> expand(string &s, int left, int right) {

        while (left >= 0 &&
               right < s.length() &&
               s[left] == s[right]) {

            left--;
            right++;
        }

        // palindrome was from left+1 to right-1
        return {left + 1, right - 1};
    }

    string longestPalindrome(string s) {

        int start = 0;
        int end = 0;

        for (int i = 0; i < s.length(); i++) {

            // Odd length palindrome
            auto odd = expand(s, i, i);

            // Even length palindrome
            auto even = expand(s, i, i + 1);

            if (odd.second - odd.first >
                end - start) {

                start = odd.first;
                end = odd.second;
            }

            if (even.second - even.first >
                end - start) {

                start = even.first;
                end = even.second;
            }
        }

        return s.substr(start, end - start + 1);
    }
};