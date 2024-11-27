#include <stdio.h>
int main() {
	int unit;
	float amt,total_amt,sur_charge;
	printf("enter total unit of lectricity consumed:");
	scanf("%d",&unit);
	if(unit<=50)
	  amt=unit*0.50;
	else
	  amt=25+((unit-50)*2);
	sur_charge=amt*0.20;
	total_amt=amt+sur_charge;
	printf("electricty bill is %f",total_amt);
	return 0;
	  
}
