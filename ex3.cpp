#include <iostream>
#include <list>
using namespace std;
class Presonne{
public:
    string nom;
    string prenom;
    int age;
};

int main() {
     list< Personne>personnes;
    Presonne ob;
    cout<< "entre le size de la liste"<<endl;
    cin>>sizelise;
    for(i=0;i<sizelise;i++){
        cout<<"entre le nom de personne "<<endl;
        cin>>ob.nom;
        cout<<"entre le renom de personne "<<endl;
        cin>>ob.renom;
        cout<<"entre le age de personne "<<endl;
         cin>>ob.age;
        personnes.push_back(Personne);
    }
     for (const Personne& personne : personnes)
      {
        cout << "Nom : " << personne.nom << ", Prénom : " << personne.prenom << ", Âge : " << personne.age << endl;
      }
   
   
}