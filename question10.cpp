#include<iostream>
#include<string.h>
using namespace std;
 
class String
{
    char *str;
public:
     String(const char *s);
     void change(int index, char c) { str[index] = c; }
     char *get() { return str; }
};
 
String::String(const char *s)
{
    int l = strlen(s);
    str = new char[l+1];
    strcpy(str, s);
}
 
int main()
{
   String s1("geeksQuiz");
   String s2 = s1;
   s1.change(0, 'G');
   cout << s1.get() << " ";
   cout << s2.get();
}

//output
//GeeksQuiz GeeksQuiz
//
//Question 12-Explanation: 
//Since there is no copy constructor, the compiler creates a copy constructor. The compiler created copy constructor does shallow copy in line " String s2 = s1;" So str pointers of both s1 and s2 point to the same location. There must be a user defined copy constructor in classes with pointers ot dynamic memory allocation.
