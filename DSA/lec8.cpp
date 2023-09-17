/* 
#include <iostream>
using namespace std;

int main()
{
    int n, c1, c2, c3, c4;
    cin>>n;
    
    c1 = n / 100;
    cout << "100 Rs note = " << c1 << endl;
    n = n % 100;
    
    c2 = n / 50;
    cout << "100 Rs note = " << c2 << endl;
    n = n % 50;

    c3 = n / 20;
    cout << "100 Rs note = " << c3 << endl;
    n = n % 20;
    
    c4 = n / 1;
    cout << "100 Rs note = " << c4 << endl;
    
    return 0;
}

// CALCULATING nCr

#include <iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    while(n != 0)
    {
        ans *= n;
        n--;
    }
    return ans;
}

 int main()
 {
    int n, r;
    cin >> n >> r;
    
    int ncr = fact(n) / (fact(r) * fact(n-r));
    cout << "Answer is : " << ncr;
    
    return 0;
 } */
 
// SUM OF 1 BIT IN TWO NUMBERS

#include <iostream>
using namespace std;

int bit(int n)
{
    int count = 0;
    while(n != 0)
    {
        if(n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << bit(a) + bit(b);
    
    return 0;
}