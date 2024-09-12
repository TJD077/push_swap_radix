# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h> 

void sumar(int **number)
{
    *number++;
}

int main()
{
    static int *number;
    
    *number = 5;
    sleep(1);
    sumar(&number);
    //printf("%d\n", number);
    if (*number < 10)
        main();
    return (0);
}

