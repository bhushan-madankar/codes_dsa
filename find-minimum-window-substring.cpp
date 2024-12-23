// Minimum window substring
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
string minWindow(string s, string t) {
    unordered_map<char, int> m;
    for (char c : t) m[c]++;
    int l = 0, r = 0, cnt = t.size(), minlen = INT_MAX, start = 0;
    while (r < s.size()) {
        if (m[s[r++]]-- > 0) --cnt;
        while (cnt == 0) {
            if (r - l < minlen) minlen = r - (start = l);
            if (++m[s[l++]] > 0) ++cnt;
        }
    }
    return minlen == INT_MAX ? "" : s.substr(start, minlen);
}
int main() {
    cout << minWindow("ADOBECODEBANC", "ABC");
    return 0;
}
