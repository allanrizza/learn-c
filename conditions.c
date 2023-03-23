#include <stdio.h>
int main() {
	int target = 10;
	if(target == 10) {
		printf("Target is equal to 10");
	}
	
	int foo = 1;
	int bar = 2;

	if(foo < bar) {
		printf("foo is smaller than bar");
	} else if(foo == bar) {
		printf("foo is equal to bar");
	} else {
		printf("foo is greater than bar");
	}

}
