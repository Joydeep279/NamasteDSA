#include <iostream>
using namespace std;
// Program for lagest number

int largest(int arr[], int size)
{
    int largest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    int nums[] = {12, 45, 231, 12, 78, 43};
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << largest(nums, size) << "\n";
    return 0;
}