// class with two member int mem, string *pointer;
#include <bits/stdc++.h>
using namespace std;

class Base{

	private : 
	int x;
	char *s;

    public:
	
	Base(int x1, char *sk){
		x = x1;
        //int n = strlen(sk);
		s = (char*)malloc(sizeof(char)*strlen(sk));
        memcpy( s, sk, strlen(sk));
	}
	Base(){
	}
	Base( Base &other)
	{
		x = other.x;
        //int n = strlen(sk);
		
	}
	Base operator= ( Base const &other)
	{
        Base obj;
		obj.x = other.x;
		obj.s = other.s;
		return  obj;
	}
};

int main()
{

	Base obj(1 ,"saket"), obj2;
	//
	obj2 = obj;
	
	//cout<<
	
	
}