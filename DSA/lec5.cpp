// FIBONACCI SERIES
/* #include <iostream>
using namespace std;

int main()
{
    int n, a=0, b=1, c;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

// PRIME NUMBER
#include <iostream>
using namespace std;

int main()
{
    int n, count;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    cout<<"Prime";
    else
    cout<<"Not Prime";
    return 0;
} */

// Return the difference between the products of digits and the sum of digits of a given number number

#include <iostream>
using namespace std;

int main()
{
    unsigned int n, rem, sum=0, pro=1;
    cin>>n;
    
    while(n!=0)
    {
        rem = n%10;
        sum += rem;
        pro *= rem;
        n=n/10;
    }
    
    int result;
    result = pro - sum;
    cout<<pro<<endl<<sum<<endl<<result;
    
    return 0;
} 