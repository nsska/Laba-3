#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double sazhen_to_meter = 2.1366, inch_to_cm = 2.5, foot_to_meter = 0.3048, drachm_to_gram = 3.7325, ounce_to_gram = 29.86, pound_to_kg = 0.40951, arshin_to_meter = 0.7112, zolotnik_to_gram = 4.2657, inch_to_mm = 25.3995;
    
    double input_value;
    int conversion_choice;
    
    cout << "Выберите опцию для конвертации:\n""1. Сажень в метры\n""2. Дюйм в сантиметры\n""3. Футы в метры\n""4. Драхмы в граммы\n""5. Унции в граммы\n""6. Фунты в килограммы\n""7. Аршины в метры\n""8. Золотники в граммы\n""9. Дюймы в миллиметры\n";
    
    cin >> conversion_choice;
    
    cout << "Введите значение для преобразования:\n";
    cin >> input_value;
    
    switch (conversion_choice) {
        case 1:
            cout << input_value * sazhen_to_meter << " метров\n";
            break;
        case 2:
            cout << input_value * inch_to_cm << " сантиметров\n";
            break;
        case 3:
            cout << input_value * foot_to_meter << " метров\n";
            break;
        case 4:
            cout << input_value * drachm_to_gram << " грамм\n";
            break;
        case 5:
            cout << input_value * ounce_to_gram << " грамм\n";
            break;
        case 6:
            cout << input_value * pound_to_kg << " килограмм\n";
            break;
        case 7:
            cout << input_value * arshin_to_meter << " метров\n";
            break;
        case 8:
            cout << input_value * zolotnik_to_gram << " грамм\n";
            break;
        case 9:
            cout << input_value * inch_to_mm << " миллиметров\n";
            break;
        default: 
            cout << "Неизвестный выбор.\n";
            break;
    }
    
    return 0;
}
