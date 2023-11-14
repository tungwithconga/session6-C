#include <stdio.h>

int main() {
    int n, choice;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);
    do {
        printf("\n\nPRACTICE\n");
        printf("1. In day so chia het cho 2 va giam dan (n >= so >= 2)\n");
        printf("2. In cac so nho hon n va tinh tong\n");
        printf("3. In ra cac uoc so chan cua n\n");
        printf("4. In ra cac uoc so le va so luong cac uoc le cua n\n");
        printf("5. In ra uoc so le lon nhat cua n\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nDay so chia het cho 2 va giam dan (n >= so >= 2):\n");
                for (int i = n ; i >= 2; i--) {
                    if (i % 2 == 0) {
                        printf("%d ", i);
                    }
                }
                break;
            case 2:
                printf("\nCac so nho hon n va tong cua chung:\n");
                int sum = 0;
                for (int i = 1; i < n; i++) {
                    printf("%d ", i);
                    sum += i;
                }
                printf("\nTong cac so la: %d", sum);
                break;
            case 3:
                printf("\nCac uoc so chan cua n:\n");
                for (int i = 2; i <= n; i += 2) {
                    if (n % i == 0) {
                        printf("%d ", i);
                    }
                }
                break;
            case 4:
                printf("\nCac uoc so le va so luong cac uoc le cua n:\n");
                int count = 0;
                for (int i = 1; i <= n; i += 2) {
                    if (n % i == 0) {
                        printf("%d ", i);
                        count++;
                    }
                }
                printf("\nSo luong cac uoc le la: %d", count);
                break;
            case 5:
                printf("\nUoc so le lon nhat cua n: ");
                for (int i = n; i >= 1; i--) {
                    if (n % i == 0 && i % 2 != 0) {
                        printf("%d", i);
                        break;
                    }
                }
                break;
            case 6:
                printf("\nTam biet!");
                break;
            default:
                printf("\nLua chon khong hop le. Vui long chon lai.");
        }
    } while (choice != 6);
    return 0;
}

