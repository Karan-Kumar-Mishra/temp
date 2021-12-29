#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std; 
int main()
{
  string k="clr";
  int a,b,c;
  char ope;
  cin>>a;
  cin>>ope;
  cin>>b;
  switch(ope)
{
  case'+':
  cout<<a+b;
  break;
  case'-':
  cout<<a-b;
  break;
  case'*':
  cout<<a*b;
  break;
  case'%':
  cout<<a%b;
  break;
}
  cin>>k;
  if(k=="clr")
{
  system("cls");
}
  else if(k=="agn")
{
  main();
}
   else if(k=="factorial")
{
  int n,fact=1;
  cout<<"enter any number for factorial"<<endl;
  cin>>n;
 for(int i=1;i<=n;i++)
{
  fact=fact*i;
}
  cout<<"factorial is="<<fact<<endl;
}
   else 
    cout<<"program is over"<<endl;
   return 0;
}

