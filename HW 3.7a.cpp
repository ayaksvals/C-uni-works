#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
  double a,b,c,d,x1,x2; 
  cout<<"a=? b=? c=? ";
  cin>>a>>b>>c;
 
  d=b*b-4*a*c; 
  if ((a==0) and (b==0) and (c==0)) cout<<"Будь-які корені";
  else if ((a==0) and (b!=0) and (c!=0)) cout<<"x="<<-c/b;
       else if ((a==0) and (b==0) and (c!=0)) cout<<"Коренів немає";
            else if (((a==0) and (b!=0) and (c==0)) or ((a!=0) and (b!=0) and (c==0))) cout<<"x=0";
                 else if ((a!=0) and (b!=0) and (c==0)) cout<<"x1=0, x2="<<-b/a;
                      else {
                           if (d>0) 
                           {
                                x1=((-b)+sqrt(d))/(2*a);
                                x2=((-b)-sqrt(d))/(2*a);
                                cout<<"x1= "<< x1;
                                cout<<" x2= "<< x2;
                           }
                           if (d==0)  cout<<"x1=x2="<<-(b/(2*a))<< "\n";
                           if (d<0) cout<<"D<0";
                          
                      }
}