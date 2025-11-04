#include <stdio.h>

int main()
{
    int num, pos, max, count;

    while (1)
    {
        // اللوب هذي تبقا تمشي حتى المستخدم يكتب 0
        printf("Enter a number 0 to stop:  ");
        scanf("%d", &num);

        if (num == 0)
            break;

        count++;

        if (count == 1)
        {
            // نعينو الرقم الأول بلي هو  الماكس ونعطيلو البوزيسيون لولة
            max = num;
            pos = 1;
        }
        else if (num > max)
        {
            // بعدها نبداو نقارنو مع أي رقم يدخل إذا كان الرقم المدخل أكبر من الماكس لي اه مخزن راح يرومبلاصيه  ونحفظو معاه البوزيسيون تاعو من العداد
            max = num;
            pos = count;
        }
    }

    if (count == 0)
        printf("no numbers were entered.\n");
    else
    {
        printf("\n the largest number is %d \n", max);
        printf("and it position is : %d ", pos);
    }
    return 0;
}
