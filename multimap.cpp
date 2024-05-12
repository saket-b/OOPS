#include<bits/stdc++.h>
using namespace std;
//gg
int main() {
	// your code goes heremu
	
	multimap<int, string >mp;
	cout<<"saket"<<endl;

	int x;
	 x = 5;
	
	mp.insert({1, "saket"});
	mp.insert({1, "bharti"});
	mp.insert({1,"hello"});
	
	auto t = mp.lower_bound(1);
    
	auto t2 = mp.upper_bound(1);
	
	for( auto itr = t ; itr != t2; ++itr)
	{
	    cout<<itr->first<<" "<<itr->second<<endl;
	}
	return 0;
}