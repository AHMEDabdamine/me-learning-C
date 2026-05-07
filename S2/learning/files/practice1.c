#include <stdio.h>

int main()
{
    FILE *fdata = fopen("/home/a7med-s_pc/Desktop/me-learning-C/S2/learning/files/practice.txt", "w");
    char txt[] = "hello world ";
    int a = 5, b = 6, c = 10, sum = 0;
    sum = a + b + c;
    if (fdata == NULL)
    {
        printf("couldnt open file");
        return 1;
    }
    fprintf(fdata, "this is the sum :\n");
    fprintf(fdata, "%d", sum);
    printf("file was written successfully");

    fclose(fdata);
    return 0;
}