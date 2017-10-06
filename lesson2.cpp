#include <iostream>

int main(){
 
    using namespace std;
 
    const int Fut_1 = 12;   
    
    
    cout << "Введите свой рост:___\b\b\b";
    unsigned short duim;
    cin >> duim;
 
    
    int fut_R, duim_R;
    fut_R = duim / Fut_1;
    duim_R = duim % Fut_1;
 
    cout << "Ваш рост: " << fut_R << " футов и " 
         << duim_R << " дюймов." << endl;
 
 
    cin.get();
    cin.get();
 
    return 0;
}
