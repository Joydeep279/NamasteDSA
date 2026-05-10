#include <iostream>
#include<unordered_map>
using namespace std;

    int i = 0, j = 0;
    unordered_map<char, int> charSet;

    int getWindowSize() { return j - i + 1; }

    bool isWindowValid(char ch, int k) {
        int mostOcc = 0;

        for (const auto& [key, value] : charSet) {

            mostOcc = max(mostOcc, value);
        }

        return getWindowSize() - mostOcc <= k;
    }

    int characterReplacement(string s, int k) {

        int maxFreq = 0;
        int len = s.length();

        while (j < len) {
            charSet[s[j]]++;
            if (isWindowValid(s[j], k)) {
                maxFreq = max(maxFreq, getWindowSize());

            } else {
                charSet[s[i]]--;
                i++;
            }
            j++;
        }

        return maxFreq;
    }


int main() {

string s="ABCD";

cout<<characterReplacement(s,2);

  return 0;
}
