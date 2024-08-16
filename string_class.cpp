#include<bits/stdc++.h>
using namespace std;

class String{

    private:
    char *str;
    public:
    String(const char *str1)
    {
        int len = strlen(str1);
        str = (char*)malloc(sizeof(char) * len);
        strcpy(str, str1);
    }
	void operator=(const String &obj)
	{
        if(this == &obj)return;
		int len = strlen(obj.str);
		str = (char*) malloc(sizeof(char)*len);
		strcpy(str, obj.str);	
        //return *this;
		
	}
    char *get()
    {
        return str;

    }
    String(){}

};

int main()
{
    String s1("Geekforgeeks");

	String s2;
    s2 = s1;

    cout<<s2.get()<<endl;
    
}