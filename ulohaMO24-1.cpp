#include<iostream>
using namespace std;

int main()
{
   float a;
   float b;
   float c;
   float d;
   float e;
   int f;
   a=1;
   b=0;
   c=0;
   while(a<10){
     while(b<10){
       while(c<10){
         d=((a*b)+(b*c))/2;
         e=a*c;
         if(d==e){
           cout << a << b << c << "\n";
           f=f+1;
           
         };
         c=c+1;
       };
       b=b+1;
       c=0;
     };
     a=a+1;
     b=0;
   };
   cout << f;
  }