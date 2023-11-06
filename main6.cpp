#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Ukrainian");
    double A, B, C;

    cout << "¬ведiть значенн€ дл€ A: ";
    cin >> A;
    cout << "¬ведiть значенн€ дл€ B: ";
    cin >> B;
    cout << "¬ведiть значенн€ дл€ C: ";
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

    cout << "Ќовi значенн€ змiнних A, B, C: " << A << ", " << B << ", " << C << endl;


       
        


   

    
        double r, a;
        cout << "¬ведiть радiус кола: ";
        cin >> r;
        cout << "¬ведiть сторону великого квадрата: ";
        cin >> a;
        
        // ќбчисленн€ площi кола
        const float pi = 3.1415;
        double s_circle = pi * r * r;

        // ќбчисленн€ площi квадрата
        double s_square = a * a;

        // ќбчисленн€ площi кiльц€
        double s_ring = s_circle - s_square;

        // ¬иведенн€ результату
        cout << "ѕлоща кiльц€ дорiвнюЇ: " << s_ring << endl;

        return 0;
}