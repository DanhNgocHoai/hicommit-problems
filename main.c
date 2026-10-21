#include <stdio.h>
int main() {
  int distance, oder_value;
  scanf("%d %d", &distance, &order_value);
  if (distance < ||order_value < 0){
    printf("INVALID");
  }
  else if (oder_value> 500000 && distance <15){
    printf("0");
  }
  else{
  if (distance < 5){
    printf("15000");
  }else if (distance < 15)
    printf("25000");
  }else{
  printf("40000");
  } 
}
  return 0;
}