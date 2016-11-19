#include<stdio.h>
#include<stdbool.h>

float rem(float w, float tot, float a[], float b[]){

	float off = 0.0;
	int i =0;
		printf("weight value : %.2f\n", w);
	while ( w != a[i]){
	i++;
	}
	printf("index value : %d\n", i);
	off = b[i]*w;
	
	printf("off value : %.2f\n", off);
return off;
}

int main(){

//variable declarations//

bool loop =true;
char select;
float price = 0.0, weight = 0.0, total =0.0;
float a[500] ,b[500];
int i=0;
// 

while(loop == true){

	printf("Make a selection: (a)dd, (r)emove, (t)otal, or (q)uit. ");
		scanf(" %c", &select);
		
	if(select != 'a' && select != 'r' && select != 't' && select != 'q'){
		
		printf("Invalid entry, try again.\n");
	}


// ADD CONDITION
	else if(select == 'a'){
	
		//bool cond = true;
		//while( cond == true){
			printf("Enter a Price/Pound: ");
				scanf(" %f", &price);
				
				
						
				
				//if (price < 0 || price != ){
				
					//printf("Invalid entry.\n");
				//}
				//  else cond = false;
		//}
				
			printf("Enter a Weight: ");
				scanf(" %f", &weight);
		
			total += (weight*price);
			
			a[i] = price;
			b[i] = weight;
		i++;
	}
	
// REMOVE CONDITION
	else if(select == 'r'){
	
		printf("Enter a Weight: ");
			scanf(" %f", &weight);
	
		total = total - rem(weight,total, a,b);
	}

// TOTAL CONDITION
	else if(select == 't'){
	
		printf("The current total is: $%.2f.", total);
			
	}
	
// QUIT CONDITION
	else if(select == 'q'){
	loop = false;
	}

printf("\n");
printf("array 1: %.2f\n", a[i-1]);
printf("array 2: %.2f\n", b[i-1]);
}


return 0;
}



