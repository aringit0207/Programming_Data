/* #include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec;
    int element, size;
    cout<<"Enter the size of vector: ";
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the element: ";
        cin>>element;
        vec.push_back(element);
    }
    // vec.pop_back(); // Delete last element
    display(vec);
    vector<int> :: iterator iter=vec.begin(); // iterator is like pointer, here we pointed iter to the begining of vector
    // vec.insert(iter, 50); // it will insert 50 to the begining of vector
    // vec.insert(iter+1, 50); // it will point to the second element in vector
    vec.insert(iter+1, 5, 50); // here 5 means, it will copy 50 five times
    display(vec);


    return 0;
}*/

// Another ways to create a vector

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; // zero length integer vector
    display(vec1);

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('5');
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from vec2
    display(vec3);

    vector<int> vec4(6, 3); // 6-element vector of 3
    display(vec4);
    cout << vec4.size();

    return 0;
}