class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 1) return strs[0];

	string s = "";
	int min = strs[0].size();
    	string minS = strs[0];

	for (const auto &word : strs) {
		if (word.size() < min) minS = word;
	}

	int i = 0;
	for (const auto &ch : minS) {
		for (const auto &word : strs) {
			if (word[i] != ch) {
                		return s;
			}
		}

        	s += ch;
        	++i;
	}

	return s;
    }
};
