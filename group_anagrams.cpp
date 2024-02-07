class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
	std::map<string, vector<string>> words;

	for (const auto &w : strs) {
		std::map<char, int> m;
		for (const auto &el : w) {
			++m[el];
		}
		string s = "";
		for (const auto &el : m) {
			for (int i = 0; i < el.second; ++i) {
				s += el.first;
			}
		}
		words[s].push_back(w);
	}

	for (const auto &w : words) {
		res.push_back(w.second);
	}

	return res;
    }
};
