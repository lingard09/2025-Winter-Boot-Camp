#include <stdio.h>

int main() {
    // 여기에 코드를 작성하세요
    int height = 0, weight = 0;
    float bmi = 0;
    scanf("%d %d", &height, &weight);
    float height_m = (double) height / 100;
    printf("%f\n", height_m);
    bmi = (double) weight / (height_m * height_m);
    printf("%f", bmi);
    return 0;
}