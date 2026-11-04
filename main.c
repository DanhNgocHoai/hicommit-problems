#include <stdio.h>

int main() {
    float drl;
    int dtb;

    if (scanf("%f %d", &dtb, &drl) == 2) { 
        if (dtb >= 9.0) {
            printf("XUAT_SAC\n");
        } 
        else if (dtb >= 8.0 && dtb < 9.0) {
            printf("GIOI\n");
        } 
        else if (dtb >= 7.0 && dtb < 8.0) {
            printf("KHA\n");
        } 
      else if (dtb < 7.0){
        printf("KHONG_DAT");
      }
    }

    return 0;
}

  