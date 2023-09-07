// #include<iostream>
// using namespace std;
 
// class Point {
// public:
//     Point() { cout << "Normal Constructor calledn"<<endl; }
//     Point(const Point &t) { cout << "Copy constructor calledn"<<endl; }
// };
 
// int main()
// {
//    Point *t1, *t2;
//    t1 = new Point();
//    t2 = new Point(*t1);
//    Point t3 = *t1;
//    Point t4 ;
//    t4 = t3;
//    return 0;
// }

// #include <iostream>
// using namespace std;
 
// class X 
// {
// public:
//     int x;
// };
 
// int main()
// {
//     X a = {10};
//     X b = a;
//     cout << a.x << " " << b.x;
//     return 0;
// }


// #include <iostream>
// using namespace std;
 
// class Point
// {
//     int x, y;
// public:
//    Point(const Point &p) { x = p.x; y = p.y; }
//    int getX() { return x; }
//    int getY() { return y; }
// };
 
// int main()
// {
//     Point p1;
//     Point p2 = p1;
//     cout << "x = " << p2.getX() << " y = " << p2.getY();
//     return 0;
// }

// There is compiler error in line "Point p1;". The class Point doesn't have a constructor without any parameter.
// If we write any constructor, then compiler doesn't create the default constructor. It is not true other way, i.e.,
//  if we write a default or parameterized constructor, then compiler creates a copy constructor. See the next question.


// #include <iostream>
// using namespace std;
 
// class Point
// {
//     int x, y;
// public:
//    Point(int i = 0, int j = 0) { x = i; y = j; }
//    int getX() { return x; }
//    int getY() { return y; }
// };

 
// int main()
// {
//     Point p1;
//     Point p2 = p1;
//     cout << "x = " << p2.getX() << " y = " << p2.getY();
//     return 0;
// }

//Compiler creates a copy constructor if we don't write our own.
// Compiler writes it even if we have written other constructors in class.
//

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
     String (const String &obj)
     {
       
        str = obj.str;
       // return g;
     }
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
   s2.change(0, 'G');
   cout << s1.get() << " "<<endl;
   cout << s2.get();
}
// So the above program works fine. Since we have default arguments, the values assigned to x and y are 0 and 0.
//
//Since there is no copy constructor, the compiler creates a copy constructor. The compiler created copy constructor does shallow copy in line " String s2 = s1;" So str pointers of both s1 and s2 point to the same location.
 //There must be a user defined copy constructor in classes with pointers ot dynamic memory allocation.


// #include<iostream>
// using namespace std;
// class Point {
//     int x;
// public:
//     Point(int x) { this->x = x; }
//     Point(const Point p) { x = p.x;}
//     int getX() { return x; }
// };
 
// int main()
// {
//    Point p1(10);
//    Point p2 = p1;
//    cout << p2.getX();
//    return 0;
// }

//The reason is simple, if we don't pass by reference, then argument p1 will be copied to p. 
//So there will be a copy constructor call to call the copy constructor, which is not possible.