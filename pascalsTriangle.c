#include <stdio.h>
#include <stdlib.h>
int main(void) {

    int matrix[5][5] = {0};
    matrix[0][0] = 1;
    matrix [1][1] = 1 ; matrix [1][2] = 1 ;
    int count = (sizeof(matrix) / sizeof(int));
    for (int i = 0; i < count; i++) 
    {
        for (int j = 0; j < count; j++)
        {
            printf("%d ", matrix [i][j]);
        }
        printf("\n");
    }

}
