#include<iostream>
using namespace std;
template <class T>
  class point
{ T x, y ; // coordonnees
public :
point (T abs, T ord)
 { x = abs ; y = ord ; }
void affiche () ;
} ;
 template <class T>void point<T>::affiche ()
{ cout << "Coordonnees : " << x << " " << y << "\n" ;
}
int main ( ){
    point <int> p (60, 65) ;
p.affiche () ;
return 0;
}
/* IL VA AFFICHE 
 1-Coordonnees : < A
 2- on va change le type de variable ,on va remplace le char avec int!
*/