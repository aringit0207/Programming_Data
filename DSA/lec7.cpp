// REVERSE INTERGER

/* #include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, a, num=0;
    cin>>n;
    
    while(n!=0)
    {
        if (num>INT_MIN/10||num<INT_MAX/10)
        {
            a = n%10;
            num = num*10 + a;
            n /= 10;
        }
        else
        {
            return 0;
        }
    }
    cout<<num;
    return 0;
}


// COMPLIMENT OF BASE 10 INTERGER

#include <iostream>
using namespace std;

int main()
{
    int n, m, mask = 0;
    cin >> n;
    m=n;
    
    if(n == 0)
    cout << 1;
    
    else
    {
        while(m!=0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
    
        int ans = (~n) & mask;
        cout << ans;
    }
    
    return 0;
} */

// POWER OF TWO

#include <iostream>
#include <cmath>
using namespace std;

int powerof2(int n)
{
   for(int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if(ans == n)
        {
            return 1;
        }
    } 
    return 0;
}

int main()
{
    int n;
    cin >> n;
    
    if(powerof2(n))
    cout << "Is A Power Of 2";
    else
    cout << "Not A Power Of 2";
    
    return 0;
}