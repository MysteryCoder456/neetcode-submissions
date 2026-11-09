#include <ranges>
#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        auto is_alnum = [](char ch) {
            return 'a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z' || '0' <= ch && ch <= '9';
        };
        std::string filtered = s
            | std::views::filter(is_alnum)
            | std::views::transform([](char ch) { return std::tolower(ch); })
            | std::ranges::to<std::string>();
        std::cout << filtered << std::endl;
        
        auto forward = filtered.begin();
        auto backward = filtered.rbegin();
        while (forward != filtered.end() && backward != filtered.rend()) {
            if (*forward != *backward)
                return false;

            forward++;
            backward++;
        }

        return true;
    }
};
