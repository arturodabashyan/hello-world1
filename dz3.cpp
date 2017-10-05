#include <iostream>
int main()
{
 
   using namespace std;
   int farlong = 220, x;
   cout<<"Enter the distance in furlongs and convert it to yards:";
   cout << endl;
   cin >> x;
   system("cls");
   cout << x <<" farlong=" << farlong * x <<" yard" ;
   cin.get();
   cin.get();
   return 0;
 
}
