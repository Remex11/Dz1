#include <iostream>
#include <iomanip>

using namespace std;

// ������ 1: ���������� ��������
void calculateSpeed() {
    double distance, time;
    cout << "������� ���������� �� ��������� (��): ";
    cin >> distance;
    cout << "������� ����� � ���� (����): ";
    cin >> time;

    double speed = distance / time;
    cout << "��� ����� ����� �� ���������: " << speed << " ��/�" << endl;
}

// ������ 2: ������ ��������� ������� �� �������
void calculateScooterCost() {
    int startHour, startMinute, startSecond;
    int endHour, endMinute, endSecond;

    cout << "������� ����� ������ (����, ������, �������): ";
    cin >> startHour >> startMinute >> startSecond;

    cout << "������� ����� ���������� (����, ������, �������): ";
    cin >> endHour >> endMinute >> endSecond;

    int startTotalSeconds = startHour * 3600 + startMinute * 60 + startSecond;
    int endTotalSeconds = endHour * 3600 + endMinute * 60 + endSecond;

    int durationInSeconds = endTotalSeconds - startTotalSeconds;
    if (durationInSeconds < 0) {
        durationInSeconds += 24 * 3600; // ������, ���� ����� ���������� �� ��������� ����
    }

    int durationInMinutes = durationInSeconds / 60;
    double cost = durationInMinutes * 2.0;

    cout << "��������� �������: " << cost << " ���" << endl;
}

// ������ 3: ��������� ��������� ������� �� ������
void compareFuelCost() {
    double distance;
    double consumptionPer100km;
    double price1, price2, price3;

    cout << "������� ���������� (��): ";
    cin >> distance;
    cout << "������� ������ ������� �� 100 �� (�): ";
    cin >> consumptionPer100km;
    cout << "������� ��������� ������� ���� ������� (���/�): ";
    cin >> price1;
    cout << "������� ��������� ������� ���� ������� (���/�): ";
    cin >> price2;
    cout << "������� ��������� �������� ���� ������� (���/�): ";
    cin >> price3;

    double totalConsumption = (distance / 100) * consumptionPer100km;
    double totalCost1 = totalConsumption * price1;
    double totalCost2 = totalConsumption * price2;
    double totalCost3 = totalConsumption * price3;

    cout << fixed << setprecision(2);
    cout << "��������� ������� �� ������ ���� �������: " << totalCost1 << " ���" << endl;
    cout << "��������� ������� �� ������ ���� �������: " << totalCost2 << " ���" << endl;
    cout << "��������� ������� �� ������� ���� �������: " << totalCost3 << " ���" << endl;
}

int main() {
    int choice;
    cout << "�������� ������:\n1 - ���������� ��������\n2 - ��������� ������� �� �������\n3 - ��������� ��������� �������\n";
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
        cout << "�������� �����!" << endl;
        break;
    }

    return 0;
}