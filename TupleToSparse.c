//LAB 1 20.01.2020 Tuple to Sparse Matrix

int row, col, arr[10][10]={0};

void create(int row_t, int col, int table[10][10])
{
    printf("\nEnter elements:\n");
    for (int i=0; i<row_t; i++)
    {
        for(int j=0; j<col; j++)
            scanf("%d", &table[i][j]);
    }
}

void display(int row_t, int col, int table[10][10])
{
    printf("\nMATRIX\n");
    for (int i=0; i<row_t; i++)
    {
        for(int j=0; j<col; j++)
            printf("%d ", table[i][j]);
        printf("\n");
    }
}


void matrix(int row_t, int col_t, int table[10][10])
{
    row=table[0][0];
    col=table[0][1];

    for (int i=1; i<row_t; i++)
        arr[table[i][0]-1][table[i][1]-1]=table[i][2];

      printf("\nSparse form\n");
      display(row, col, arr);
}
int main()
{
    int row_t, col_t=3, table[10][10];
    printf("Enter no. of rows of the table: ");
    scanf("%d", &row_t);

    create (row_t, col_t, table);
    display (row_t, col_t, table);
    matrix (row_t, col_t, table);
    getch();
    return 0;

}
