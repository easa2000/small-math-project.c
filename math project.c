#include<stdio.h>
void main(){
	int choice,a,b,c;
	int check = 1;
	while(check){
		printf("\n\n\n-------------MENU--------------");
	printf("\n <1> Read three numbers");
	printf("\n <2> Calculate total");
	printf("\n <3> Calculate average");
	printf("\n <4> Display the smallest");
	printf("\n <5> Display the larest");
	printf("\n <6> Exit\n\n");
	
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\n Enter three numbers: ...\n");
			scanf("%d %d %d",&a,&b,&c);
			break;
		case 2:
			printf("Total : %d\n\n",a+b+c);
			break;
		case 3:
			printf("Average : %f\n\n",((float)a+b+c)/3);
			break;
		case 4:
			printf("Smallest: ");
			int max = 33564;
			if(a < max){
				max = a;
			}
			if(b < max){
				max = b;
			}
			if(c < max){
				max = c;
			}
			printf("%d\n\n",max);
			break;
		case 5:
			printf("Largest: ");
			max = -33564;
			if(a > max){
				max = a;
			}
			if(b > max){
				max = b;
			}
			if(c > max){
				max = c;
			}
			printf("%d\n\n",max);
			break;
			check = 0;
		case 6:
			exit(0);
			
	}
	}
	
}
