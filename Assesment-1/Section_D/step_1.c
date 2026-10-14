
#include <stdio.h>

int main()
{
    int numbers[10];
    int i, j, temp;
    int minimum, maximum;
    int sum = 0;
    float mean;
    float distanceMin, distanceMax;

    // Input exactly 10 integers
    for (i = 0; i < 10; i++)
    {
        printf("Enter integer %d: ", i + 1);

        if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input!\n");
            return 1;
        }

        sum += numbers[i];
    }

    // Find minimum and maximum
    minimum = numbers[0];
    maximum = numbers[0];

    for (i = 1; i < 10; i++)
    {
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }

        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    mean = sum / 10.0f;

    // Sort in ascending order using bubble sort
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\nMinimum: %d\n", minimum);
    printf("Maximum: %d\n", maximum);
    printf("Mean: %.2f\n", mean);

    printf("Sorted values: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Compare distances from the mean
    distanceMin = mean - minimum;
    distanceMax = maximum - mean;

    if (distanceMin < distanceMax)
    {
        printf("Mean is closer to the minimum.\n");
    }
    else if (distanceMax < distanceMin)
    {
        printf("Mean is closer to the maximum.\n");
    }
    else
    {
        printf("Mean is exactly midway between them.\n");
    }

    return 0;
}
