#include <iostream>
#include <vector>
#include<deque>

using namespace std;

    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        int i = 0, j = 0;
        deque<int> monoQue;
        int len = arr.size();

        vector<int> result;

        while (i < len && j < len) {
    
            while (!monoQue.empty() && arr[monoQue.back()] < arr[j]) {
                monoQue.pop_back();
            }
            monoQue.push_back(j);

            if (j >= k - 1) {

                while (monoQue.front()< i) {
                    monoQue.pop_front();
                }

                result.push_back(arr[monoQue.front()]);
                i++;
            }

            monoQue.push_back(j);
           j++;
        }

        return result;
    }

int main() {

vector<int> input={1};
vector<int> v=maxSlidingWindow(input,1);

for (size_t i = 0; i < v.size(); i++) {
  cout<<v[i]<<" ";
}
  cout<<endl;
  return 0;
}
