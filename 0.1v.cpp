#include <iostream>

using namespace std;

int main() {
  string vardas,r1,r2,r3,r4,r5;
  int ilgis, visasIlgis;
  cout << "Iveskite Savo varda: " << endl;
  cin >> vardas;
  ilgis=vardas.length();
  visasIlgis=ilgis+14;
  r1+=" ";
  for(int i=0;i<visasIlgis;i++)
  {
    r1+= "*";
  }
  cout << r1 << endl;
  r2+=" ";
  for(int i=0;i<visasIlgis;i++)
  {
    if(i==0 || i==visasIlgis-1)
      r2+="*";
    else
      r2+=" ";
  }
    cout << r2 << endl;
    r3+=" * Sveikas, ";
    r3+= vardas;
    r3+="! *";
    cout << r3 << endl;
  r4=r2;
  r5=r1;
  cout << r4 << endl << r5 << endl;
}
