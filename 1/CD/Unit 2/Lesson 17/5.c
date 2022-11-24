
int main() 
{
  printf("RA2211042010049\n");
	int *p;
	p = (int *) malloc (sizeof (int));
	if (p == NULL) { /* failed to reserve memory */
		printf ("Failed to allocate space for %d bytes", sizeof (int));
		return 1;
	}
	*P = 15;
	printf ("%d\n", *p);
	free(p); /* memory is released */
	return 0;
}
