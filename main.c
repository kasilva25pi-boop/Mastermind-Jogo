#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
    
    
    srand(time(NULL));

    
    for (int i = 0; i < 4; i++) {
        int numeroAleatorio = rand() % 7;
    }

    return 0;
}
