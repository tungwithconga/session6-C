#include<stdio.h>
int main(){
	int a, b, c, choice;
    float avg;
    cout << "Nhap v�o 3 so nguy�n: ";
    cin >> a >> b >> c;
    cout << "MENU" << endl;
    cout << "1. Tong 3 so nguy�n" << endl;
    cout << "2. Trung binh cong cua 3 so nguy�n" << endl;
    cout << "3. So lon nhat, nho nhat trong 3 so" << endl;
    cout << "4. Tho�t" << endl;
    cout << "Lua chon cua ban: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Tong 3 so nguy�n l�: " << a + b + c << endl;
            break;
        case 2:
            avg = (a + b + c) / 3.0;
            cout << "Trung binh cong cua 3 so nguy�n l�: " << avg << endl;
            break;
        case 3:
            if (a > b && a > c)
                cout << "So lon nhat l�: " << a << endl;
            else if (b > a && b > c)
                cout << "So lon nhat l�: " << b << endl;
            else
                cout << "So lon nhat l�: " << c << endl;
            if (a < b && a < c)
                cout << "So nho nhat l�: " << a << endl;
            else if (b < a && b < c)
                cout << "So nho nhat l�: " << b << endl;
            else
                cout << "So nho nhat l�: " << c << endl;
            break;
        case 4:
            cout << "Chuong trinh ket th�c." << endl;
            break;
        default:
            cout << "Lua chon kh�ng hop li." << endl;
    }
    return 0;
}

