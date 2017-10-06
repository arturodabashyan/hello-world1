#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    const short foot = 12; 
    const float meter = 0.0254; 
    const float kilogram = 2.2; 
 
 
    cout << "Введите рост в футах: _\b"; 
    short f1; 
    cin >> f1;
    cout << "дюймы тоже пожалуйста: _\b";
    short i1;
    cin >> i1;
 
    cout << "Введите свой вес в фунтах:___\b\b\b";
    float p1;
    cin >> p1;
 
    int f2 = f1 * foot + i1; 
    float m1 = f2 * meter; 
    float k1 = p1 / kilogram; 
 
    float bmi = k1 / pow(m1, 2); 
 
    cout << "Рост в дюймах: " << f2 << endl;
    cout << "Рост в метрах: " << m1 << endl;
    cout << "Вес в килограммах: " << k1 << endl;
    cout << "Индекс массы тела ваш равен : " << bmi << endl;
 
    cin.get();
    cin.get();
 
    return 0;
}
