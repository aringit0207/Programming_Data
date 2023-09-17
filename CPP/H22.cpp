// NESTING OF MEMBER FUNCTIONS

#include <iostream>
using namespace std;

class binary
{
    // By default, members of class are private.
    string s;
    void check_binary(void); // here we make this private now we can't call this in main fuction

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter your num: ";
    cin >> s;
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not a binary number";
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    check_binary(); // This is nesting of a member.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.check_binary(); // This process will automatically done in ones_compliment fuction.(There, we did nesting of members)
    cout << "Displaying your binary number ";
    b.display();
    b.ones_compliment();
    cout << "Displaying your binary number after one's compliment ";
    b.display();
    return 0;
}