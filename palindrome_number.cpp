#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
		return false;
	}
	std::string str = "";

	while (x > 0) {
		int c = x % 10;
		char ch = 48 + c;
		str += ch;
		x /= 10;
	}
	
	for (int i = 0; i < str.size() / 2; ++i) {
		if (str[i] != str[str.size() - 1 - i]) return false;
	}
	return true;
    }
};

int main() {
	Solution s;
	std::cout << s.isPalindrome(121);
	return 0;
}
