#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main ()
{
    int sizelise ,i;
      int element;
    list<int>Mylist;//declaration de la liste.
    cout<< "entre le size de la liste"<<endl;
    cin>>sizelise;
    //entre les element de tableau!
    for(i=0;i<sizelise;i++){
      cout<<"element"<<i+1<<endl;
        cin>>element;
        Mylist.push_back(element);
    }
        //affiche les element de tableau!
     cout<<"les element de tableaun sont:"<<endl;
    for( const auto & element:Mylist){
        cout<<element<<endl;

    }
    int a ;
    list<int>::iterator it;
    for(it=Mylist.begin();it!=prev( Mylist.end());it++){
        list<int>::iterator next= std::next(it);
          if(*it>*next)
       {
           a=*it;
           * it =*next;
           *next=a;
       }
    }
    cout<<"la list tri est :"<<endl;
    for( const auto & element:Mylist){
        cout<<element<<endl;}

 return 0;
}