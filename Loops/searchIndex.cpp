#include <iostream>
using namespace std;

int searchIndex(int nums[], int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == nums[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {12, 45, 23, 12, 78, 43};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << searchIndex(nums, size, 0) << "\n";
    return 0;
}