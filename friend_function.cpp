// #include<bits/stdc++.h>
// using namespace std;

// class B;

// class A{
//  private:
//   int data_a;
//  public:
//   A(int x){
//    data_a=x;
//   }
//   friend int fun(A, B);
// };

// class B{
//  private:
//   int data_b;
//  public:
//   B(int x){
//    data_b=x;
//   }
//   friend int fun(A, B);
// };

// int fun(A a, B b){
//  return  a.data_a + b.data_b;
// }
// int main(){
//  A a(10);
//  B b(20);
//  cout<<fun(a,b)<<endl;
//  return 0;
// }


// frien function 
// C++ program to create a global function as a friend
// function of some class
// #include <iostream>
// using namespace std;

// class base {
// private:
// 	int private_variable;

// protected:
// 	int protected_variable;

// public:
// 	base()
// 	{
// 		private_variable = 10;
// 		protected_variable = 99;
// 	}
	
// 	// friend function declaration
// 	friend void friendFunction(base& obj);
// };


// // friend function definition
// void friendFunction(base& obj)
// {
// 	cout << "Private Variable: " << obj.private_variable
// 		<< endl;
// 	cout << "Protected Variable: " << obj.protected_variable;
// }

// // driver code
// int main()
// {
// 	base object1;
// 	friendFunction(object1);

// 	return 0;
// }


// Freind class 

// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class GFG {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	GFG()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend class declaration
	friend class F;
};

class gfg {

    private :
    int x;
    protected:
    int y ;

public:
    gfg()
    {
        x = 30;
        y = 40;


    }
};

// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
	void display(GFG& t)
	{
		// cout << "The value of Private Variable = "
		// 	<< t.x << endl;
		// cout << "The value of Protected Variable = "
		// 	<< t.y;

        cout<<t.private_variable<<endl;
        cout<<t.protected_variable<<endl;
	}
};

// Driver code
int main()
{
	GFG g;
	F fri;
    gfg g2;
	//fri.display(g2);
    fri.display(g);
	return 0;
}

