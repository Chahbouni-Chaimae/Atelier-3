#include <iostream>
using namespace std;
class Complex{
  
  public:
  double real, imag;
  Complex(double r, double i){
    real = r;
    imag = i;
  }
};

int main(){
  double r1, i1;
  cout << "Premier nombre \n";
  cout << "Entrez la partie réelle: ";
  cin >> r1;
  cout << "Entrez la partie imaginaire: ";
  cin >> i1;
  //créer le nombre complexe 1
  Complex c1(r1, i1);
  
  cout << "Deuxième nombre\n";
  double r2, i2;
  cout << "Entrez la partie réelle: ";
  cin >> r2;
  cout << "Entrez la partie imaginaire: ";
  cin >> i2;
  //créer le nombre complexe 2  
  Complex c2(r2, i2);
  // calculer L addition des deux nombres complexes c1 et c2
  double r = c1.real + c2.real;
  double i = c1.imag + c2.imag;
  cout << "L addition est "<< r << " + " << i << "i"<<endl;
   // calculer la soustraction des deux nombres complexes c1 et c2
   double a = c1.real - c2.real;
  double b = c1.imag - c2.imag;
  cout << "La soustraction est "<< a << " - " << b << "i"<<endl;
   // calculer la multiplication des deux nombres complexes c1 et c2
   double c = c1.real * c2.real;
  double d = c1.imag * c2.imag;
  cout << "La multiplication est "<< c*d<<"i"<<endl;
   // calculer la devision des deux nombres complexes c1 et c2
    double x = c1.real / c2.real;
  double y = c1.imag / c2.imag;
  cout << "La devision est "<< x/y<<"i"<<endl;
  return 0;
}
