#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int result = 1;
    int sum = 0;

    for (int i = 2; i <= 10; i++) {
        sum += i;
        result *= sum;
    }

    cout << "Результат: " << result << endl;
    
    return 0;
}
