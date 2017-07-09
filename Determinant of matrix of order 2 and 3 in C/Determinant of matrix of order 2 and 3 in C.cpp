#include <stdio.h>
#include <conio.h>

int det_n_2(int a, int b, int c, int d)
{ 
	return a*d - b*c;
}

int main()
{
	// Geting command to select function.
	Restart:
	
	int n, k;
	char a;
	printf("\t\t\t\t\t--------Determinant of Matrix--------\n\n");

	printf("Do you want to run program (Y/N).  ");
	a = _getche();

	printf("\n\n1. Matrix of order 2.  \n2. Matrix of order 3.  \n3. Exit.  \n");	


	if (a == 'Y' || a == 'y')
	{
		goto mystop;
	}
	else if(a == 'N' || a == 'n')
	{
		goto exit;
	}
	else
	{
		goto badin;
	}

	mystop:

	printf("\n\nEnter selection. ");
	scanf_s("%d", &n);
	
	
	

	// Coding function and relating it to selection.

	if (n == 1)
	{
		int a, b, c, d;
		printf("\n\nEnter the four elements of a 2/2 matrix.  ");
		scanf_s("%d %d %d %d", &a, &b, &c, &d);
		printf("\n\nDeterminant = %d\n\n", det_n_2(a, b, c, d));
		goto Restart;
	}
	else if (n == 2)
	{
		int A[3][3];
		int row, col, a, b, c, d, e, f, g, h, i;
		long det;

		printf("\n\nEnter the elments of 3/3 matrix.   ");

		for (row = 0; row < 3; row++)
		{
			for (col = 0; col < 3; col++)
			{
				scanf_s("%d", &A[row][col]);
			}
		}

		a = A[0][0];
		b = A[0][1];
		c = A[0][2];
		d = A[1][0];
		e = A[1][1];
		f = A[1][2];
		g = A[2][0];
		h = A[2][1];
		i = A[2][2];

		det = a*(e*i - f*h) + b*(g*f - d*i) + c*(d*h - e*g);

		printf("\n\nDeterminant = %ld\n\n", det);
		goto Restart;
				
	}
	else if (n == 3)
	{
		exit:
		printf("\n\nClosing Programme....\n\n");
	}
	else
	{
		badin:
		printf("\n\nBad Input...-;)\nRestarting...-;)\n");
		printf("\nEnter Captcha 10324 : ");
		scanf_s("%d", &k);
		
		if (k == 10324)
		{
			goto Restart;
		}
	}
}