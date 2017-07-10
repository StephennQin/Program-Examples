#include <stdio.h>
#include <stdlib.h>

int main(    )
{
    int *array,b ;
    int i ;
    array = (int *)malloc( sizeof(int) );
    //    array = (int *)malloc( sizeof(int)*100 );

    
    for( i=0; i<=100; i++  )
        array[i] = i ;

    for( i=0; i<=100; i++ )
        printf("%d\n",array[i]);

}