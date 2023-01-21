#include<iostream>
using namespace std;
void printPercentage(int n);
main()
{
       int number;
       int n;
       cout<<"enter number of integers:";
       cin>>n;
       printPercentage(n);
}
void printPercentage(int n)
      {
        float number;
        float sum1=0.00;
        float sum2=0.00;
        float sum3=0.00;
        float sum4=0.00;
        float sum5=0.00;
        float percent1=0.00;
        float percent2=0.00;
        float percent3=0.00;
        float percent4=0.00;
        float percent5=0.00;
       for (int count=1;count<=n;count=count+1)
    {
        cout<<"enter a  number:";
        cin>>number;
        if(number>=1&&number<200)
        {
            sum1=sum1+1;
            percent1=(sum1/n)*100;
            
        }
        else if(number>=200&&number<=399)
        {
            sum2=sum2+1;
            percent2=(sum2/n)*100;
            
        }
        else if(number>=400&&number<=599)
        {
            sum3=sum3+1;
            percent3=(sum3/n)*100;
            
        }
        else if(number>=600&&number<=799)
        {
            sum4=sum4+1;
            percent4=(sum4/n)*100;
            
        }
        else if(number>=800 )
        {
            sum5=sum5+1;
            percent5=(sum5/n)*100;
           
        }}
        cout<<percent1<<"%"<<endl;
        cout<<percent2<<"%"<<endl;
        cout<<percent3<<"%"<<endl;
        cout<<percent4<<"%"<<endl;
        cout<<percent5<<"%"<<endl;
}
    
  

    