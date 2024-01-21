#include <iostream>
#include <string>

int expandAroundCenter(const std::string& s, int left, int right) {
    while (left >= 0 && right < s.size() && s[left] == s[right]) {
        --left;
        ++right;
    }
    return right - left - 1;
}

std::string longestPalindrome(const std::string& s) {
    if (s.empty()) {
        return "";
    }
    int start = 0, end = 0;
    for (int i = 0; i < s.size(); ++i) {
        int len1 = expandAroundCenter(s, i, i);
        int len2 = expandAroundCenter(s, i, i + 1);
        int len = std::max(len1, len2);
        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    return s.substr(start, end - start + 1);
}

int main() {
    std::string s = "forgeeksskeegfor";
    std::cout << longestPalindrome(s) << std::endl;
    return 0;
}