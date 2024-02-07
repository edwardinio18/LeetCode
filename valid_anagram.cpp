class Solution {
public:
    bool isAnagram(string s, string t) {
	std::unordered_map<char, int> m;

	for (const auto &ch : s) {
		++m[ch];
	}

	for (const auto &ch : t) {
		--m[ch];
	}

	for (const auto &n : m) {
		if (n.second != 0) return false;
	}
	
	return true;
    }
};
