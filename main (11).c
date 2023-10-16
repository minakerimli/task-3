#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of test scores: ");
    scanf("%d", &n);

    int scores[n];
    int sum = 0;

    printf("Enter %d test scores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    if (n > 0) {
        double average = (double)sum / n;
        printf("Average score: %.2lf\n", average);
    } else {
        printf("No scores to calculate the average.\n");
    }

    return 0;
}