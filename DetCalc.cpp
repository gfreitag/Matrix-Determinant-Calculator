#include <iostream>

using namespace std;
int SIZE = 1;


float determinant(float matrix[SIZE][SIZE], int size);
int nonZeroValues(int rowNum, float matrix[SIZE][SIZE]);
void rowOperation(float matrix[SIZE][SIZE]);
bool isREF(float matrix[SIZE][SIZE], int size);
void swapRow(float matrix[SIZE][SIZE]);
void devideRow(float matrix[SIZE][SIZE]);
void addMultiple(float matrix[SIZE][SIZE]);

float matrix[SIZE][SIZE];

int main()
{
   //  for(int i = 0; i<SIZE; i++)
//     {
//         for(int j=0; j<SIZE; j++)
//         {
//             cout<<"hi"<<endl;
//         }
//     }
    cout<<determinant(matrix, SIZE);

}

void rowOperation(float matrix[SIZE][SIZE])
{
    //perform all possible row operations.
    while(isREF(matrix[SIZE][SIZE], SIZE)==false)
    {
        swapRow(*matrix);
        devideRow(*matrix);
        addMultiple(*matrix);
    }
}

bool isREF(float matrix[SIZE][SIZE], int size)
{
    //if in Row Echelon Form, return true
    int unqual=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(matrix[i][i]==1)
            {
                continue;
            }
            for(int t=0; t<i; t++)
            {
                if(matrix[i][t]==0)
                {
                    continue;
                }
                else
                {
                    unqual = 1;
                    break;
                }
            }
            if(unqual!=0)
            {
                return false;
            }
        }
    }
    return true;
}

void swapRow(float matrix[SIZE][SIZE])
{
    cout<<"tba"<<endl;
    //include negative multiple of det
}

void devideRow(float matrix[SIZE][SIZE])
{
    cout<<"tba"<<endl;
    //include multiple of det
}

void addMultiple(float matrix[SIZE][SIZE])
{
    cout<<"tba"<<endl;
}

int nonZeroValues(int rowNum, float matrix[SIZE][SIZE])
{
    //counting all non-zero entities in given row of matrix
    int num = 0;
    for(int i =0; i<rowNum; i++)
    {
        if(matrix[rowNum][i] != 0)
        {
           num++; 
        }
    }
    return num;

}

float determinant(float matrix[SIZE][SIZE], int size)
{
    //return determinant
    //recursion goes here
    switch(size)
    { 
        case 3:
            return matrix[size-2][size-2]*(matrix[size][size]*matrix[size-1][size-1]-matrix[size][size-1]*matrix[size-1][size]);
            break;
                
        case 2:
            return matrix[size-1][size-1]*matrix[size-2][size-2]-matrix[size-2][size-1]*matrix[size-1][size-2];
            break;
            
        case 1:
            return matrix[size-1][size-1];
            break;
        
        default:
            float x;
            x=0;
            for (int i = 0; i<size; i++)
            {
                return matrix[i][1]*determinant(matrix[SIZE][SIZE], size-1);
            }
            break;
    }
    
}