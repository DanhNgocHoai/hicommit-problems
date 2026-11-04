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
      int loai_hl = 1;
        int loai_rl = 1;

        if (dtb >= 9.0) {
            loai_hl = 4; 
        } else if (dtb >= 8.0) {
            loai_hl = 3;
        } else if (dtb >= 7.0) {
            loai_hl = 2;
        } else {
            loai_hl = 1;
        }

        if (drl >= 90.0) {
            loai_rl = 4; 
        } else if (drl >= 80.0) {
            loai_rl = 3; 
        } else if (drl >= 70.0) {
            loai_rl = 2;
        } else {
            loai_rl = 1; 
        }
        if (loai_hl == 4 && loai_rl == 4) {
            printf("HOC_BONG_XUAT_SAC\n");
        }
        else if ((loai_hl == 3 && (loai_rl == 3 || loai_rl == 4)) || 
                 (loai_hl == 4 && loai_rl == 3)) {
            printf("HOC_BONG_GIOI\n");
        }
        else if ((loai_hl == 2 && (loai_rl == 2 || loai_rl == 3 || loai_rl == 4)) || 
                 (loai_hl == 3 && loai_rl == 2) || 
                 (loai_hl == 4 && loai_rl == 2)) {
            printf("HOC_BONG_KHA\n");
        }
        else {
            printf("KHONG_DAT\n");
        }
    }
    
    return 0;
}
