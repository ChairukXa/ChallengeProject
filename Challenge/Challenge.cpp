#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
// Recommend to Compile & Run With Dev C++
int main()
{
	int a, b, Save, x, y, w, Sum1, Sum2, count;
	float Avg, SD;
	printf("Put Number:");
	scanf_s("%d", &a);
	Save = a;
	printf("Put Number:");
	scanf_s("%d", &b);
	if (a < b)
	{
		for (count = 0; a <= b; a++)
		{
			printf("%d \t", a);
			count++;
			Sum1 += a;
		}
		//		printf("\nThe last A is %d ",--a);
		--a;
		//		printf("\nSum is %d",sum);
		printf("\ncount is %d", count);
		Avg = Sum1 / count;
		printf("\nAverage is %.2f\n", Avg);
		for (; Save <= a; a--)
		{
			//        	printf("\n%d \t",a);
	        y = pow((a - Avg), 2);
			//        	printf("%d \t",y);
			Sum2 += y;
		}
		//		printf("\nThe last A is %d ",++a);
		++a;
		//		printf("\nSum is %d",--sum2);
		--Sum2;
		w = Sum2 / (count);
		SD = sqrt(w);
		printf("\nStandard Deviation is %.2f", SD);
	}
	else if (a > b)
	{
		for (count = 0; a >= b; a--)
		{
			printf("%d \t", a);
			count++;
			Sum1 += a;
		}
		//		printf("\nThe last A is %d ",++a);
		++a;
		//		printf("\nSum is %d",sum);
		printf("\ncount is %d", count);
		Avg = Sum1 / count;
		printf("\nAverage is %.2f\n", Avg);
		for (; Save >= a; a++)
		{
			//       	printf("\n%d \t",a);
			y = pow((a - Avg), 2);
			//        	printf("%d \t",y);
			Sum1 += y;
		}
		//		printf("\nThe last A is %d ",a);
		//		printf("\nSum is %d",--sum2);
		--Sum2;
		w = Sum2 / (count);
		SD = sqrt(w);
		printf("\nStandard Deviation is %.2f", SD);
	}
	return 0;
}
