// BOOK ALLOCATION PROBLEM 
// SOLVED ON InterviewBit BY ME - Correct Answer
/*
  bool isPossible(vector<int> &A, int B, int mid)
 {
     int studentCount = 1;
     int pageSum = 0;
     
     for(int i = 0; i < A.size(); i++)
     {
         if(pageSum + A[i] <= mid)
         {
            pageSum += A[i];
         }
         else
         {
             studentCount++;
             if(studentCount > B || mid < A[i])
             {
                 return false;
             }
             pageSum = A[i];
         }
     }
     return true;
 }

int Solution::books(vector<int> &A, int B) {
     int sum = 0;
    for(int i = 0; i < A.size(); i++)
    {
        sum += A[i];
    }
    int start = 0, end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    if(B > A.size())
    {
        return ans;
    }
    
    while(start <= end)
    {
        if(isPossible(A, B, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// SOLVED ON CodeNinjas BY ME - Some test cases are not satisfing

#include <bits/stdc++.h>

bool isPossible(vector<int> time, int n, int m, int mid)
{
	int daysCount = 1;
	int timeCount = 0;

	for(int i = 0; i < m; i++)
	{
		if(timeCount + time[i] <= mid)
		{
			timeCount += time[i];
		}
		else
		{
			daysCount++;
			if(daysCount > n || time[i] > mid)
			{
				return false;
			}
			timeCount = time[i];
		}
	}
	return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int sum = 0;
	for(int i = 0; i < m; i++)
	{
		sum += time[i];
	}
	int start = 0, end = sum;
	long long int mid = start + (end - start) / 2;
	long long int ans = -1;

	while(start <= end)
	{
		if(isPossible(time, n, m, mid))
		{
			ans = mid;
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
		mid = start + (end - start) / 2;
	}
	return ans;
} */

// EKO - EKO (Sphere Online Judge) - Homework
// Sample cases are running but wrong ans on submitting

#include <bits/stdc++.h>
using namespace std;

long long int maxIntHeight(vector<int> arr, int n, int m)
{
    int start = 0;
    long long int end = *max_element(arr.begin(), arr.end());
    long long int mid = start + (end - start) / 2;
    long long int sum;
    
    while(start <= end)
    {
        sum = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] < mid)
            {
                sum += 0;
            }
            else
            sum += (arr[i] - mid);
        }
        if(sum == m)
        {
            return mid;
        }
        else if(sum > m)
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

int main()
{
    int n, m, a;
    cin >> n >> m;
    
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    
    // vector<int> arr = { 20, 15, 10, 17 };
    // int n = 4, m = 7;
    
    int maxHeight = maxIntHeight(arr, n, m);
    cout << maxHeight;
    return 0;
}

// Cooking Ninjas - Homework
// suffering a little bit problem to understand