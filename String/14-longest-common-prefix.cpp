#include <iostream>
#include <vector>
#include <string>
#include <algorithm>  // for std::min (optional but useful)

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int len = strs.size();
       int mainIndex = 0;
       string result = "";
       bool isUnique = true;
       while (isUnique) {
           for (int i = 0; i < len; i++) {
               char temp = strs[0][mainIndex];
               if (strs[i][mainIndex] != temp &&
                   strs[i].length() < mainIndex) {
                   isUnique = false;
               }
           }
           if (isUnique)
               result += strs[0][mainIndex];
       }

       return result;
    }
};

// ───────────────────────────────────────────────
//          Testing / Demo code
// ───────────────────────────────────────────────
int main() {
    Solution sol;

    // Test cases
    vector<vector<string>> tests = {
        {"flower", "flow", "flight"},      // "fl"
        {"dog", "racecar", "car"},         // ""
        {"interspecies", "interstellar", "interstate"},  // "inters"
        {"a"},                             // "a"
        {},                                // ""
        {"", "b"},                         // ""
        {"aaa", "aa", "aaa"}               // "aa"
    };

    for (auto& test : tests) {
        string prefix = sol.longestCommonPrefix(test);
        cout << "Input: [";
        for (size_t i = 0; i < test.size(); ++i) {
            cout << "\"" << test[i] << "\"";
            if (i < test.size() - 1) cout << ", ";
        }
        cout << "]  →  \"" << prefix << "\"" << endl;
    }

    return 0;
}
