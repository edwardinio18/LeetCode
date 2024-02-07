class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
	std::multimap<int, int, greater<int>> mm;
	std::map<int, int> m;
	std::vector<int> res;

	for (const auto &el : nums) {
		++m[el];
	}

	for (const auto &el : m) {
		mm.insert({el.second, el.first});
	}

	for (const auto &el : mm) {
		if (k == 0) break;
		res.push_back(el.second);
		--k;
	}

	return res;
    }
};
