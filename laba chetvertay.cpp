#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "\n[+] Программа лабораторных" << endl;
    cout << "\n[*] Введите номер задания" << endl;
    cout << "\n[1] - Домик." << endl;
    cout << "\n[2] - Массивы." << endl;
    cout << "\n[3] - Тест." << endl;

    int height = 8;

    int variant;
    cin >> variant;
    switch (variant) {
    case 1:
    {    int height = 8; // высота дома
    int width = height * 2; // ширина основания дома, увеличиваем в два раза высоту для сохранения пропорций

    // Рисуем крышу
    for (int i = 0; i < height / 1; i++) {
        for (int j = 0; j < height / 1 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 0; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Рисуем основание крыши
    for (int i = 0; i < width; i++) {
        cout << "-";
    }
    cout << endl;

    // Рисуем стены
    for (int i = 0; i < height / 2; i++) {
        cout << "|";
        for (int j = 0; j < width - 2; j++) {
            cout << " ";
        }
        cout << "|" << endl;
    }

    // Рисуем пол
    for (int i = 0; i < width; i++) {
        cout << "-";
    }
    cout << endl;

    return 0;
    break;
    }

    case 2:
    { int numbers[] = { -3, 9, -5, 2, 7, -1, 0, -4 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Положительные числа: ";
    for (int i = 0; i < size; i++) {
        if (numbers[i] > 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    cout << "Отрицательные числа: ";
    for (int i = 0; i < size; i++) {
        if (numbers[i] < 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;

    return 0;
    }
    case 3:
    {
        cout << "\nТЕСТ" << endl;
        int otvet;

        cout << "2+2 " << endl;
        cout << " 1. 224" << endl;
        cout << " 2. 43121412" << endl;
        cout << " 3. 4" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 3) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }

        cout << "Что такое переменная " << endl;
        cout << " 1.Выделенная область памяти в ОЗУ" << endl;
        cout << " 2. Перемена в школе" << endl;
        cout << " 3. перепонная барабанка" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }

        cout << "Сколько часов в сутках " << endl;
        cout << " 1.12" << endl;
        cout << " 2. 24" << endl;
        cout << " 3. https://images.app.goo.gl/jonXygHH5LvEoBxXA" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 2) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << "Кем был Уолтер Уайт  ? " << endl;
        cout << " 1.Автомойщиком" << endl;
        cout << " 2. Слесарем" << endl;
        cout << " 3. Учителем" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 3) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << " Поставите 5 ?" << endl;
        cout << " 1.Нет" << endl;
        cout << " 2. Возможно" << endl;
        cout << " 3. ДА!" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 3) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << " Мы считали дырки в сыре - 2+3 =?" << endl;
        cout << " 1. 5" << endl;
        cout << " 2. 4" << endl;
        cout << " 3. ДА!" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << " Кто был главным Богом Олимпа?" << endl;
        cout << " 1.  Зевс" << endl;
        cout << " 2. Геркулес" << endl;
        cout << " 3. Геракол" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << "Сколько подвигов у Геракла?" << endl;
        cout << " 1.  10" << endl;
        cout << " 2. 12" << endl;
        cout << " 3. 52" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 2) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << "Сколько наград у Сталина?" << endl;
        cout << " 1.  28" << endl;
        cout << " 2. 29" << endl;
        cout << " 3. 52" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }

        cout << "Сколько морей на планете ?" << endl;
        cout << " 1.  52" << endl;
        cout << " 2. 63" << endl;
        cout << " 3. 69" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 2) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << "Сколько океанов на планете ?" << endl;
        cout << " 1.4" << endl;
        cout << " 2.5" << endl;
        cout << " 3.1" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }

        cout << "Сколько планет в солнечной системе ?" << endl;
        cout << " 1.7" << endl;
        cout << " 2.8" << endl;
        cout << " 3.9" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 2) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << "В слове СЧАСТЬЕ 7 букв и ... ?" << endl;
        cout << " 1.6 звуков" << endl;
        cout << " 2.7 звуков" << endl;
        cout << " 3.9 звуков" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << "Какая из перечисленных рек — самая длинная?" << endl;
        cout << " 1.Нева" << endl;
        cout << " 2.Нил" << endl;
        cout << " 3.Негр" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 2) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }

        cout << "Как называется прямая, ограниченная точками?" << endl;
        cout << " 1.Луч" << endl;
        cout << " 2.Прямая" << endl;
        cout << " 3.Перпендикуляр" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }

        cout << "Сколько звуков в слове «конь»?" << endl;
        cout << " 1.3" << endl;
        cout << " 2.5" << endl;
        cout << " 3.0" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 2) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }

        cout << "Каким животным было Серебряное копытце?" << endl;
        cout << " 1.Козел" << endl;
        cout << " 2.Лось" << endl;
        cout << " 3.0лень" << endl;

        cout << "Выберите один из вариантов и нажмите Enter" << endl;
        cout << "Введите номер варианта : "; cin >> otvet;

        if (otvet == 1) {
            cout << "Правильно" << endl;
        }
        else {
            if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
            else cout << "ошибка" << endl;
        }
        cout << "Лучший напиток с чипсами?"<<endl;
cout << " 1.Кола" << endl;
cout << " 2.Пиво(осуждаю)" << endl;
cout << " 3.Вода"<< endl;

cout << "Выберите один из вариантов и нажмите Enter" << endl;
cout << "Введите номер варианта : "; cin >> otvet;

if (otvet == 1) {
 cout << "Правильно" << endl;
}
else {
      if ((otvet < 1) || (otvet > 3)) cout << "Введите число от 1 до 3" << endl;
      else cout << "ошибка" << endl;
}
    }

} 
}