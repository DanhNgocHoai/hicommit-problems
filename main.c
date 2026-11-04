#include <stdio.h>
int main() {
    float dtb;
    int drl;
    if (scanf("%f %d", &dtb, &drl) == 2) {
        if (dtb < 0.0 || dtb > 10.0 || drl < 0 || drl > 100) {
            printf("Du lieu nhap vao khong hop le!\n");
            return 1;
        }
        if (dtb >= 9.0 && drl >= 90) {
            printf("XUAT_SAC\n");
        } else if (dtb >= 8.0 && drl >= 80) {
            printf("GIOI\n");
        } else if (dtb >= 7.0 && drl >= 65) {
            printf("KHA\n");
        } else {
            printf("KHONG_DAT\n");
        }
    }
    
    return 0;
}
