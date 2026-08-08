#include <stdio.h>

int main() {
    int a , b ;

	printf("Enter values of a and b: ");
	scanf("%d %d", &a, &b);
	
    printf("a && b : %d\n", a && b); // banne non zero value hoi to true 
    printf("a || b : %d\n", a || b); // 2 mathi 1 non zero hoi to true
    printf("!a: %d\n", !a); // non zero hoi to true thay but "!" means aenu reverse atle false thay

    return 0;
}
