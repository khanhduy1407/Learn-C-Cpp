#include<stdio.h>
#include<math.h>

int main() {
    float km, tien = 0;
    printf("Nhap so km: ");
    scanf("%f", &km);

    if (km <= 1 && km > 0) {
        tien = 5000;
    } else {
        if (km <= 30) {
            tien = floor(km) * 5000 + ceil((km - floor(km)) / 0.2) * 1000;
        } else {
            tien = 150000 + ceil(km - 30) * 3000;
        }
    }

    printf("So tien = %.0f (VND)", tien);

    return 0;
}