#include<bits/stdc++.h>
using namespace std;

void Write()
{
     fstream fout;

    fout.open("xyz.csv", ios::out);

    if(!fout.is_open())
    {
        cout<<"Write File has not open";
        return ;
    }

    string ticker, isin;
    int id, date;

    for( int i=0; i<1; i++)
    {
        cin>>id>>date>>ticker>>isin;
        fout<<id<<",";
        fout<<date<<",";
        fout<<ticker<<",";
        fout<<"isin"<<",";
        fout<<endl;
    } 
    fout.close();
}
void Read()
{
    fstream fin;

    fin.open("xyz.csv");
    if( !fin.is_open())
    {
        cout<<"Read File has not open"<<endl;
        return;
    }
   vector<vector<string>>ans;
   string temp, word;
    while(!fin.eof())
    {
       getline(fin, temp);
       //cout<<temp<<endl;
       stringstream s(temp);
       vector<string>v;
       while(getline(s, word,','))
       {
            v.push_back(word);
       }
    

        ans.push_back(v);
    }
    for( int i=0; i<ans.size(); i++)
    {
        for( int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    fin.close();
}
int main()
{
  // Write();
    Read();
    


}