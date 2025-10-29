#include<stdio.h>
int main(){
    int temp[4][4] = {
        {12, 15, 10, 9},
        {11,  8, 12, 13},
        {14, 13,  9, 7},
        {16, 11, 10, 8}
    };

    int rows = 4, cols = 4;

    printf("Cold Spots Found:\n");
    int i,j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {

            int current = temp[i][j];
            int isColdSpot = 1;

            if(i > 0 && temp[i-1][j] <= current)
                isColdSpot = 0;
            if(i < rows-1 && temp[i+1][j] <= current)
                isColdSpot = 0;
            if(j > 0 && temp[i][j-1] <= current)
                isColdSpot = 0;
            if(j < cols-1 && temp[i][j+1] <= current)
                isColdSpot = 0;

            if(isColdSpot)
                printf("Cold Spot at (Row %d, Column %d) = %d %cC\n", i+1, j+1, current, 248);

        }
    }

    return 0;
}

