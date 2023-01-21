#include<iostream>
using namespace std;
void printTable(int number);
main()
{
    int number;
    cout<<"enter a number to show table:";
    cin>>number;
     printTable(number) ;
}
 void printTable(int number)   
 {
    int result;
      for (int count=1;count<=10;count=count+1)
    {
        result=number*count; 
        cout<<number<<"*"<<count<<"="<<result<<endl;
    }
 }