// INITIALIZE WHOLE ARRAY WITH ANY NUMBER
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    
    fill_n(arr, 1000, 1); // by using 'fill_n' command we can initialize a whole array to a particular number
    
    for(int i = 0; i<20; i++)
    {
        cout << arr[i];
    }
    
    return 0;
}

// SIZE OF ARRAY

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int len = sizeof(arr) / sizeof(int);
    
    cout << len << endl;
    
    return 0;
}
// MAX MIN OF AN ARRAY

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {43, 54, 5, 65, 0};
    int len = sizeof(arr) / sizeof(int);
    int maxi = arr[0], mini = arr[0];
    
    for(int i = 1; i < len; i++)
    {
        maxi = max(maxi, arr[i]); // In-built function
        // if(arr[i] > max)
        // {
        //     maxi = arr[i];
        // }
        
        mini = min(mini, arr[i]); // In-built function
        // if(arr[i] < min)
        // {
        //     mini = arr[i];
        // }
    }
    cout << "Max value is : " << maxi << endl;
    cout << "Min value is : " << mini << endl;
    
    return 0;
}

// SUM OF ALL ELEMENTS IN AN ARRAY

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of all elements is : " << sum;
    
    return 0;
}

// A NUMBER IS PRESENT OR NOT IN AN ARRAY

#include <iostream>
using namespace std;

int numPresent(int arr[], int len, int n)
{
    for(int i = 0; i < len; i++)
    {
        if(arr[i] == n)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {43, 54, 5, 65, 0};
    
    int n;
    cin >> n;
    
    if(numPresent(arr, 5, n))
    {
        cout << "Number is present." << endl;
    }
    else
    cout << "Number is not present." << endl;

    return 0;
} */

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {43, 54, 5, 65, 0};
    
    
    // for(int i = 4; i >= 0; i--)
    // {
    //     cout << arr[i] << " ";
    // }
    
    
    for(int i = 0; i < 5/2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}