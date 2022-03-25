#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
int dealer[9] = {0,0,0,0,0,0,0,0,0},player[9] = {0,0,0,0,0,0,0,0,0},playTotal=0,dealTotal=0,
	card,anotherCard, One, timesPlay=1,timesDeal=1, choice;	
		
int resetValues(){
	for(int i=0;i<=9;++i){
		dealer[i]=0;
	}
	for(int i=0;i<=9;++i){
		player[i]=0;
	}
	playTotal=0,dealTotal=0,
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
	playTotal = sumArray(playTotal,player);
	printf("Your total is %d\n\n", playTotal);
	
	One:	
	anotherCard=0;
	printf("Do you wish for another card? Then press 1: ");
	scanf("%d", &anotherCard);
	if(anotherCard==1){
		timesPlay++;
		player[timesPlay] = cartAleat(card);
		playTotal = sumArray(playTotal,player);
		printf("You drew a %d\n", player[timesPlay]);
		printf("Your total is %d\n\n", playTotal);
	if(playTotal==21 ^ playTotal>21){return playTotal;}
	goto One;
	} 
}

int pc(){
	printf("The dealer has a %d and a %d\n", dealer[0],dealer[1]);
	printf("The dealer's total is %d\n", dealTotal);
		while(dealTotal<17){
		timesDeal++;
		dealer[timesDeal] = cartAleat(card);
		dealTotal = sumArray(dealTotal,dealer);
		printf("The dealer drew a %d\n", dealer[timesDeal]);
		printf("The dealer's total is %d\n", dealTotal);
		}
	if(dealTotal==21^dealTotal>21){return;}

}

int end(){
	if(playTotal > dealTotal && playTotal <= 21){printf("Your a wiener!\n\n");}
	else if(playTotal > dealTotal && playTotal > 21){printf("You Busted!\n\n");}
	else if (playTotal < dealTotal && dealTotal<=21){printf("The house always wins!\n\n");}
	else if(playTotal < dealTotal && dealTotal>21){printf("\nThe house has gone bust!\n\n");}
	else{printf("You tied!\n\n");}
}

int main(){
	srand(time(NULL));
	
	start:
	system("cls");	
	printf("Welcome to Mr. House's terminal Blackjack!\n");
	dealer[0] = cartAleat(card);dealer[1] = cartAleat(card);
	printf("Dealer has a %d\n", dealer[0]);
	dealTotal = sumArray(dealTotal,dealer);

	
	playTotal=pl();
	if(playTotal<21){pc();}
	end();
	
	printf("Would you like to play again? If yes then press 1: ");
	scanf("%d", &choice);
	if(choice==1){
	resetValues();
	goto start;}
	
	printf("That's all folks!\n");
	
}
