#include<stdio.h>
#include<conio.h>
void main()
{
	//clrscr();
	int arr[3][4][2] = {
			      {
				 {2, 4},
				 {7, 8},
				 {3, 4},
				 {5, 6}
			      },
			      {
				 {7, 6},
				 {3, 4},
				 {5, 3},
				 {2, 3}
			      },
			      {
				 {8, 9},
				 {7, 2},
				 {3, 4},
				 {5, 1}
			      }
			   };
	printf("arr[0][1][3] = %d\n",arr[2][0][1]);
	printf("arr[0][2][1] = %d\n",arr[1][0][0]);
	printf("arr[2][3][1] = %d\n",arr[2][3][1]);
	getch();
}
