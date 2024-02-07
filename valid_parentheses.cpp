class Solution {
public:
    bool isValid(string s) {
	std::stack<char> st;

	for (const auto &el : s) {
		if (el == '(' || el == '{' || el == '[') st.push(el);
	}

	if (st.empty()) return false;

	for (const auto &el : s) {
		if (el == ')' && st.top() == '(') st.pop();
		if (el == '}' && st.top() == '{') st.pop();
		if (el == ']' && st.top() == '[') st.pop();
	}

	return st.empty();
    }
};
