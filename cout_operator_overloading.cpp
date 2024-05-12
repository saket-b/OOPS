#include<bits/stdc++.h>
using namespace std;
class Base {
    public:
    int x;
    int  y;

    public:
	
    Base(int x1, int y1)
	{
		x = x1;
		y = y1;
		
	}	
	
	friend ostream &operator<<( ostream &out, const Base &obj);

    

};
ostream & operator <<( ostream &out, const Base &obj)
    {
        out << obj.x<<endl;
	    out << obj.y << endl;
        return out;
    }
int main()
{

	Base obj(1, 2);
	cout<<obj;


}