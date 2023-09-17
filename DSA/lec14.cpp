// PIVOT ELEMENT IN SORTED AND ROTATED ARRAY - Here pivot means least element in an array
/*
#include <bits/stdc++.h>
using namespace std;

int pivotElement(vector<int>& arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    
    while(start < end) 
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    vector<int> arr = { 7, 9, 1, 2, 3 };
    int index = pivotElement(arr);
    cout << "Pivot element is : " << arr[index];
    
    return 0;
}

// FIND A INDEX AT WHICH NUM IS PRESENT IN A ROTATED AND SORTED ARRAY

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int s, int e, int k)
{
    int start = s, end = e;
    int mid = start + (end - start) / 2;
    
    while(end >= start)
    {
        if(k == arr[mid])
        {
            return mid;
        }
        else if(k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

    int pivotIndex(vector<int> &arr, int n)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    
    while(end > start)
    {
        if(arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int search(vector<int>& arr, int n, int k)
{
    int p = pivotIndex(arr, n);
    
    if(k >= arr[p] && k <= arr[n - 1])
    {
        return binarySearch(arr, p, n - 1, k);
    }
    else
    return binarySearch(arr, 0, p - 1, k);
}

int main()
{
    vector<int> arr = { 7, 8, 1, 5, 6 };
    int index = search(arr, 5, 1);
    cout << "Index at which 8 is present is : " << index << endl;
    
    return 0;
} */

// SQRT USING BINARY search

#include <bits/stdc++.h>
using namespace std;

long long int sqrtInteger(int n)
{
    int start = 0, end = n;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    
    while( end >= start)
    {
        long long int square = mid * mid;
        if(square == n)
        {
            return mid;
        }
        else if(square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int intPart)
{
    double factor = 1;
    double ans = intPart;
    
    for(int i = 0; i < precision; i++)
    {
        factor /= 10;
        for(double j = ans; j * j < n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n = 7;
    int intPart = sqrtInteger(n);
    cout << morePrecision(n, 5, intPart);
    
    return 0;
}