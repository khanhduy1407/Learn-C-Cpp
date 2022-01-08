#include<stdio.h>

int main() {
    int ngay = 0, thang, nam;
    printf("Nhap thang: "); scanf("%d", &thang);

    /**
     * Tháng 1, 3, 5, 7, 8, 10, 12 có 31 ngày
     * Tháng 4, 6, 9, 11 có 30 ngày
     * Tháng 2 có 28 ngày, năm nhuận có 29 ngày
    */

    switch (thang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            ngay = 31;
            break;
        case 4: case 6: case 9: case 11:
            ngay = 30;
            break;
        case 2:
            printf("Nhap nam: "); scanf("%d", &nam);
            if (nam % 4 == 0) ngay = 29;
            else              ngay = 28;
            break;
        default:
            printf("Khong ton tai thang nay!");
            break;
    }

    printf("Thang %d co %d ngay", thang, ngay);

    return 0;
}