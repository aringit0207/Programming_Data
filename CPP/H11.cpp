// BREAK
/* #include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
        if (i == 5)
        {
            break; // BREAK MEANS BREAK THE LOOP
        }
    }
    return 0;
} */

// CONTINUE
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; // CONTINUE MEANS SKIP THAT VALUE
        }
        cout << i << endl;
    }
    return 0;
}