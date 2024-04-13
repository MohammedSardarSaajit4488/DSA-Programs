// binary search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int head, int tail, int element)
{
    while (head <= tail)
    {
        int m = head + (tail - head) / 2;
        if (arr[m] == element)
            return m;
        else if (arr[m] < element)
            head = m + 1;
        else
            tail = m - 1;
    }
    return -1;
}

int main()
{
    int size;
    
    cout << "Enter the Size of the Array: ";
    cin >> size;
    
    int arr[size]; // Declare the array after getting the size
    
    cout << "Enter the Elements of the Array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << (i + 1) << " : ";
        cin >> arr[i];
    }
    
    int element;
    cout << "\nEnter the Element to Search: ";
    cin >> element;
    
    int result = binarySearch(arr, 0, size - 1, element);
    (result == -1) ? cout << "\nElement is not present in array" : cout << "\nElement is present at index " << result;
    return 0;
}

