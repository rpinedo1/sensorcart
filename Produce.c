#include<stdio.h>
#include<stdbool.h>



int main(){

//variable declarations//

bool loop =true;
char select;
float price = 0.0, weight = 0.0, total =0.0;


// 

while(loop == true){
	printf("Make a selection: (a)dd, (r)emove, (t)otal, or (q)uit. ");
		scanf(" %c", &select);

// ADD CONDITION
	if(select == 'a'){
		printf("Enter a Price/Pound: ");
			scanf(" %f", &price);
		printf("Enter a Weight: ");
			scanf(" %f", &weight);
	
	
	}
	
// REMOVE CONDITION
	else if(select == 'r'){
	
		printf("Enter a Weight: ");
			scanf(" %f", &weight);
	
	}

// TOTAL CONDITION
	else if(select == 't'){
		
		
		
		//total = total();
		
		
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
