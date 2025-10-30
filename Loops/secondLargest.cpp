#include <iostream>
using namespace std;

int secondLargest(int arr[], int size)
{
    int firstLargest = arr[0];
    int secondLargest;

    for (int i = 0; i < size; i++)
    {
        if (firstLargest < arr[i])
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (secondLargest < arr[i] && arr[i] < firstLargest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int nums[] = {111, 45, 231, 12, 78, 43};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << secondLargest(nums, size) << "\n";
    return 0;
}