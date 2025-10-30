#include <iostream>
using namespace std;
// Program for lagest number

int smallest(int arr[], int size)
{
    int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    return smallest;
}

int main()
{
    int nums[] = {1, 45, 231, 12, 78, 43};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << smallest(nums, size) << "\n";
    return 0;
}