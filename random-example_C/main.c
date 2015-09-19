#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void){

    int i=0;
    int iRandNum=0;

    // Example proving that rand does generate same number over time if not seeded
    // Also proving that when seeding with time, rand number don't chage over a short period of time
    
    printf("-- Random example --\n");

    for(i=0; i<5; i++) {

	//srand(time(NULL)); // seed
        iRandNum=rand(); // rand
        printf("%d ", iRandNum);
	//sleep(1);
    }

    return 0;
}

