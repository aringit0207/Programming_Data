// // FACTORIAL

// // RECURSION
// /* #include <iostream>
// using namespace std;

// int factorial(int a)
// {
//     if(a==0||a==1)
//     {
//         return 1;
//     }
//     return a * factorial(a - 1);
// }
// int main()
// {
//     int a;
//     cin>>a;
//     cout<<"Factorial of "<<a<<" is "<<factorial(a);
//     return 0;
// } */

// // ITERATIVE
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b=1;
//     cin>>a;
//     for(int i=a; i>0; i--)
//     {
//         b*=i;
//     }
//     cout<<"The factorial of "<<a<<" is "<<b;
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, x, y;
	// cin>>t;
	// while(t!=0)
	// {
	    cin>>x;
	    y=(x*60)%20;
	    cout<<y<<endl;
	    // t--;
	// }
	return 0;
}
