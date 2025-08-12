#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    bool swapped = true;

    //! main logic of bubble sort
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swapped = false;
            break;
        }
    }

    if (swapped)
    {
        cout << "Already sorted" << endl;
    }

    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            bool swapped = false;
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
                break;
        }
    }

    //! loop for printing
    cout << "Bubble sort : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        ;
    }

    cout << endl;
    cout << "Time complexity of bubble sort is O(n^2)" << endl;
    cout << "Space complexity of bubble sort is O(1)" << endl;
    return 0;
}