#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	multimap<int, string >mp;
	
	mp.insert({1, "saket"});
	mp.insert({1, "bharti"});
	mp.insert({1,"hello"});
	
	auto t = mp.lower_bound(2);
    
	auto t2 = mp.upper_bound(2);
	
	for( auto itr = t ; itr != t2; ++itr)
	{
	    cout<<itr->first<<" "<<itr->second<<endl;
	}
	return 0;
}