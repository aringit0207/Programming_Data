#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;
    public:
    Simple(int a, int b=5, int c=8)
    {
        data1=a;
        data2=b;
        data3=c;
    }
    void printdata()
    {
        cout<<"The values of data1, data2 and data3 are "<<data1<<", "<<data2<<" and "<<data3<<endl;
    }
};

int main()
{
    // Simple a(4, 2, 1); // It will give 4, 2, 1 as output.
    // Simple a(6); // It will give 6, 5, 8 as output where 5, 8 are default values.
    Simple a(6, 9); // It will give 6, 9, 8 as output where 8 is a default value.
    a.printdata();
    return 0;
}