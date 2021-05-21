#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter matrix size: ");
    int matrix_size;
    scanf("%d", &matrix_size);
    int matrix [matrix_size][matrix_size];
    int count = matrix_size;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("Enter val at index matrix[%d][%d] : ", i, j); 
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d ", matrix[i][i]);
        printf("\n");
    }
    
    

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("| %d |", matrix[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}