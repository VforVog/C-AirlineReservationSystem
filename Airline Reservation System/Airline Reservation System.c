#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "simpio.h"
#include "genlib.h"
#include <stdlib.h>


int main()
{
    char theseis[100][20];
    int i,j;

    i=0;
    printf("Passenger in seat %d :",i+1);
    gets(theseis[i]);

    while(theseis[i][3]!='-')
    {
        i++;
        printf("Passenger in seat %d :",i+1);
        gets(theseis[i]);
        for(j=0;j<i;j++)
        {
            if(strcmp(theseis[i],theseis[j])==0)
            {
                printf("Passenger %s already exists\n",theseis[i]);
                i--;
            }
        }
    }

    printf("\nPassenger List\n----------");
    for(j=0;j<i;j++)
    {
        printf("\nIn seat %d : %s",j+1,theseis[j]);
    }

    return 0;
}
