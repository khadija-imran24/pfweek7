#include<iostream>
using namespace std;
void printFibonacci (int number );
main()
{
    int number;
    cout<<"enter a number:";
    cin>>number;
     printFibonacci (number) ;
}
 void printFibonacci(int number)   
 {
    int result;
    int n1=0;
    cout<<n1<<",";
    int n2=1;
    cout<<n2;
    number=number-2;
   
      for (int count=1;count<=number;count=count+1)
    {
        result= n1+n2; 
        cout<<","<<result;
        n1=n2;
        n2=result;
       
    }
     
 }