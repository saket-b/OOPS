<br>
#include < iostream ><br>
using namespace std;<br><br>
 
class Test<br>
{<br>
public:<br>
Test() { cout << "Hello from Test() "; }<br>
} a;<br><br>
 
int main()<br>
{<br>
cout << "Main Started ";<br>
return 0;<br>
}

// output
//Hello from Test() Main Started
//Question 11-Explanation: 
//Output is
//Hello from Test() Main Started
//There is a global object 'a' which is constructed before the main functions starts, so the constructor for a is called first, then main()' execution begins.
