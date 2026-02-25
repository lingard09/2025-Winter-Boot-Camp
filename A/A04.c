#include <stdio.h>

int main()
{
    // 여기에 코드를 작성하세요
    int height[10] = {
        0,
    },
        weight[10] = {
            0,
        }; // 10명의 신장(cm), 체중(kg)
    float bmi[10] = {
        0,
    }; // 10명의 비만도 수치
    int count = 0; // 비만인 사람의 숫자

    int bmi_idx[10] = {
        0,
    };

    for (int i = 0; i < 10; i++)
    {
        scanf("%d %d", &height[i], &weight[i]);
        float height_m = (double)height[i] / 100;
        bmi[i] = (double)weight[i] / (height_m * height_m);
        if (bmi[i] >= 25)
        {
            bmi_idx[i] = i + 1;
            count++;
        }
    }

    int len = sizeof(bmi_idx) / sizeof(int);

    for (int i = 0; i < len; i++)
    {
        if (bmi_idx[i] != 0)
            printf("%d ", bmi_idx[i]);
    }
    printf("\n");

    printf("%d", count);

    return 0;
}