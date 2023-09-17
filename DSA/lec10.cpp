// QUES 1
// SWAP TWO ALTERNATE VALUES IN AN ARRAY
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr) / sizeof(int);

    for(int i = 0; i < len - 1; i += 2)
    {
        // int temp;
        // temp = arr[i];
        // arr[i] = arr[i + 1];
        // arr[i + 1] = temp;
        
        swap(arr[i], arr[i + 1]); // In-built function
    }
    
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// QUES 2 - My Solution
// FIND THE UNIQUE ELEMENT

#include <iostream>
using namespace std;

int main()
{
  int arr[] = { 1, 2, 2, 1, 3 };
  int len = sizeof(arr) / sizeof(int);
  int count = 0;

  for (int i = 0; i < len; i++)
    {
      for (int j = 0; j < len; j++)
	{
	  if (arr[i] == arr[j])
	    {
	      count++;
	    }
	}
      if (count == 1)
	{
	  cout << "Unique element is : " << arr[i] << endl;
	  break;
	}
      count = 0;
    }

  return 0;
}

// QUES 2 - Optimal Solution By Love Babbar
// FIND THE UNIQUE ELEMENT

#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 8, 1, 2, 1, 2 };
    int len = sizeof (arr) / sizeof (int);
    int ans = 0;
    
    for(int i = 0; i < len; i++)     
    {
        ans = ans ^ arr[i];         // by doing XOR of every element
    }
    
    cout << ans;
    
    return 0;
} 

// HOMEWORK QUES 1
// UNIQUE NUMBER OF OCCURENCES IN AN ARRAY

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int check(vector<int> &v)
{
    for(int i = 0; i < v.size() - 1; i++)
    {
        if(v[i] == v[i + 1])
        {
           return 0;
        }
    }
    return 1;
}

int main()
{
    vector<int> arr = { 4, 3, 2, 4, 4, 2, 3, 4, 3 };
    sort(arr.begin(), arr.end());
    vector<int> v;
    
    int i = 0;
    while(i < arr.size())
    {
        int count = 0;
        for(int j = i; j < arr.size(); j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        v.push_back(count);
        i += count;
    }
    
    sort(v.begin(), v.end());
    
    if(check(v))
    {
        cout << "No unique number of occurences" << endl;
    }
    else
    cout << "Unique number of occurences" << endl;
    
    return 0;
}

// QUES 3 - My Solution
// FIND THE DUPLICATE ELEMENT

#include <iostream>
using namespace std;

int main()
{
  int arr[] = { 5, 1, 2, 3, 4, 2 };
  int len = sizeof(arr) / sizeof(int);
  int count = 0;

  for (int i = 0; i < len; i++)
    {
      for (int j = 0; j < len; j++)
	{
	  if (arr[i] == arr[j])
	    {
	      count++;
	    }
	}
      if (count == 2)
	{
	  cout << "Duplicate element is : " << arr[i] << endl;
	  break;
	}
      count = 0;
    }

  return 0;
}

// QUES 3 - Optimal Solution By Me
// FIND THE DUPLICATE ELEMENT

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 5, 1, 2, 3, 4, 2 };
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            cout << "Duplicate element is : " << arr[i] << endl;
            break;
        }
    }
    
    return 0;
}

// HOMEWORK QUES 2
// FIND ALL THE DUPLICATE ELEMENTS IN AN ARRAY

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 4, 3, 2, 7, 8, 2, 3, 1 };
    // vector<int> arr = { 1 };
    sort(arr.begin(), arr.end());
    vector<int> arr1;
    
    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            arr1.push_back(arr[i]);
        }
    }
    
    if(arr1.empty())
    {
        cout << "No duplicate elements" << endl;
    }
    
    else
    {
        cout << "Duplicate elements are : ";

        for(int i = 0; i < arr1.size(); i++)
        {
            cout << arr1[i] << " ";
        }
    }
    
    return 0;
}

// Ques 4 - My Solution
// ARRAY INTERSECTION (Common Elements In An Array)

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 2, 2, 3, 4 };
    vector<int> arr1 = { 2, 2, 3 };
    // vector<int> arr1 = { 7 };
    vector<int> common;
    
    for(int i = 0; i < arr.size(); i++)
    {
        int j = 0;
        while(j < arr1.size())
        {
            if(arr1[j] > arr[i])
            {
                break;
            }
            if(arr[i] == arr1[j])
            {
                common.push_back(arr[i]);
                arr1[j] = INT_MIN;
                j++
                break;
            }
            j++;
        }
    }
    
    if(common.empty())
    {
        cout << -1 << endl;
    }
    else
    cout << "Common Elements are : ";
    for(int i = 0; i < common.size(); i++)
    {
        cout << common[i] << " ";
    }
    
    return 0;
}

// Ques 4 - Optimal Solution By Love Babbar
// ARRAY INTERSECTION (Common Elements In An Array)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 2, 2, 3, 4 };
    vector<int> arr1 = { 2, 2, 3 };
    // vector<int> arr1 = { 7 };
    vector<int> common;
	
	int i = 0, j = 0;
	while(i < arr.size() && j < arr1.size())
	{
		if(arr[i] == arr1[j])
		{
			common.push_back(arr[i]);
			i++;
			j++;
		}
		else if(arr[i] < arr1[j])
		{
			i++;
		}
		else
		j++;
	}
	
	if(common.empty())
    {
        cout << -1 << endl;
    }
    else
    cout << "Common Elements are : ";
    for(int i = 0; i < common.size(); i++)
    {
        cout << common[i] << " ";
    }
    
    return 0;
} 

// Ques 5 - Wrong Answer, correct answer done on 'CodingNinjas'
// PAIR SUM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int pairSum(vector<int> &arr, int s)
{
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                // cout << "Pairs are :" << endl;
                ans.push_back(temp);
                // ans.clear();
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = { 1, 2, 3, 4, 5 };
    
    int s;
    cin >> s;
    vector<int> ans = pairSum(arr, s);
    
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans.[i] << " ";
    }
    
    return 0;
}

// Ques 6 - Wrong answer (Sent to deepu to solve this)
// TRIPLET SUM

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector< vector<int> > ans;

	for(int i = 0; i < arr.size(); i++)
	{
		for(int j = i + 1; j < arr.size(); j++)
		{
			for(int k = j + 1; k < arr.size(); k++)
			{
				if(arr[i] + arr[j] + arr[k] == K)
				{
					vector<int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					ans.push_back(temp);
					goto end;
				}
			}
		}
	}
	end:
	return ans;
} */

// Ques 7
// SORT 0 1 IN AN Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = { 0, 1, 1, 0, 1, 0, 1, 0 };
    int i = 0, j = arr.size() - 1;
    
    while(j>=i)
    {
        if(arr[i] == 0 && arr[j] == 1)
        {
            i++;
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[i] == 0 && arr[j] == 0)
        {
            arr[j] = 1;
            i++;
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 1)
        {
            arr[i] = 0;
            i++;
            j--;
        }
    }
    
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}