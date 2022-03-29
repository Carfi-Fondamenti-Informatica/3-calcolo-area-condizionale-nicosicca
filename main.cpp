#include <iostream>
using namespace std;

int main() {
   
   double a,b;
   int opz;
   
   cin>>a>>b>>opz;
   
   switch(opz)
   {
       case 0: cout<<a*b*0.5<<endl; break;
       case 1: cout<<a*a<<endl; break;
       case 2: cout<<a*b<<endl; break;
       default: cout<<"opzione non valida"<<endl; break;
   }
   return 0;
}
