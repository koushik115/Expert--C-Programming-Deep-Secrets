#include <stdio.h>
#include <time.h>

int main(void) {
    time_t currentTime = 0, highestTime = 9223372036854775807;
    /* Get the current time in seconds */
    currentTime = time(NULL);
    printf("Current Unix Epoch: %lld\n", (long long)currentTime);
    /* Get the number of seconds between now and the highest value of time_t*/
    printf("Seconds until Max Time: %.0f\n", difftime(highestTime, currentTime));
}
