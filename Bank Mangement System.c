#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void){
	int getIn, balance=0, deposit, check,i,withdraw,checktemp,loan,atm;
	float netRe, inst;
	char name[100]="N/A",lastName[100]="N/A", cnic[100]="N/A", phoneNum[100]="N/A", address[200]="N/A";
	int password=0, defpass=254922;
	
	printf("ENTER NAME: ");
	scanf("%s",&name);
	printf("ENTER PASSWORD: ");
	scanf("%d",&password);
	if (password==defpass){
		goto restart;
	}
	else{
		printf("INVALID USER");
		goto end;
	}
restart:
	system("CLS");
	printf("\t\t\tBANK MANAGEMENT SYSTEM\n");
	printf("----------------------------------------------------------------------------\n");
	//main_menu:
	printf("\nHello %s\n",name);
	printf("\nYour Balance: %d\n\n",balance);
	printf("1- Deposit\n2- Withdraw\n3- Account Holder Details\n4- Loan\n5- Claim ATM Card\n\n");
	printf("\t\t\t\t\t\t\tDeveloped By:\n\t\t\t\t\t\t\t`Mazhar\n\t\t\t\t\t\t\t`Sahil");
	printf("\nEnter service: ");
	scanf("%d",&getIn);

//deposit:
if(getIn==1){
	for(i=0;check=1;i++){
		system("CLS");
	printf("Your Balance = %d",balance);
	printf("\nEnter ammount you want to Deposit: ");
	scanf("%d",&deposit);
	balance+=deposit;
	printf("Your Balance: %d\n\n",balance);
	printf("Enter 1: To Deposit again       Enter 0: Redirect to main menu\n");
	scanf("%d",&check);
	if(check!=1){
		system("CLS");
		goto restart;
	}
}
}
//withdraw:
else if(getIn==2){
	if(balance>0){
	for(i=0;checktemp=1;i++){
		system("CLS");
	printf("Your Balance = %d",balance);
	printf("\nEnter ammount you want to Withdraw: ");
	scanf("%d",&withdraw);
	if(withdraw>balance){
		system("CLS");
		goto message;
	}
	balance-=withdraw;
	printf("Your remaining Balance = %d\n",balance);
	printf("Enter 1: To Withdraw again         Enter 0: Redirect to main menu\n");
	scanf("%d",&check);
	checktemp=check;
	if (checktemp==0){
		system("CLS");
	goto restart;
	}
}
}
else{
	message:
	printf("Sorry! your account balance is %d \n Enter 0 to go to main menu",balance);
	scanf("%d",&check);
	if (check!=1);{
	goto restart;
}
}
}
//Account_detail:
else if (getIn==3){
	infoRe:
		system("CLS");
	printf("Name: %s\n",name);
	printf("Last Name: %s\n",lastName);
	printf("CNIC: %s\n",cnic);
	printf("Phone Number: %s\n",phoneNum);
	printf("Address: %s\n\n",address);
	printf("Enter 1: To change INFO     Enter 0: Redirect to main menu\n");
	scanf("%d",&check);
	if(check==1){
		change:
		system("CLS");
	printf("Don't use Spaces instead use _ for space.\n");
	printf("Enter Name: ");
	scanf("%s",name);
	printf("Enter Last Name: ");
	scanf("%s",&lastName);
	printf("Enter CNIC: ");
	scanf("%s",&cnic);
	printf("Enter Phone Number: ");
	scanf("%s",&phoneNum);
	printf("Enter Address: ");
	scanf("%s",&address);
	printf("Enter 1: To Check Account Holder Info       Enter 0: Redirect to main menu\n");
	check=0;
	scanf("%d",&check);
	if(check==1){
		system("CLS");
		goto infoRe;
	}
	system("CLS");
	goto restart;
}
	system("CLS");
	goto restart;
}
//loan:
if(getIn==4){
	loanRe:
		system("CLS");
	printf("Ammount you want: ");
	scanf("%d",&loan);
	printf("Duration will be 5 years and interest will be 15'%'\n\n");
	netRe=loan*0.15;
	netRe+=loan;
	inst=netRe/60;
	printf("Installment per month: %f\n\n",inst);
	printf("Enter 1: To Recheck      Enter 0: Redirect to main menu\n");
	scanf("%d",&check);
	if(check==1){
		system("CLS");
		goto loanRe;
	}
	system("CLS");
	goto restart;
}
//atm
if(getIn==5){
	system("CLS");
	printf("Enter 1 to Claim ATM Card\nCharges 500\nEnter 0 to return in Main Menu\n");
	scanf("%d",&atm);
	if(atm==1){
		if (balance==0){
			printf("Have not enough Balance in your account.\n");
			printf("Enter 1 to Return ");
			scanf("%d",&check);
			goto restart;
		}
		balance-500;
		printf("Your Address: %s\n",address);
		printf("Enter 1 For Continue and redirect to Main Menu\nEnter 0 For Changing Address\n");
		scanf("%d",&check);
		if(check==1){
			balance-500;
			goto restart;
		}
		else{
			goto change;
		}
	if(atm==0){
		goto restart;
	}

	}
}
end:
getch();
}
