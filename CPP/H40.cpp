#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << "Marks obtained in Maths are: " << maths << endl;
    cout << "Marks obtained in Physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result(void);
};

void Result ::display_result()
{
    get_roll_number();
    get_marks();
    cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
}

int main()
{
    Result arin;
    arin.set_roll_number(24);
    arin.set_marks(92.0, 94.0);
    arin.display_result();

    return 0;
} 