#include <stdio.h>

int main() {
    int cars;
    int computers;
    int music;
    printf("on a scale of 1 to 10, what is the user's level of interent in cars?: ");
    scanf("%d", &cars);
    printf("on a scale of 1 to 10, what is the user's level of interent in computers?: ");
    scanf("%d", &computers);
    printf("on a scale of 1 to 10, what is the user's level of interent in music?: ");
    scanf("%d", &music);
    printf("node one is %d, node two is %d, and node three is %d\n", cars, computers, music);
    if(cars > computers) {
        if(cars > music) {
            printf("you should show the user cars\n");
        } else {
            printf("you should show the user music\n");
        }
    } else if (music > cars) {
        printf("you should show the user music\n");
    } else {
        printf("you should shoe the user computers\n");
    }
    return 0;
}