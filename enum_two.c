#include <stdio.h>

// Define an enum for days of the week
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    DAY_COUNT  // total number of days
};

int main() {
	int i;
    // Loop from SUNDAY (0) to SATURDAY (6)
    for ( i = SUNDAY; i < DAY_COUNT; i++) {
        switch (i) {
            case SUNDAY:
                printf("SUNDAY\n");
                break;
            case MONDAY:
                printf("MONDAY\n");
                break;
            case TUESDAY:
                printf("TUESDAY\n");
                break;
            case WEDNESDAY:
                printf("WEDNESDAY\n");
                break;
            case THURSDAY:
                printf("THURSDAY\n");
                break;
            case FRIDAY:
                printf("FRIDAY\n");
                break;
            case SATURDAY:
                printf("SATURDAY\n");
                break;
        }
    }

    return 0;
}

