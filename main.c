#include <stdio.h>

int main() {
    double dtb, drl;

    if (scanf("%lf %lf", &dtb, &drl) != 2) {
        return 0;
    }

    int hoc_luc; 
    if (dtb >= 9.0) {
        hoc_luc = 4;
    } else if (dtb >= 8.0) {
        hoc_luc = 3;
    } else if (dtb >= 7.0) {
        hoc_luc = 2;
    } else {
        hoc_luc = 1;
    }

    int ren_luyen; 
    if (drl >= 90) {
        ren_luyen = 4;
    } else if (drl >= 80) {
        ren_luyen = 3;
    } else if (drl >= 70) {
        ren_luyen = 2;
    } else {
        ren_luyen = 1;
    }

    if (hoc_luc == 4 && ren_luyen == 4) {
        printf("HOC_BONG_XUAT_SAC\n");
    } 
    else if ((hoc_luc == 3 && (ren_luyen == 3 || ren_luyen == 4)) || (hoc_luc == 4 && ren_luyen == 3)) {
        printf("HOC_BONG_GIOI\n");
    } 
    else if ((hoc_luc == 2 && (ren_luyen == 2 || ren_luyen == 3 || ren_luyen == 4)) || 
             (hoc_luc == 3 && ren_luyen == 2) || 
             (hoc_luc == 4 && ren_luyen == 2)) {
        printf("HOC_BONG_KHA\n");
    } 
    else {
        printf("KHONG_DAT\n");
    }

    return 0;
}
