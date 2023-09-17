#include <iostream>
using namespace std;

int main()
{
    // int a;
    
    // a = cin.get(); // with the help of this we can take 'space', 'tab', 'enter' as input
    // cout<<a<<endl;
    
    int n; 
    cin>>n;
    char c = 'A';
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << c;
        }
        c++;
        cout<<endl;
    }
    
    return 0;
}
