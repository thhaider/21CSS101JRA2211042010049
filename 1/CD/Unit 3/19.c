
#include < stdio.h >
int a = 20; 
void test();
void main()
{
  printf("RA2211042010049\n");
	printf("In main() function a = %d\n", a); 
	test();
	a = a + 15; 
	printf("In main() function a = %d\n", a); 
}
void test() {
	a = a + 20; 
	printf("In test() function a = %d\n", a);
}
