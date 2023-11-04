#include<iostream>
using namespace std;
template<class T>
 T caree( T &a)
    {  
         T b=a*a; 
      return b;
    }
int main (){
  int x;
    cout<<"entre la valeur de variable :"<<endl;
    cin>>x; 
    cout<<"le carre de la  variable  entie est:"<<caree (x)<<endl;
  float y;
    cout<<"entre la valeur de variable :"<<endl;
    cin>>y; 
    cout<<"le carre de la  variable  float est:"<<caree (y)<<endl; 




 return 0;

}
