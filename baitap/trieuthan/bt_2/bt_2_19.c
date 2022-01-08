/**
 * Nhập một số a > 0 (ví dụ a = 0.00001) và một số thực x rồi tính 𝑒^𝑥:
 *      𝑒^𝑥 = 𝑛∑𝑘=0 (𝑥^𝑘)/(𝑘!)
 * Điều kiện dừng: |(𝑥^𝑛)/(𝑛!)| ≤ 𝑎
*/

#include<stdio.h>

int main() {
    double a, x;        // a: độ chính xác, x: mũ
    printf("Nhap x, a: ");
    scanf("%lf%lf", &x, &a);

    long long kGiaiThua = 1;
    int k = 0;
    double xMuk = 1;
    double kq = 0;
    double tam = xMuk / kGiaiThua;

    while (tam >= a) {
        kq += tam;
        k++;
        xMuk *= x;
        kGiaiThua *= k;
        tam = xMuk / kGiaiThua;
    }

    printf("e^%0.2lf = %lf", x, kq);

    return 0;
}