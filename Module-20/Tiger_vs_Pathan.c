#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int round;
        scanf("%d", &round);

        char result[round];
        scanf("%s", result);

        int pathaan = 0, tiger = 0;
        for (int i = 0; i < round; i++)
        {
            if (result[i] == 'T')
                tiger++;
            else
                pathaan++;
        }

        if (pathaan > tiger)
            printf("Pathaan\n");
        else if (tiger > pathaan)
            printf("Tiger\n");
        else
            printf("Draw\n");
    }

    return 0;
}