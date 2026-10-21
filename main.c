#include <stdio.h>
int main() {
  int distance, oder_value;
  scanf("%d %d", &distance, &oder_value);
  if (destance < 0 oder_value < 0){
    printf("INVAILID");
  }
  else if (oder_value> 500000 && distance <15){
    printf("0");
  }
  if (distance < 5){
    printf("15000");
  }else if (distance < 15)
    printf("25000");
  }else{
  printf("40000");
  } 
}
  return 0;