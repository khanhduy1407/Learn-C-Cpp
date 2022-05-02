/**
 * Cho ma trận vuông Ma trận
 * 
 * 1. Phát sinh ngẫu nhiên cho a, sao cho giá trị mỗi phần tử được phát sinh trong khoảng từ 0 đến 500
 * 2. Xuất các phần tử thuộc đường chéo chính trong a
 * 3. Tìm giá trị phần tử lớn nhất trong a
 * 4. Cho số nguyên x, tìm vị trí dòng có chứa giá trị x xuất hiện trong a (nếu có nhiều phân phần tử bằng x
 *    thì lấy vị trí dòng mà x xuất hiện đầu tiên; nếu không tồn tại phần tử có giá trị x thì trở về -1)
 * 5. Xuất các phần tử thuộc đường chéo phụ trong a
 * 6. Tìm phần tử có giá trị nhỏ nhất trong a
 * 7. Cho số nguyên x, tính giá trị trung bình cộng các phần tử có giá trị lớn hơn x trong a
 * 8. Tìm dòng có tổng lớn nhất
 * 9. Tìm cột có tổng lớn nhất
 * 10. Xuất các phần tử nằm phía dưới ở đường chéo phụ
 * 10. Xuất các phần tử nằm phía trên ở đường chéo phụ
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100

typedef int MaTran[MAX][MAX];

void Nhap(MaTran a, int &dong, int &cot) {
    do {
        printf("Nhap so dong: "); scanf("%d", &dong);
    } while (dong < 0 || dong > 100);
    do {
        printf("Nhap so cot: "); scanf("%d", &cot);
    } while (cot < 0 || cot > 100);
}

void PhatSinhMaTran(MaTran a, int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            a[i][j] = rand() % 500;
        }
    }
}

void Xuat(MaTran a, int dong, int cot) {
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    time_t t;
    srand((unsigned) time(&t));

    MaTran a;
    int dong, cot;

    Nhap(a, dong, cot);
    PhatSinhMaTran(a, dong, cot);
    Xuat(a, dong, cot);

    return 0;
}
