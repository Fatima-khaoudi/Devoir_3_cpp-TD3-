#include<iostream>
#include<set>
using namespace std;
int main ()
{
      int  i,element;
    set<int>Myset;
    for(i=1;i<=10033;i++){
      cout<<"element"<<i<<endl;
        cin>>element;
        Myset.insert(element);
    }
        //affiche les element de SET!
     cout<<"les elements sont:"<<endl;
    for( const auto & element:Myset){
        cout<<element<<endl;

    }
    
 return 0;
}