#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stddef.h>
int main()
{
        struct timespec curTime = {0, 0};
        clock_gettime(CLOCK_MONOTONIC, &curTime);
        uint64_t duration = (uint64_t)(curTime.tv_sec) * 1000000000 + (uint64_t)(curTime.tv_nsec);
        printf("duration: %lu, curTime.tv_sec = %ld, curTime.tv_nsec = %ld\n", duration, curTime.tv_sec, curTime.tv_nsec);

        return 0;
}