#include <iostream>

using namespace std;

int main()

{
  int x;
  int y;
  int rez;
  double lol;
  int mod;
  
  x = 11;
  y = 2;
  
  mod = x % y;
 rez = x + y;
 lol = y / (double)x;
 
 cout <<" Skaitla " << x << " un " << y << " summa ir " << rez << endl;
    cout <<" Skaitla " << y << " un " << x << " dalijums ir " << lol << endl;
      cout <<" Skaitla " << x << " un " << y << " mod ir " << mod << endl;
   
   
   
   return 0;
}

