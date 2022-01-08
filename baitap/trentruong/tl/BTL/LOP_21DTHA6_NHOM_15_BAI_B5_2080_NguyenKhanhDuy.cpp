#include<stdio.h>
#include<conio.h>
#include<windows.h>

typedef struct {
    char sbd[5], hoten[50];
    float diemToan, diemLy, diemHoa;
} Thisinh;
typedef Thisinh Mang[100];

void nhap(Mang m, int &n) {
    float toan, ly, hoa;

    printf("Nhap so luong thi sinh: "); scanf("%d", &n);

    for (int i = 0; i < n; i++){
        fflush(stdin);
        printf("Thi sinh thu %d\n", i + 1);
        printf("\t- SBD (4 so cuoi): "); gets(m[i].sbd);
        fflush(stdin);
        printf("\t- Ho ten: "); gets(m[i].hoten);
        fflush(stdin);
        printf("\t- Diem Toan, Ly, Hoa: "); scanf("%f%f%f", &toan, &ly, &hoa);
        m[i].diemToan = toan;
        m[i].diemLy = ly;
        m[i].diemHoa = hoa;
    }
}

void hien(Mang m, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n%s_%s, Toan %.1f, Ly %.1f, Hoa %.1f", m[i].sbd, m[i].hoten, m[i].diemToan, m[i].diemLy, m[i].diemHoa);
    }
}

void cauA(Mang m, int n) {
    for (int i = 0; i < n; i++) {
        if (m[i].diemToan < 5 || m[i].diemLy < 5 || m[i].diemHoa < 5) {
            printf("\t%s_%s\n", m[i].sbd, m[i].hoten);
        }
    }
}

int cauB(Mang m, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (m[i].diemToan >= 5 && m[i].diemLy >= 5 && m[i].diemHoa >= 5
            && (m[i].diemToan + m[i].diemLy) >= 14) {
                dem++;
            }
    }
    return dem;
}

void cauC(Mang m, int n) {
    float dem = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if ((m[i].diemToan + m[i].diemLy + m[i].diemHoa) > max) {
            max = m[i].diemToan + m[i].diemLy + m[i].diemHoa;
        }
    }
    for (int i = 0; i < n; i++) {
        if ((m[i].diemToan + m[i].diemLy + m[i].diemHoa) == max) {
            printf("\t%s_%s\n", m[i].sbd, m[i].hoten);
        }
    }
}

int main(){
    Mang a;
    int n, i;

    system("cls"); nhap(a, n);

    system("cls"); hien(a, n);

    printf("\n"); getch();
    
    printf("\na) Nhung thi sinh co it nhat 1 mon duoi 5 diem:\n"); cauA(a, n);
    printf("\nb) Co %d thi sinh co cac mon >%= 5 diem va (toan + ly) >%= 14", cauB(a, n));
    printf("\n\nc) Nhung thi sinh co diem tong cac mon thi la lon nhat:\n"); cauC(a, n);

    printf("\n"); getch();
}
