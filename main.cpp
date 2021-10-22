#include <iostream>
using namespace std;

// Ako se učenik loše ponaša na časovima (ponašanje se unosi kao broj od 1 do 10, sve iznad 5 je dobro ponašanje) i ne zna gradivo (ocjena na kontrolnom je manja od 4) profesor će ga izvesti na tablu i ocjeniti. Ako se učenik loše ponaša i ne zna gradivo bit će istjeran sa časa a ako se dobro ponaša profesor će ga pohvaliti.

int main() {
  int p, o;

  cout<< "Ponašanje se unosi u rasponu od 1 do 10, a ocjena u rasponu od 1 do 5."<< endl << "Unesite ponašanje pa ocjenu sa testa:"<< endl;
  cin>>  p >> o;

  if (p<6 && o<4)
   cout<<"Učenik će biti ispitan.";
  else if (p<6 && o>3)
   cout<<"Učenik će biti istjeran.";
  else 
   cout<<"Učenik će biti pohvaljen.";

return 0;

}