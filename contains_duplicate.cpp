class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
	int r = 0;

	for (const auto &el : nums) {
		r ^ el;
	}
	return r == 1;
    }
};
