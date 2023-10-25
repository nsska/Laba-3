#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int number;
    int count = 0;
    int sum = 0;

    while (true) {
        cout << "Введите число: ";
        cin >> number;

        if (number == 0) {
            break;
        }

        count++;
        sum += number;
    }

    cout << "Количество введенных чисел: " << count << endl;
    cout << "Общая сумма чисел: " << sum << endl;

    if (count > 0) {
        double average = sum / count;
        cout << "Среднее арифметическое: " << average << endl;
    } else {
        cout << "Среднее арифметическое невозможно вычислить, так как не было введено ни одного числа." << endl;
    }
    
    return 0;
}