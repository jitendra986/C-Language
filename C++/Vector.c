#include <stdio.h>
#include <math.h>


int dotproduct(int *ptr1, int *ptr2);
float EcNo(int *ptr1);

int main()
{
    int vec1[3];
    int vec2[3];
    int *ptr1 = &vec1[0];
    int *ptr2 = &vec2[0];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value %d of the vec1 \n", i + 1);
        scanf("%d", &vec1[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Entered value %d of the vec1 is %d\n ", i + 1, vec1[i]);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("\nEnter the value %d of the vec2 \n", j + 1);
        scanf("%d", &vec2[j]);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("Entered value %d of the vec2 is %d\n ", j + 1, vec2[j]);
    }

    int dtpr = dotproduct(&vec1[0], &vec2[0]);

    float EcNo = EcNo(&vec1[0]);

    printf("dot product of the vec1 & vec2 is %d\n ", dtpr);
    printf("Euclidean norm of vec1 is %f\n ", EcNo);

    return 0;
}

int dotproduct(int *ptr1, int *ptr2)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {

        sum = sum + (*ptr1) * (*ptr2);
        ptr1++;
        ptr2++;
    }
    return sum;
}

float EcNo (int *ptr1);
{
    float sum = 0;
    float EcNo = 0;
    for (int i = 0; i < 3; i++)
    {

        sum = sum + (*ptr1) * (*ptr1);
        ptr1++;
    }

    EcNo = sqrt(sum);
    return EcNo;
}