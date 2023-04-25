#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

int main(void)
{
    system("clear");

    int a = 8;

    for (int pp = 0; pp < 10; pp++)
    {
        system("clear");

        printf("\n\n");
        for (int b = 0; b <= a; b++)
        {
            printf(" ");
        }
        printf("##");

        for (int c = 0; c <= a; c++)
        {
            printf(" ");
        }
        printf("\n");

        for (int x = 0; x < a; x++)
        {
            for (int y = 0; y < a - x; y++)
            {
                printf(" ");
            }
            for (int z = 0; z <= x; z++)
            {
                printf("#");
            }
            printf("||");
            for (int z = 0; z <= x; z++)
            {
                printf("#");
            }
            for (int y = 0; y < a - x; y++)
            {
                printf(" ");
            }
            printf("\n");
        }

        for (int j = 0; j <= a; j++)
        {
            printf("_");
        }
        printf("||_田");
        for (int k = 0; k <= a - 3; k++)
        {
            printf("_");
        }
        printf("stage: %d", pp);

        fflush(stdout);
        sleep(1); 
    
    }
}
