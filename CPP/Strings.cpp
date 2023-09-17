#include <iostream>
#include <string>
#include <algorithm>    // this is used in sorting a string

using namespace std;
int main()
{
    /* string str;
    cin>>str;
    cout<<str<<endl;

    string str1(5, 'a');    // this will print 'a' 5 times
    cout<<str1<<endl;

    string str2={"ArinJain"};
    cout<<str2<<endl; 

    string str3;
    getline(cin, str3);
    cout<<str3<<endl; 

    string str4={"Fam"};
    string str5={"ily"};
    // 1.  // str4.append(str5);  // using append function, data in str4 will become "Family", means str5 will combine with str4
           // cout<<str4<<endl;
    // 2.  // cout<<str4+str5<<endl; // here both string will merge but they don't loose their original value. 
    // 3.     str4+=str5;
              cout<<str4<<endl; 

    string str={"Family"};
    cout<<str[2]<<endl; // using this we can access any character of string
    str.clear();
    cout<<str<<endl;    // using this we can clear the data in the string 
    if(str.empty())
    cout<<"String is empty"<<endl;

    string s1={"arin"};
    string s2={"arin"};
    cout<<s1.compare(s2)<<endl; // using this we can compare two strings 

    string s={"arin"};
    cout<<s.find("r")<<endl;    // this function will give the position of index where it is found
    cout<<s.insert(2, "JAIN")<<endl;    // this function will insert 'JAIN' from 2nd index
    cout<<s.length()<<endl;
    cout<<s.erase(2, 4) <<endl; // this function will erase the char from index '1' upto '2' values 
    
    string s="ArinJain";
    string s1=s.substr(2, 4);   // this function will make a new string from index '2' upto '4' values
    cout<<s1<<endl; 

    string s={"404"};
    int a = stoi(s);    // this function will convert string to integer
    cout<<a<<endl; 

    int a = 404;
    cout<<to_string(a)<<endl;   // this function will convert integer to string */

    string s = {"sdfsdzzkajaaljizlzzdewigh"};
    sort(s.begin(), s.end());   // this function will sort the string in ascending order
    cout<<s<<endl;
    
    // s.at(index_no); 

    return 0;
}