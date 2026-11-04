#include <stdio.h>
int main() {
  int code;
    scanf("%d", &code)
  switch(code){
      case 1:
      printf("XEP_LOAI_XUAT_SAC"\n);
      break;
      case 2:
      printf("XEP_LOAI_GIOI"\n);
      break;
      case 3:
      printf("XEP_LOAI_KHA"\n);
      break;
      case 4:
      printf("XEP_LOAI_TRUNG_BINH"\n);
      break;
      
    default:
      puts("KHONG_HOP_LE");
  }
  
  return 0

}