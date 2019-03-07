#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
	*a = *a + *b;
	if(*a - *b <= *b)
	*b = *b - *a + *b;
	else
	*b = *a - *b - *b;
	
   printf("%d %d\n", *a, *b);
	
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

