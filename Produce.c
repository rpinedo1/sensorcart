#include<stdio.h>
#include<stdbool.h>

float rem(float w, float tot, float a[], float b[]){

	float off = 0.0;
	int i =0;

	while ( w != b[i]){
	i++;
	
		if(i > 999){
			w = w-0.1;
			i = 0;
			while( w != b[i]){
				i++;
				
				if(i > 999){
				w = w+0.2;
				i = 0;
				while( w != b[i]){
					i++;
				}
				}
			}
		}
	}
	off = a[i]*w;

return off;
}
int checkP(float p){

float test = 1.0; 

if (((int)p % (int)test) != sizeof(int) )
return 0;


return 1;
}
int ckeckW(float w){


return 1;
}

int main(){

//variable declarations//
float test = 1.00;
bool loop =true;
char select;
float price = 0.0, weight = 0.0, total =0.0;
float a[1000] ,b[1000];
int i=0;
float confirm =0.0;
// 

while(loop == true){

	printf("Make a selection: (a)dd, (r)emove, (t)otal, or (q)uit. ");
		scanf(" %c", &select);
		
	if(select != 'a' && select != 'r' && select != 't' && select != 'q'){
		
		printf("Invalid entry, try again.\n");
	}


// ADD CONDITION
	else if(select == 'a'){

		while(true){
			printf("Enter a Price/Pound: ");
				scanf(" %f", &price);

				if (price < 0 ){
					printf("Invalid entry.\n");
				}
				
				else break;
				
		}
		while(true){	
			printf("Enter a Weight: ");
				scanf(" %f", &weight);
				
				if (weight < 0 ){
					printf("Invalid entry.\n");
				}
				
				else break;
			
		}
		
			total += (weight*price);
			
			a[i] = price;
			b[i] = weight;
		i++;
	}
	
// REMOVE CONDITION
	else if(select == 'r'){
	
				while(true){	
			printf("Enter a Weight: ");
				scanf(" %f", &weight);
				
				if (weight < 0 ){
					printf("Invalid entry.\n");
				}
				
				else break;
			
		}
	
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
}


return 0;
}



