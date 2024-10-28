#include <stdio.h>
#include <stdlib.h>

int *a, max, real = -1, front = 0, count = 0;

void enqueue();
void dequeue(); 
void display();

void enqueue() {
    int ele;
    if (count == max) {
        printf("Queue overflow\n");
    } else {
        printf("Enter element to be inserted: ");
        scanf("%d", &ele);
        real = (real + 1) % max;
        a[real] = ele;
        count++; 
    }
}

void dequeue() {
    if (count == 0) {
        printf("Queue is empty\n");
    } else {
        printf("Deleted element is: %d\n", a[front]); 
        front = (front + 1) % max; 
        count--;
    }
}

void display() {
	int i;
    if (count == 0) {
        printf("Queue is empty\n");
    } else {
        int k = front;
        printf("Queue elements are: ");
        for ( i = 0; i < count; i++)
		 { 
            printf("%d ", a[k]);
            k = (k + 1) % max;
        }
        printf("\n"); 
    }
}

int main() {
    int choice;
    printf("\nEnter max elements: ");
    scanf("%d", &max);
    a = (int *)malloc(max * sizeof(int));

    while (1) {
        printf("\nEnter choice (1: Enqueue, 2: Dequeue, 3: Display, 4: Exit): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                free(a); 
                return 0;
            default:
                printf("\nInvalid choice\n");
        }
    }
}

