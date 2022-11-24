int x;
int function1();
int function2();
int function3();
void main() 
{
  printf("RA2211042010049\n");
	x = 10;
	printf("In main() function X = %d\n", x);
	printf("In function1()  = %d\n", function1());
	printf("In function2()  = %d\n", function2());
	printf("In function3()  = %d\n", function3());
}
int function1()
{
	x += 10;
	return x;
}
int function2() 
{
	int x;
	x = 1;
	return x;
}
int function3()
{
	x += 20;
	return x;
}
