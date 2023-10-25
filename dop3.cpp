#include<iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");
    const int numOfQuestions = 20;
    int score = 0;
    cout << "=== Программа-тест ===" << endl;
    string questions[numOfQuestions] = {
        "1. В каком году был создан язык C++?",
        "2. Что такое STL?",
        "3. Какой оператор используется для получения адреса переменной?",
        "4. Что такое директива `#include`?",
        "5. Как создать новый объект в C++?",
        "6. Какой оператор используется для префиксного инкремента в C++?",
        "7. Какой тип данных используется для хранения целых чисел в C++?",
        "8. Какой язык программирования является наследником C++?\n",
        "9. Что такое оператор new?\n",
        "10. Что такое стек?\n",
        "11. Что такое указатель?\n",
        "12. Что означает аббревиатура C++?\n",
        "13. Какой тип данных используется для хранения символов в C++?\n",
        "14. Что такое условный оператор if-else?\n",
    };
    string options[numOfQuestions][3] = {
        {"a) 1972", "b) 1983", "c) 1995"},
        {"a) Standard Type Library", "b) Standard Template Library", "c) System Type Library"},
        {"a) *", "b) &", "c) %"},
        {"a) Определение констант", "b) Включение файлов", "c) Команда препроцессора"},
        {"a) MyClass obj;", "b) MyClass.create();", "c) new MyClass();"},
        {"a) +", "b) ++", "c) -"},
        {"a) int", "b) float", "c) char"},
        {"a) C#", "b) Java", "c) C"},
        {"a) Оператор для выделения памяти", "b) Оператор логического И", "c) Оператор цикла"},
        {"a) Память для хранения локальных переменных и возвращаемых функций", "b) Разновидность массива", "c) Оператор цикла"},
        {"a) float", "b) int", "c) char"},
        {"a) Указывает на адрес в памяти", "b) Позволяет получить доступ к содержимому указанного адреса", "c) Оператор цикла"},
        {"a) Супер плюс плюс", "b) Си плюс плюс", "c) Цепляйся и молись\n",
        {"a) char", "b) bool", "c) float\n",
        {"a) Оператор сравнения", "b) Оператор присваивания", "c) Оператор ветвления\n",
    };
    char correctAnswers[numOfQuestions] = {
        'c', 'b', 'b', 'b', 'a', 'b', 'a', 'c', 'a', 'a', 'b', 'b', 'b', 'a', 'c',
    };
    for (int i = 0; i < numOfQuestions; i++) {
        cout << questions[i] << endl;
        cout << options[i][0] << endl;
        cout << options[i][1] << endl;
        cout << options[i][2] << endl;
        cout << options[i][3] << endl;
        cout << options[i][4] << endl;
        cout << options[i][5] << endl;
        cout << options[i][6] << endl;
        cout << options[i][7] << endl;
        cout << options[i][8] << endl;
        cout << options[i][9] << endl;
        cout << options[i][10] << endl;
        cout << options[i][11] << endl;
        cout << options[i][12] << endl;
        cout << options[i][13] << endl;
        cout << options[i][14] << endl;
        
        char answer;
        cout << "Введите ваш ответ: ";
        cin >> answer;

        if (answer == correctAnswers[i]) {
            score++;
        }
    }
    int userAnswers[20];
    for (int i = 0; i < 20; i++) {
        if (userAnswers[i] == correctAnswers[i]) {
            score++;
        }
    }

    

    cout << "Вы набрали " << score << " из " << numOfQuestions << " баллов." << endl;
    
    return 0;
}