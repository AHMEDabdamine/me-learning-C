#include <stdio.h>

int main()
{
    int num, pos, max;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        //  نحطو  بلي الرقم الاول هو الماكس وبوزيسيون تاعه 1
        if (i == 1)
        {
            max = num;
            pos = 1;
        }
        // بعدها قارن بين القيم المدخلة والماكس وفيحاة ما إذا كان النيميرو كبير على الماكس لي راه محفوظ يدي بلاصتو
        else if (num > max)
        {
            max = num;
            pos = i;
        }
    }

    printf("\nThe largest number is %d\n", max);
    printf("It was entered at position %d\n", pos);

    return 0;
}
