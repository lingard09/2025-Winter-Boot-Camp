#include <stdio.h>

int main() {
    // 여기에 코드를 작성하세요
    int number = 0;
    int count = 0;
  
    scanf("%d", &number);
  
    for(int i=0; i<number; i++) {
      int height = 0, weight = 0;
      float bmi = 0;
      scanf("%d %d", &height, &weight);
      float height_m = (double) height / 100;
      bmi = (double) weight / (height_m * height_m);
      if (bmi >= 25)
        count ++;
    }

    printf("%d", count);
    
    return 0;
}