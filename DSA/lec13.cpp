// PEAK NUMBER IN A MOUNTAIN ARRAY
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = { 0,2,1,0 };
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    
    while(end > start)
    {
        if(arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    cout << "Peak element is : " << arr[mid] << endl;
    
    return 0;
} */

// PIVOT INDEX IN AN ARRAY
// Here pivot index means that the sum of all elements left to that index and right to that index is equal

#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& arr)
{
    int rightSum = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        rightSum -= arr[i];
        if(rightSum == leftSum)
        {
            return i;
        }
        else
        {
            
            leftSum += arr[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = { -1,-1,0,1,1,0 };
    int index = pivotIndex(arr);
    cout << "Pivot index is : " << index << endl;
    
    return 0;
}    