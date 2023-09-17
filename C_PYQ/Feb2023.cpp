/*// Ques 5(d)
 #include <iostream>
using namespace std;

class shape
{
    public:
    void print(void)
    {
        cout<<"This is a shape"<<endl;
    }
};

class polygon : public shape
{
    public:
    void print(void)
    {
        cout<<"This is a polygon"<<endl;
    }
};

class rectangle : public polygon
{
    public:
    void print(void)
    {
        cout<<"Rectangle is a polygon"<<endl;
    }
};

class triangle : public polygon
{
    public:
    void print(void)
    {
        cout<<"Triangle is a polygon"<<endl;
    }
};

int main()
{
//     shape obj;
//     obj.print();
//     polygon obj2;
//     obj2.print();
//     rectangle obj3;
//     obj3.print();
    triangle obj4;
    obj4.print();
    return 0;
} 

// Ques 5(e)
#include <iostream>
using namespace std;
class printdata
{
    public:
    void print(int a)
    {
        cout<<a+1<<endl;
    }
    void print(int a, int b)
    {
        cout<<"["<<a+1<<","<<b+1<<"]"<<endl;
    }
};

int main()
{
    printdata pd;
    pd.print(4);
    return 0;
} 

#include <iostream>
using namespace std;
class parent{
public:
     parent(){
        cout<<"parent class"<<endl;
     }
};
class child1:public parent {  
    public:
      child1(){
        cout<<"child 1 class"<<endl;
      }
};
class child2:public parent{ 
    public:
    child2(){
        cout<<"child 2 class"<<endl;
    }
};
int main()
{
   child2 c;
   child1 d;
  
  return 0;
} */

#include <iostream>
using namespace std;

class a
{
    int b;
    public :
    a(void)
    {
        b=10;
        cout<<b;
    }
};

int main()
{
    a arin;
    return 0;
}