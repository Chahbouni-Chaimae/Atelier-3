#include <iostream>
using namespace std;
class Media
{
char titre;
public:
void imprimer();
char *id();
};
class Livre: virtual public Media
{
char titrel;
public:
void imprimer();
char *idl();
};
class Audio: virtual public Media
{
char titrea;
public:
void imprimer();
char *ida();
};
class Presse: virtual public Media
{
char titrep;
public:
void imprimer();
char *idp();
};
class CD: virtual public  Audio
{
char titrec;
public:
void imprimer();
char *idc();
};
class Cassette: virtual public  Audio
{
char titreca;
public:
void imprimer();
char *idca();
};
class Disque: virtual public  Audio
{
char titred;
public:
void imprimer();
char *idd();
};
class Magazine: virtual public Presse
{
char titrem;
public:
void imprimer();
char *idm();
};
class Journal: virtual public Presse
{
char titrej;
public:
void imprimer();
char *idj();
};
class Revue: virtual public Presse
{
char titrer;
public:
void imprimer();
char *idr();
};

