#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ukrainian");
    double A, B, C;

    cout << "����i�� �������� ��� A: ";
    cin >> A;
    cout << "����i�� �������� ��� B: ";
    cin >> B;
    cout << "����i�� �������� ��� C: ";
    cin >> C;

    if (A <= B && B <= C) {
        A *= 2;
        B *= 2;
        C *= 2;
    }
    else {
        A = -A;
        B = -B;
        C = -C;
    }

    cout << "���i �������� ��i���� A, B, C: " << A << ", " << B << ", " << C << endl;


       
        


   

    
        double r, a;
        cout << "����i�� ���i�� ����: ";
        cin >> r;
        cout << "����i�� ������� �������� ��������: ";
        cin >> a;
        
        // ���������� ����i ����
        const float pi = 3.1415;
        double s_circle = pi * r * r;

        // ���������� ����i ��������
        double s_square = a * a;

        // ���������� ����i �i����
        double s_ring = s_circle - s_square;

        // ��������� ����������
        cout << "����� �i���� ���i����: " << s_ring << endl;

        return 0;
}