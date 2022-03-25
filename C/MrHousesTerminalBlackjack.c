#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
int dealer[9] = {0,0,0,0,0,0,0,0,0},player[9] = {0,0,0,0,0,0,0,0,0},pt=0,dt=0,
	card,anotherCard, One, timesPlay=1,timesDeal=1, choice;	
		
int resetValues(){
	for(int i=0;i<=9;++i){
		dealer[i]=0;
	}
	for(int i=0;i<=9;++i){
		player[i]=0;
	}
	pt=0,dt=0,
	card,anotherCard, One, timesPlay=1,timesDeal=1;
}		
		
int cartAleat(int x){
	x = rand()%9;x++;
	return x;
}

int sumArray(int x,int y[]){
	x = 0;
	for(int i = 0; i<9;++i){
		x = x+y[i];
	};
	return x;
}

int pl(){
	player[0] = cartAleat(card);player[1] = cartAleat(card);
	printf("You've got a %d and a %d\n",player[0],player[1]);
	pt = sumArray(pt,player);
	printf("Your total is %d\n\n", pt);
	
	One:	
	anotherCard=0;
	printf("Do you wish for another card? Then press 1: ");
	scanf("%d", &anotherCard);
	if(anotherCard==1){
		timesPlay++;
		player[timesPlay] = cartAleat(card);
		pt = sumArray(pt,player);
		printf("You drew a %d\n", player[timesPlay]);
		printf("Your total is %d\n\n", pt);
	if(pt==21 ^ pt>21){return pt;}
	goto One;
	} 
}

int pc(){
	printf("The dealer has a %d and a %d\n", dealer[0],dealer[1]);
	printf("The dealer's total is %d\n", dt);
		while(dt<=17){
		timesDeal++;
		dealer[timesDeal] = cartAleat(card);
		dt = sumArray(dt,dealer);
		printf("The dealer drew a %d\n", dealer[timesDeal]);
		printf("The dealer's total is %d\n", dt);
		} return dt;}

int end(int x, int y){
	if(x == y){printf("You tied!\n\n");}
	else if(x>y){
		if(x<=21){printf("You Win!\n\n");}
		else{printf("You Busted!\n\n");}}
	else{
		if(y>21){printf("\nThe House Has Gone Bust!\n\n");}
		else{printf("\nThe House Always Wins!\n\n");}}
}


int main(){
	srand(time(NULL));
	
	start:
	system("cls");	
	printf("Welcome to Mr. House's terminal Blackjack!\n");
	dealer[0] = cartAleat(card);dealer[1] = cartAleat(card);
	printf("Dealer has a %d\n", dealer[0]);
	dt = sumArray(dt,dealer);

	
	pt=pl();
	if(pt<21){
	dt=pc();}

	end(pt,dt);
	
	printf("Would you like to play again? If yes then press 1: ");
	scanf("%d", &choice);
	if(choice==1){
	resetValues();
	goto start;}
	
	printf("That's all folks!\n");
	
}
