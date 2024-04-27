#include<stdio.h>
#include<conio.h>
#include<time.h>

int u_in , c_in , total = 21;

int intelligent ();
int user();
int comp();




int main()
{
printf("Lets play game :- matchstick21");
printf("\n\nyou and me can choose max 4 sticks at a time min 1 stick at time");
printf("\nthe last stick will goes to whom will be losser of matchstick21");
printf("\n\n\n         Lets start");
user();
getch();
return 0;
}
int intelligent()
{
	int y = total;
	int choose;
	if (y>10)
	{  // what if y = 16 comes from user
		if(y>15) {choose = (total - 16);} 
		if(y<=15) {choose = (total - 11);}
		printf("\n\nMy tern :- %d",choose);
	    total = total - choose;
	    return total;
	}
	
	else if (y<=10 && y>6)
	{
		choose = total - 6;
		printf("\n\nMy tern :- %d",choose);
	    total = total - choose;
	    return total;
	}
	
	else
	{
		choose = total - 1;
		printf("\n\nMy tern :- %d",choose);
	    total = total - choose;
	    return total;
	}
}


int comp()
{  
if(total <= 20) 
	{  
	  total = intelligent();
	  printf("\nRemainning :- %d",total);

		
	}
	
	else 
	{
      srand(time(NULL));
      c_in = rand() %4 + 1;
	  printf("\n my turn :- %d",c_in);
	
   	 total = total - c_in ; 	
	 printf("\nRemainning :- %d",total);

	}
	if(total == 1 ) { printf("\n\nuser loosed the matchstick21");}
	if(total > 1) { return user(); }
    
}

int user()
{
 printf("\n\nYour turn :- ");
 scanf("%d" ,&u_in);
 while (u_in > 4 || u_in < 1)
 {
	  printf("\nNote :- choose between 1 and 4 ");
	  printf("\nYour turn :- ");
      scanf("%d" ,&u_in);
 }
 total = total - u_in ;
 printf("Remainning :- %d", total);
 
 if(total > 1) { return comp(); }
 if(total == 1 ) { printf("you loosed the matchstick21");}
 }



