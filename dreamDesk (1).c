#include <stdio.h>
int ticketing(int n);
int hotelStay(int price, int n);
int hotelRoom(int people,int price,int m);
int packagePricing(int month, int price,int acc);
int cabService(int p);
int gstService(int price);
int main(int argc, char const *argv[])
{
	int n;
	printf("\n---------------------Dream Destination------------------------\n");
        printf("\n**************************************************************\n");
	printf("----------------------------------------------------------------\n");
	printf("----------------------------------------------------------------\n");
	printf("----------------------------------------------------------------\n");
	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	printf("Enter no. of people: ");
	scanf("%d", &n);
	
	int age[100],count = 0, min = 0;
	char name[100][100];
	char gender[100];

	for (int i = 1; i <= n; ++i)
	{
		printf("Enter name of person %d: ", i);
		scanf("%s", &name[i]);

		printf("Enter age of person %d: ", i);
		scanf("%d", &age[i]);

		printf("Enter gender of person %d (M/F): ", i);
		getchar();
		scanf("%c", &gender[i]);
	}

	for (int i = 1; i <= n; ++i)
	{
		if(age[i] > 18) {
		printf("Person %d:\nName: %s\nAge: %d\nGender: %c\n---\n", i, name[i], age[i], gender[i]);
		count++;
	}
		else {
		printf("Person %d:\nName: %s\nAge: %d\nGender: %c\n---\n", i, name[i], age[i], gender[i]);
		min++;
	}

}
printf("Adults %d\n",count);
printf("Child %d\n", min);

		ticketing(n);
		// hotelRoom(n);

	return 0;
}
int ticketing(int n) {
	char T, y, I , des, des2, des3, des4;
	int   price;
    printf("\nTicketing\nPress 'D' for domestic \n'I' for international ");
    getchar();
    scanf("%c",&T);
    switch(T)
    {
        case 'D' :
       { 
       	printf("\nDomestic\nPress 'L' for <500and\n'G' for >=500\n");
       	getchar();
        scanf("%c",&y);
        switch(y)
        {
            case 'L':printf("\n<500\n");
               	printf("\n--------Enter the Destination-------\n");
   				printf("\n Select 'D' for Delhi");
   				printf("\n Select 'A' for Amritsar");
   				printf("\n Select 'L' for Ludhiana\n");
   				getchar();
   				scanf("%c",&des);
   				switch(des) {
   					case 'D':
   					price = 500;
   					break;
   					case 'A' :
   					price = 600;
   					break;
   					case 'L' :
   					price = 300;
   					break;
   					default :
   					printf("\nInvaild Input .....!\n");
   				}
            break;
            case 'G':printf("\n>=500\n");
  
            	printf("\n--------Enter the Destination-------\n");
   				printf("\n Select 'J' for Jaipur");
   				printf("\n Select 'B' for Bangalore");
   				printf("\n Select 'M' for Mumbai\n");
   				getchar();
   				scanf("%c",&des2);
   				switch(des2) {
   					case 'J':
   					price = 1500;
   					break;
   					case 'B' :
   					price = 3600;
   					break;
   					case 'M' :
   					price = 2300;
   					break;
   					default :
   					printf("\nInvaild Input .....!\n");
   				}
            break;
            default:
            printf("\nInvaild Statement.....!");
            break;
        }
       }
        break;
        case 'I':
        {
        printf("\nInternationl\nPress 'N' for Natinal\n'I' for International\n");
        getchar();
        scanf("%c",&I);
            switch(I)
            {
                case 'N':printf("\nNational carrier");
                price = 25000;
                printf("\n--------Enter the Destination-------\n");
   				printf("\n Select 'C' for Canada");
   				printf("\n Select 'A' for Australia");
   				printf("\n Select 'E' for Europe\n");
   				getchar();
   				scanf("%c",&des3);
   				switch(des3) {
   					case 'C':
   					price = 55000;
   					break;
   					case 'A' :
   					price = 66000;
   					break;
   					case 'E' :
   					price = 230000;
   					break;
   					default :
   					printf("\nInvaild Input .....!\n");
   				}
                break;
                case 'I':printf("\nInternaional carrier");
                price = 300000;
                printf("\n--------Enter the Destination-------\n");
   				printf("\n Select 'D' for Dubai");
   				printf("\n Select 'N' for New York");
   				printf("\n Select 'F' for France\n");
   				getchar();
   				scanf("%c",&des4);
   				switch(des4) {
   					case 'D':
   					price = 150000;
   					break;
   					case 'N' :
   					price = 360000;
   					break;
   					case 'F' :
   					price = 230000;
   					break;
   					default :
   					printf("\nInvaild Input .....!\n");
   				}
                break;
                default:
            	printf("\nInvaild Statement.....!");
            	break;
            }
        }
        break;
        default :
        printf("Invalid input");
    }
    // printf("\n--------Enter the Destination-------\n");
   	// printf("\n Select 'D' for Delhi");
   	// printf("\n Select 'A' for Amritsar");
   	// printf("\n Select 'L' for Ludhiana");
   	// printf("\n Select 'B' for Bangalore");
   	// printf("\n Select 'SL' for Sri lanka");
   	// printf("\n Select 'C' for Canada");
   	// printf("\n Select 'D' for Dubai");
    hotelStay(price,n);
}
int hotelStay(int price, int n) { 
	int d, d1, m, year;
    printf("\nEnter date From (dd/mm/yy): ");
    scanf("%d/%d/%d", &d,&m,&year);
    if (d%10==1 && d!=11) printf("%d st",d);
    else if (d%10==2 && d!=12) printf("%d nd",d);
    else if (d%10==3 && d!=13) printf("%d rd",d);
    else printf("%d th",d);
    printf("\nEnter date To (dd/mm/yy): ");
    scanf("%d/%d/%d", &d1,&m,&year);
    if (d1%10==1 && d1!=11) printf("%d st",d1);
    else if (d1%10==2 && d1!=12) printf("%d nd",d1);
    else if (d1%10==3 && d1!=13) printf("%d rd",d1);
    else printf("%d th",d1);
    
     hotelRoom(n,price,m);
}
int hotelRoom(int people, int price, int m) {
	char plan;
	int acc, planPrice;
	if(people == 1 || people == 2 || people == 3) {
		acc  = 1100;
	}
	else if(people == 4 || people == 5 || people == 6) {
		acc = 3*1100;
	}
	else if(people == 7 || people == 8 || people == 9) {
		acc = 6*1100;
	}
	else {
		acc = 9*1100;
	}
	printf("\nSelect valid plan with accmodation\nPress 'E' for European Plan\nPress 'C' for Candian Plan\nPress 'A' for American Plan\nPress 'M' for Modified American Plan\n");
	getchar();
	scanf("%c",&plan);
		switch(plan) {
			case 'E':
			planPrice = acc + 500;
			break;
			case 'C':
			planPrice = acc + 1500;
			break;
			case 'A':
			planPrice = acc + 3000;
			break;
			case 'M':
			planPrice = acc + 2500;
			break;
			default:
			printf("\nSelect valid Input");
		}

	packagePricing(m,price,planPrice);

}

