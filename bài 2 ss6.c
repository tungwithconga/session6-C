#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float num1, num2;

    printf("Nhap vao 2 so nguyen tu ban phim: ");
    scanf("%f %f", &num1, &num2);

    printf("CACULATOR\n");
    printf("1. Tong 2 so\n");
    printf("2. Hieu 2 so\n");
    printf("3. Tích 2 so\n");
    printf("4. Thuong 2 so\n");
    printf("5. So du trong phép chia 2 so\n");
    printf("6. Uoc chung lon nhat\n");
    printf("7. Boi chung nho nhat\n");
    printf("8. Thoát\n");

    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
            break;
        case 4:
            if(num2 == 0)
            {
                printf("Khong the chia cho 0");
            }
            else
            {
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
            }
            break;
        case 5:
            if(num2 == 0)
            {
                printf("Khong the chia cho 0");
            }
            else
            {
                printf("%.2f / %.2f = %.2f", num1, num2, num1 % num2);
            }
            break;
        case 6:
            printf("Uoc chung lon nhat cua %.2f và %.2f la: %.2f", num1, num2, ucln(num1, num2));
            break;
        case 7:
            printf("Boi chung nho nhat cua %.2f và %.2f la: %.2f", num1, num2, bcnn(num1, num2));
            break;
        case 8:
            exit(0);
        default:
            printf("Lua chon không hop li");
    }

    return 0;
}

float ucln(float a, float b)
{
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }

    return a;
}

float bcnn(float a, float b)
{
    return (a * b) / ucln(a, b);
}
        

}

    	

