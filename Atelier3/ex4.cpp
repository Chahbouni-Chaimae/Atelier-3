#include<iostream>
using namespace std;
class mere{
public:
  void display ()
  {
    cout << "La m?thode display de la classe mere \n";  //msg du 1ere methode
  }
};
class fille : public mere{
public:
  void display ()
  {
    cout << "La m?thode display de la classe fille \n"; //msg du 2eme methode
  }
};
int main ()
{
  fille b;
  b.display();
  return 0;
}
