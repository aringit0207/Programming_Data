/* #include <iostream>
using namespace std;

class c_polygon
{
public:
    virtual void area() {}
};

class c_rectangle : public c_polygon
{
    int breadth, height;

public:
    c_rectangle(int b1, int h1)
    {
        breadth = b1;
        height = h1;
    }
    void area()
    {
        int a1 = (breadth * height);
        cout << "The area of rectangle is " << a1 << endl;
    }
};

class c_triangle : public c_polygon
{
    int base, height;

public:
    c_triangle(int b2, int h2)
    {
        base = b2;
        height = h2;
    }
    void area()
    {
        int a2 = (base * height) / 2;
        cout << "The area of triangle is " << a2 << endl;
    }
};

int main()
{
    int breadth, height, base;

    breadth = 4;
    height = 5;
    c_rectangle rectangle(breadth, height);

    base = 4;
    height = 4;
    c_triangle triangle(base, height);

    c_polygon *result[2];
    result[0] = &rectangle;
    result[1] = &triangle;

    result[0]->area();
    result[1]->area();

    return 0;
} */

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};

void student ::set_roll_num(int r)
{
    roll_num = r;
}

void student ::get_roll_num(void)
{
    cout << "The roll number of student is " << roll_num << endl;
}

class test : public student
{
protected:
    int maths, physics, chemistry;

public:
    void set_test_marks(int, int, int);
    void get_test_marks(void);
};

void test ::set_test_marks(int m, int p, int c)
{
    maths = m;
    physics = p;
    chemistry = c;
}

void test ::get_test_marks(void)
{
    cout << "Marks in Maths: " << maths << endl;
    cout << "Marks in Physics: " << physics << endl;
    cout << "Marks in Chemistry: " << chemistry << endl;
}

class sport
{
protected:
    int sports;

public:
    void set_sports_marks(int);
    void get_sports_marks(void);
};

void sport ::set_sports_marks(int s)
{
    sports = s;
}

void sport ::get_sports_marks(void)
{
    cout << "Marks in sports: " << sports << endl;
}

class result : public test, public sport
{
    int sum;

public:
    void display_result(void);
};

void result ::display_result(void)
{
    get_roll_num();
    get_test_marks();
    get_sports_marks();
    cout << endl << "Total score is: " << (maths + physics + chemistry + sports) << endl;
}

int main()
{
    result obj;
    obj.set_roll_num(1001);
    obj.set_test_marks(94, 93, 95);
    obj.set_sports_marks(92);
    obj.display_result();
    return 0;
}