#include <stdio.h>

int bmiLevel(int height, int weight);
//파라미터: height: 신장(cm), weight: 체중(kg)
//수행내용: 비만도 계산 후 비만등급을 판정한다.
//리턴값: 비만등급 (0~4): 0 (Underweight), 1 (Normal weight), 2 (Overweight), 3 (Mild obesity), 4 (Severe obesity)

int main()
{
  // 여기에 코드를 작성하세요
  char bmi_string[5][20] = { "Underweight","Normal weight","Overweight","Mild obesity","Severe obesity" };
  int height = 0, weight = 0;
  scanf("%d %d", &height, &weight);
  int idx = bmiLevel(height, weight);
  printf("%s (%d)", bmi_string[idx], idx);

  return 0;
}

int bmiLevel(int height, int weight) {
  float height_m = (double)height / 100;
  float bmi = (double)weight / (height_m * height_m);

  if (bmi < 18.5)
    return 0;
  else if (18.5 <= bmi && bmi < 23)
    return 1;
  else if (23 <= bmi && bmi < 25)
    return 2;
  else if (25 <= bmi && bmi < 30)
    return 3;
  else
    return 4;
}