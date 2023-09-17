#include <iostream>
#include <functional>
#include <algorithm> // For sort function
using namespace std;

int main()
{
    // Function Objects (Functor): Function wrapped in a class so that it is available like an object
    int arr[] = {43, 2, 54, 6, 3, 5};

    sort(arr, arr + 6);                 // this will sort 6 elements fo array i.e. from index 0 to 5 in ascending order
    sort(arr, arr + 6, greater<int>()); // this will sort 6 elements in descending order

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}