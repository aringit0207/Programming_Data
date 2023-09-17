// BINARY SEARCH

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &even, int key)
{
    int start = 0, end = even.size() - 1;
    int mid = start + (end - start) / 2;
    // int mid = (start + end) / 2;
    
    while(start <= end)
    {
        if(key == even[mid])
        {
            return mid;
        }
        else if(key < even[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> even = { 2, 4, 6, 12, 14, 20 };
    
    int index = binarySearch(even, 14);
    if(index == -1)
    {
        cout << "Num is not present." << endl;
    }
    else
    cout << "Num is present at index : " << index << endl;
    
    return 0;
}