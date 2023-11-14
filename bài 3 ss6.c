#include<stdio.h>
int main(){
	int a, b, c, choice;
    float avg;
    cout << "Nhap vào 3 so nguyên: ";
    cin >> a >> b >> c;
    cout << "MENU" << endl;
    cout << "1. Tong 3 so nguyên" << endl;
    cout << "2. Trung binh cong cua 3 so nguyên" << endl;
    cout << "3. So lon nhat, nho nhat trong 3 so" << endl;
    cout << "4. Thoát" << endl;
    cout << "Lua chon cua ban: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Tong 3 so nguyên là: " << a + b + c << endl;
            break;
        case 2:
            avg = (a + b + c) / 3.0;
            cout << "Trung binh cong cua 3 so nguyên là: " << avg << endl;
            break;
        case 3:
            if (a > b && a > c)
                cout << "So lon nhat là: " << a << endl;
            else if (b > a && b > c)
                cout << "So lon nhat là: " << b << endl;
            else
                cout << "So lon nhat là: " << c << endl;
            if (a < b && a < c)
                cout << "So nho nhat là: " << a << endl;
            else if (b < a && b < c)
                cout << "So nho nhat là: " << b << endl;
            else
                cout << "So nho nhat là: " << c << endl;
            break;
        case 4:
            cout << "Chuong trinh ket thúc." << endl;
            break;
        default:
            cout << "Lua chon không hop li." << endl;
    }
    return 0;
}

