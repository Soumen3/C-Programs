#include <stdio.h>

// Structure to represent distance in feet and inches
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance dist1, struct Distance dist2) {
    struct Distance result;

    result.feet = dist1.feet + dist2.feet;
    result.inches = dist1.inches + dist2.inches;

    if (result.inches >= 12) {
        result.inches -= 12;
        result.feet++;
    }

    return result;
}

int main() {
    struct Distance distance1, distance2, sum;

    printf("Enter distance 1 in feet and inches: ");
    scanf("%d %d", &distance1.feet, &distance1.inches);

    printf("Enter distance 2 in feet and inches: ");
    scanf("%d %d", &distance2.feet, &distance2.inches);

    sum = addDistances(distance1, distance2);

    printf("Total distance: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}
