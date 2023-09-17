#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    float interestRate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r); // if r is something like 0.04
    Bankdeposit(int p, int y, int r);   // if r is something like 4
    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + interestRate);
    }
}

Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + interestRate);
    }
}

void Bankdeposit ::show()
{
    cout << "Principal amount was " << principal << endl
         << "Return value after " << years << " years is " << returnvalue << endl;
}

int main()
{
    Bankdeposit bd1, bd2;
    int p, y, R;
    float r;

    cout << "Enter the values of p, y and r" << endl;
    cin >> p >> y >> r;

    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "\nEnter the values of p, y and R" << endl;
    cin >> p >> y >> R;

    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    return 0;
}