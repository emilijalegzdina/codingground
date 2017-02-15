#include <iostream>

using namespace std;

int main()
{
    int atbilde;
    int r;
    int das;
    int euo;
    int g;
    int f;
    f = 0;

   cout << " Latvijas galvaspilsēta? " << endl;
   
     cout << " 1 Liepāja " << endl;
     
  cout << " 2 Daugavpils " << endl;
  
  cout << " 3 Rīga " << endl; 
  
   cout << " 4 Cēsis " << endl;  
   
  cin >> atbilde;
  
  if(atbilde == 3){
      
// izvadam tekstu ka ir pareizi

    cout << " pareizi! " << endl; 
    f = f + 1;
}else{
    
// izvadam tekstu ka ir nepareizi

      cout << " nepareizi! Pareiza atbilde ir 3 " << endl;    
      
}
    
   cout << " Kadas krasas ir LV karogs? " << endl;
   
     cout << " 1 zils,balts,sarkans " << endl;
     
  cout << " 2 sarkans,balts,sarkans " << endl;
  
  cout << " 3 melns,sarkans,zals " << endl; 
  
   cout << " 4 dzeltens,balts,zils " << endl;  
   
  cin >> r;
  
  if(r == 2){
      
// izvadam tekstu ka ir pareizi

    cout << " pareizi! " << endl; 
    f = f + 1;
}else{
    
// izvadam tekstu ka ir nepareizi

      cout << " nepareizi! Pareiza atbilde ir 2 " << endl;
  
    
}


    
   cout << " Kura vieta pec koku daudzuma Latvija ir Eiropa? " << endl;
   
     cout << " 1 sesta " << endl;
     
  cout << " 2 pirma " << endl;
  
  cout << " 3 ceturta " << endl; 
  
   cout << " 4 tresa " << endl;  
   
  cin >> das;
  
  if(das == 4){
      
// izvadam tekstu ka ir pareizi

    cout << " pareizi! " << endl; 
    f = f + 1;
}else{
    
// izvadam tekstu ka ir nepareizi

      cout << " nepareizi! Pareiza atbilde ir 4 " << endl; 
    
    
    
}

    
   cout << " Latvijas prezidents? " << endl;
   
     cout << " 1 Raimonds Vējonis " << endl;
     
  cout << " 2 Andris Kundzins " << endl;
  
  cout << " 3 Janis Baltins " << endl; 
  
   cout << " 4 Raimonds Lidaka " << endl;  
   
  cin >> euo;
  
  if(euo == 1){
      
// izvadam tekstu ka ir pareizi

    cout << " pareizi! " << endl; 
    f = f + 1;
    
}else{
    
// izvadam tekstu ka ir nepareizi

      cout << " nepareizi! Pareiza atbilde ir 1 " << endl; 
    
    
    
}

    
   cout << " Kas ir Kristaps Porzingis " << endl;
   
     cout << " 1 futbolists " << endl;
     
  cout << " 2 basketbolists " << endl;
  
  cout << " 3 dzejnieks " << endl; 
  
   cout << " 4 pavars " << endl;  
   
  cin >> g;
  
  if(g == 2){
      
// izvadam tekstu ka ir pareizi

    cout << " pareizi! " << endl; 
    f = f + 1;
}else{
    
// izvadam tekstu ka ir nepareizi

      cout << " nepareizi! Pareiza atbilde ir 2 " << endl; 
    
    
    
}
  cout << " Tu esi atbildejis pareizi " << f << " jautajumiem no 5 " << endl;
  


   return 0;
}

