#include <iostream>
using namespace std;
class Animal {
	char nom;
	int age;
  public: 	
     void set_value();
};
class Zebra: public Animal
{	
public:
 set_value()
{
cout<<"le nom est: Zebra et son age c est: 2 ans"<<endl;
}
};
class Dolphin: public Animal
{
public:
void set_value()
{
cout<<"le nom est: Dolphin et son age c est: 3 ans"<<endl;
}
};
int main() {
Zebra z;
Dolphin d;
z.set_value();
d.set_value();
return 0;
}
