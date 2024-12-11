#include <iostream>
#include <iomanip>

using namespace std;

// Задача 1: Вычисление скорости
void calculateSpeed() {
    double distance, time;
    cout << "Введите расстояние до аэропорта (км): ";
    cin >> distance;
    cout << "Введите время в пути (часы): ";
    cin >> time;

    double speed = distance / time;
    cout << "Вам нужно ехать со скоростью: " << speed << " км/ч" << endl;
}

// Задача 2: Расчет стоимости поездки на скутере
void calculateScooterCost() {
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;

    cout << "Введите время начала (часы, минуты, секунды): ";
    cin >> startHour >> startMinute >> startSecond;

    cout << "Введите время завершения (часы, минуты, секунды): ";
    cin >> endHour >> endMinute >> endSecond;

    int startTotalSeconds = startHour * 3600 + startMinute * 60 + startSecond;
    int endTotalSeconds = endHour * 3600 + endMinute * 60 + endSecond;

    int durationInSeconds = endTotalSeconds - startTotalSeconds;
    if (durationInSeconds < 0) {
        durationInSeconds += 24 * 3600; // Учесть, если время завершения на следующий день
    }

    int durationInMinutes = durationInSeconds / 60;
    double cost = durationInMinutes * 2.0;

    cout << "Стоимость поездки: " << cost << " грн" << endl;
}

// Задача 3: Сравнение стоимости поездки на бензин
void compareFuelCost() {
    double distance;
    double consumptionPer100km;
    double price1, price2, price3;

    cout << "Введите расстояние (км): ";
    cin >> distance;
    cout << "Введите расход бензина на 100 км (л): ";
    cin >> consumptionPer100km;
    cout << "Введите стоимость первого вида бензина (грн/л): ";
    cin >> price1;
    cout << "Введите стоимость второго вида бензина (грн/л): ";
    cin >> price2;
    cout << "Введите стоимость третьего вида бензина (грн/л): ";
    cin >> price3;

    double totalConsumption = (distance / 100) * consumptionPer100km;
    double totalCost1 = totalConsumption * price1;
    double totalCost2 = totalConsumption * price2;
    double totalCost3 = totalConsumption * price3;

    cout << fixed << setprecision(2);
    cout << "Стоимость поездки на первом виде бензина: " << totalCost1 << " грн" << endl;
    cout << "Стоимость поездки на втором виде бензина: " << totalCost2 << " грн" << endl;
    cout << "Стоимость поездки на третьем виде бензина: " << totalCost3 << " грн" << endl;
}

int main() {
    int choice;
    cout << "Выберите задачу:\n1 - Вычисление скорости\n2 - Стоимость поездки на скутере\n3 - Сравнение стоимости бензина\n";
    cin >> choice;

    switch (choice) {
    case 1:
        calculateSpeed();
        break;
    case 2:
        calculateScooterCost();
        break;
    case 3:
        compareFuelCost();
        break;
    default:
        cout << "Неверный выбор!" << endl;
        break;
    }

    return 0;
}