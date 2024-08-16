#include<bits/stdc++.h>
using namespace std;

struct Order {

    int       order_number;
	string    symbol;
	string    type;
	double    order_price;
	int       quantity;

};

struct Tick {

	string  symbol;
	string  time_stamp;
	double  price;

	
};

unordered_map<string, vector<Order>>buy_limit_order;
unordered_map<string, vector<Order>>stop_limit_order;

// this for compare 
bool cmp(const struct Order &obj1, const struct Order &obj2)
{
	return obj1.order_price > obj2.order_price;
}

// this is for add order function
void    addOrder( const Order   &newOrder)
{
   
	if( newOrder.type == "BL") // check type order
	{
	    //cout<<"saket"<<endl;
		buy_limit_order[newOrder.symbol].push_back(newOrder);
		sort(buy_limit_order[newOrder.symbol].begin(), buy_limit_order[newOrder.symbol].end(), cmp );//this is for sorting price increasing order
	}
	else if( newOrder.type == "SL")// check of stop limit
	{
		stop_limit_order[newOrder.symbol].push_back(newOrder);
		sort(stop_limit_order[newOrder.symbol].begin(), stop_limit_order[newOrder.symbol].end(), cmp );//this is for sorting price increasing order
    }



}


// this is for new tick
void newTick(const  Tick  &ticks)
{
   
    if( buy_limit_order.find(ticks.symbol) != buy_limit_order.end())
    {
        
        vector<Order> &temp = buy_limit_order[ticks.symbol];
        auto itr = temp.begin();
        while( itr != temp.end())
        {
            if( ticks.price <= itr->order_price)
            {
                cout<<"Order "<<itr->order_number<<" "<<itr->symbol<<" "<<"executed at "<<ticks.time_stamp<<" "<<"Price :"<<ticks.price<<" "<<"Quantity :"<<itr->quantity<<endl;
                temp.erase(itr);
            }
            else 
                itr++;
        }
        
    }
    
    if( stop_limit_order.find(ticks.symbol) != stop_limit_order.end())
    {
        vector<Order>&temp = stop_limit_order[ticks.symbol];
        auto itr = temp.begin();
        while( itr != temp.end())
        {
            if( ticks.price > itr->order_price)
            {
                cout<<"Order "<<itr->order_number<<" "<<itr->symbol<<" "<<"executed at "<<ticks.time_stamp<<" "<<"Price :"<<ticks.price<<" "<<"Quantity :"<<itr->quantity<<endl;
                temp.erase(itr);
            }
            else 
                itr++;
        }
    
    }
    

}

int main()
{
    addOrder({1, "AAPL", "BL", 100, 10});
    addOrder({2, "AAPL", "BL", 105,  5});
    addOrder({3, "AAPL", "BL", 102, 15});
    addOrder({4, "AAPL", "BL", 98, 10});
    addOrder({5, "GOOG", "BL", 200, 10});
    addOrder({6, "GOOG", "BL", 201, 15});
    addOrder({7, "GOOG", "BL", 198, 10});
    
    
    newTick({"AAPL", "08:58", 106});
    newTick({"AAPL", "09:00", 104});
    newTick({"AAPL", "09:01", 102});
    newTick({"AAPL", "09:02", 98});
    newTick({"GOOG", "09:03", 200});
	return 0;
}