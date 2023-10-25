#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int height;
    cout << "Введите высоту треугольника и трапеции: ";  
    cin >> height;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i - 1; j++) {  
            cout << " ";  
        }
        for (int k = 0; k < 2 * i + 1; k++) {  
            cout << "*";  
        }  
        cout << endl;  
    }
    
    int height;
    cout << "Введите высоту треугольника и трапеции: ";  
    cin >> height;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < height + 2 * (height - i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}