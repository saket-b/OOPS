#include<bits/stdc++.h>
using namespace std;

class String{

    private:
    char *str;
    public:
    String(char *str1)
    {
        int len = strlen(str1);
        str = (char*)malloc(sizeof(char) * len);
        strcpy(str, str1);
    }
	void operator=(const String &obj)
	{
		int len = strlen(obj.str);
		str = (char*) malloc(sizeof(char)*len);
		strcpy(str, obj.str);	
		
	}
    char *get()
    {
        return str;

    }

};

int main()
{
    String s1("Geekforgeeks");

	String s2 = s1;

    cout<<s1.get()<<endl;
    
}