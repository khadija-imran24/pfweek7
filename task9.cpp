#include<iostream>
using namespace std;

main()
{
     int num;
     cout<<"enter a number:";
     cin>>num;
    
    while (num<0) 
    {
        cout<<num<<endl;
        cout<<"enter again:";
        cin>>num;
    }
}
    