#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> getValidElements(const std::vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return nums;

    // Use a boolean mask to mark valid indices
    std::vector<bool> isValid(n, false);

    // Rule: First and last elements are always valid
    isValid[0] = true;
    isValid[n - 1] = true;

    // Pass 1: Strictly greater than everything to the left
    int maxLeft = nums[0];
    for (int i = 1; i < n - 1; ++i) {
        if (nums[i] > maxLeft) {
            isValid[i] = true;
        }
        maxLeft = std::max(maxLeft, nums[i]);
    }

    // Pass 2: Strictly greater than everything to the right
    int maxRight = nums[n - 1];
    for (int i = n - 2; i > 0; --i) {
        if (nums[i] > maxRight) {
            isValid[i] = true;
        }
        maxRight = std::max(maxRight, nums[i]);
    }

    // Collect valid elements
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (isValid[i]) {
            result.push_back(nums[i]);
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 4, 2, 3, 2};
    std::vector<int> result = getValidElements(nums);

    for (int x : result) {
        std::cout << x << " ";
    }
    // Output: 1 2 4 3 2
    return 0;
}