int packagePricing(int month, int price,int acc) {
	int p;
	if(month == 10 || month == 11 || month == 12 || month == 01 || month == 02) {
		p = 2000 + price + acc;
	}
	else if(month == 03 || month == 04 || month == 05)  {
		p = 3000 + price + acc;
	}
	else if(month == 06 || month == 07) {
		p = 2500 + price + acc;
	}
	else {
		p = 2750 + price + acc;
	}
	printf("Your Fare including Hotel Package with 30 percent Discount :%d/-\n",p);
	cabService(p);
 } 

int cabService(int p) {
	int price;
	char dec;
	printf("\nEnter Y for cab service\nElse N for not\n");
	getchar();
	scanf("%c",&dec);
	switch(dec) {
		case 'Y':
		printf("Now you are availing cabService\n");
		price = 350 + p;
		break;

		case 'N':
		printf("Cancellation Proceeded\n");
		price = p;
		break;
		default:
		break;
		// printf("%dn",price);
	}
	printf("Total Fare :%d/-\n",price);
	gstService(price);
	printf("\n------------------ Thanks for visting us -----------------\n");
	printf("\n------------------     Bon Voyage        -----------------\n");

	// if(dec == 'Y' || dec == 'N') {
	// 	printf("\nNow you are availing cab service\n");
	// }
	// else {
	// 	printf("Sorry...!\n");
	// }
}
int gstService(int price) {
	char str[100], name[500], act;
	int phNum, cost, gstNum;
	printf("\nDo you want Extra Activities\nFor Applying press 'Y'\nFor not press 'N'\n");
	getchar();
	scanf("%c",&act);
	switch(act) {
		case 'Y':
		price = price + 500;
		break;
		case 'N':
		price = price + 0;
		break;
		default:
		printf("\nInvaild Input\n");
	}
	printf("\nEnter Your Name : \n");
	getchar();
	scanf("%[^s]",&name);
	printf("\nEnter Your Address : \n");
	getchar();
	scanf("%[^s]",&str);
	// fflush(stdin);
	// printf("\nEnter Phone Number : \n");
	// scanf("%d",&phNum);
	// printf("\nEnter Your GST Number : \n");
	// fflush(stdin);
	// scanf("%d",&gstNum);
	printf("\nYour Total Trip Charges : %d/-",(price*8)/100+price);
}