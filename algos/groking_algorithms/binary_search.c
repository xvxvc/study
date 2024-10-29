#include <stdio.h>
#define MASS 10

int binary_search(int* massive, int item, int* counter);

int main() {
       
    int massive[MASS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int counter = 0;
    int item, num;

    for (int i = 0; i < MASS; i++) {printf("%d ", massive[i]);}
    printf("\nEnter number for search: ");
    scanf("%d", &item);
    num = binary_search(massive, item, &counter);
    printf("Position of number: %d; iteration is: %d\n", num, counter);

    return 0;
}

int binary_search(int* massive, int item, int* counter) {
    int low = 0;
    int top = MASS - 1;
    while (low <= top) {
	*counter = *counter + 1;
        int mid = (low + top) / 2;
        int guess = massive[mid];
	printf("Iter: %d, low: %d, top: %d, mid: %d, massive[%d]: %d\n", *counter, low, top, mid, mid, massive[mid]);
	if (guess == item) { return mid; }
	if (guess > item) { top = mid - 1; }
	if (guess < item) { low = mid + 1; }
    }
    
    return -2;
}
