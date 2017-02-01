#include <iostream>

using namespace std;

int main()
{
    int x;
    int rez;
   
    
   cout << " Ievadi skaitli, ko kapinat kvadrata " << endl; 
   
   cin >> x;
   
   if(x > 0){
       // Sis izpildisies ja x ir lielaks par 0
       cout << " x ir lielaks par 0 " << endl;

       
   }else{
       
       // sis izpildisies ja x nebus lielaks par 0
       cout << " x ir mazaks vai vienads ar 0 " << endl;
   }
   rez = x * x;
   cout << " Atbilde ir " << rez << endl;
   return 0;
   
}









