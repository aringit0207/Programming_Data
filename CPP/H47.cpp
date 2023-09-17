#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int num1;
    int num2;

public:
    void set_num_Simple(int, int);
    void get_result_Simple(void);
};

void SimpleCalculator ::set_num_Simple(int a, int b)
{
    num1 = a;
    num2 = b;
}

void SimpleCalculator ::get_result_Simple()
{
    cout << "Addition of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
    cout << "Subtraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
    cout << "Division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
}

class ScientificCalculator
{
protected:
    int num3;
    int num4;

public:
    void set_num_Scientific(int, int);
    void get_result_Scientific(void);
};

void ScientificCalculator ::set_num_Scientific(int a, int b)
{
    num3 = a;
    num4 = b;
}

void ScientificCalculator ::get_result_Scientific()
{
    float sr3 = sqrt(num3);
    float sr4 = sqrt(num4);
    float cr3 = cbrt(num3);
    float cr4 = cbrt(num4);
    cout << "Square of " << num3 << " and " << num4 << " are respectively: " << num3 * num3 << ", " << num4 * num4 << endl;
    cout << "Square root of " << num3 << " and " << num4 << " are respectively: " << sr3 << ", " << sr4 << endl;
    cout << "Cube of " << num3 << " and " << num4 << " are respectively: " << num3 * num3 * num3 << ", " << num4 * num4 * num4 << endl;
    cout << "Cube root of " << num3 << " and " << num4 << " are respectively: " << cr3 << ", " << cr4 << endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void hybrid_result();
};

void HybridCalculator ::hybrid_result()
{
    get_result_Simple();
    cout << "\n";
    get_result_Scientific();
}

int main()
{
    HybridCalculator Casio;
    Casio.set_num_Simple(20, 10);
    Casio.set_num_Scientific(8.0, 27.0);
    Casio.hybrid_result();
    return 0;
}