#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

typedef unsigned long ulong;

int main(int argc, char *argv[])
{
	/* get timer units */
	struct timeval t1, t2;
	gettimeofday(&t1, NULL);

  
    ulong n = atoi(argv[1]);
    ulong a = 1;
    ulong b = 0;
    ulong t;

    for(ulong i = 0; i < n; i++) {
        t = b;
        b = a+b;
        a = t;
    }


	/* get timer value */
	gettimeofday(&t2, NULL);
	long m1, m2, elapsed;
	m1 = (t1.tv_sec * 1000) + (t1.tv_usec / 1000);
	m2 = (t2.tv_sec * 1000) + (t2.tv_usec / 1000);
	elapsed = m2 - m1;

    printf("%lu - %ld millis\n", b, elapsed);
    return 0;
}
