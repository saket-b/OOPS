#include<bits/stdc++.h>
using namespace std;



void evalExpr( string expr , double arr1[], double arr2[], double arr3[], double arr4[], string region[], string country[], int len)
{
    unordered_map<string , string> region_country;

    unordered_map<string, double>country_expsum;
    ofstream myfile;

    myfile.open("output.txt");
    if( !myfile)
    {
        cout<<"Output file is not open"<<endl;
        exit(0);
    }

 

    double ans = 0;
    for( int i=0; i<len; i++)
    {
        try {
            if( arr4[i]==0)
             throw "Try to attempt divide by zero ";

            ans = arr1[i]*arr2[i] + arr3[i]/arr4[i];
            country_expsum[country[i]]+= ans;
            region_country[country[i]] = region[i];

        }
        catch(string msg)
        {
            cout<<msg<<endl;
        }
        
      
    }

    for(auto itr= country_expsum.begin(); itr != country_expsum.end(); itr++)
    {
        myfile<<region_country[itr->first]<<"\t"<<itr->first<<"\t"<<itr->second<<endl;
    }
    myfile.close();

}


int main()
{
    string expr="a1*a2 + a3/a4";
    double arr1[10000];
    double arr2[10000];
    double arr3[10000];
    double arr4[10000];
    string region[10000];
    string country[10000];
    string  str;
    int     ind, f = 0;
    fstream inputfile;

    ind = 0;
     cout<<"saket"<<endl;
    inputfile.open("input.txt");
    if(! inputfile)
    {
        cout<<"File1 is not open "<<endl;
        exit(0);
    }

  
    while( getline(inputfile, str))
    {
        istringstream ss(str);
        if( f == 0)
        {
              f = 1;
        }
        else 
        {
            ss>>arr1[ind]>>arr2[ind]>>arr3[ind]>>arr4[ind]>>region[ind]>>country[ind];
            ind++;
        }
    }
    inputfile.close();
    
  
    
    // for(int i=0; i<ind; i++)
    // {
    //     cout<<region[i]<<" ";
        

    // }
    // cout<<endl;
       

    evalExpr(expr, arr1, arr2, arr3, arr4, region, country, ind);    


}