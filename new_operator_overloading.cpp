#include<bits/stdc++.h>
using namespace std;

class Base{

	private : 
		int x;
		int y;
	public:
	
	void print()
	{
		cout<<"Inside print function"<<endl;
	}
	void * operator new( size_t size)
	{
        cout<<"inside new"<<endl;
		void *obj;
		obj = malloc(size);
		return obj;
	}
    void operator delete(void *);
};
void Base :: operator delete (void *ptr){

    cout<<"inside delete"<<endl;
    free(ptr);
}

int main()
{
	Base *obj;
	obj = new Base();
	obj->print();
    delete obj;
}