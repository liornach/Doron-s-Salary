#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <time.h>



int main()
{

int importantNumber = 20;




puts("\nWelcome to \"Doron's Salary Calculator\" ! ");


while(importantNumber != 0){
    puts("==========================================");
    puts("Please choose an option from the menu -\n");
    puts("1 - Calculate your daily salary");
    puts("2 - Restart your monthly salary");
    puts("3 - Watch your current salary");
    puts("0 - Exit this sweet program");



          int hs1,hs2,hf3,hf4;
    char answer [20];
    char yes[]= "yes";
    int regularSalary = 37;
    float paid;
    float overallPaid = 0;
    float overallWork = 0;
    float soFarSalary;

    FILE * fp;

fp = fopen("salarySoFar.txt" , "r");
while(!feof(fp)){
    fscanf(fp , " %f" , &soFarSalary);

}
fclose(fp);



    /*defining the work calculator (switching to float in order to calculate time)
    and the work sum*/
    float workSum1,workSum2 ;

    //defining the work total time
    float workTotal;


    scanf(" %d" , &importantNumber);
while(importantNumber != 0){
overallWork = 0;
overallPaid = 0;




if (importantNumber ==  1){
do{




//asking for the start time
  puts("\n\n_________________________________________________\n\n");
  printf("\nPlease enter start working time(example - 18:30):  ");
  scanf("%d:%d" , &hs1 , &hs2 );




  //asking for the finish time
  printf("\nFinish time?  ");
   scanf("%d:%d" , &hf3 , &hf4 );




   //verifing the working houres

if(hs2 < 10 & hf4>10){
    printf("\n%d:0%d - %d:%d , is that right? (yes or no)" , hs1 , hs2 , hf3 , hf4);
}else if(hs2 < 10 & hf4<10){
  printf("\n%d:0%d - %d:0%d , is that right? (yes or no)" , hs1 , hs2 , hf3 , hf4);
}else if(hs2 > 10 & hf4<10){
         printf("\n%d:%d - %d:0%d , is that right? (yes or no)" , hs1 , hs2 , hf3 , hf4);
}else{
printf("\n%d:%d - %d:%d , is that right?(yes or no)  " , hs1 , hs2 , hf3 , hf4 );}
scanf(" %s" ,answer );}

while(strcmp(answer , yes) != 0);

//switching to float in order to calculate time differences.

workSum1= (float)hs1 + (float)hs2/60;

workSum2= (float)hf3 + (float)hf4/60;

//calculating the total amount of work


if(workSum2 > workSum1){
    workTotal = workSum2 - workSum1;
}else{workTotal = 24 - (workSum1-workSum2);
}
overallWork += workTotal;
printf("\nfor %.2f hours of work you should get" , overallWork);



if (workTotal<=8){
   paid = workTotal * 37;
 overallPaid += paid;
   printf(" %.2f shekels.\n\n" , overallPaid);

}else if (workTotal<=10){
paid = 8*37 + (workTotal - 8)*37*1.25;
 overallPaid += paid;
printf(" %.2f shekels.\n\n" ,overallPaid);

}else {
paid = 8*37 + 2*37*1.25 + (workTotal-10)*1.5*37;
 overallPaid += paid;
printf(" %.2f shekels.\n\n" , overallPaid);

}



soFarSalary += overallPaid;

printf("Your overall salary by now is %.2f Shekels\n\n" , soFarSalary);

fp = fopen("salarySoFar.txt" , "w");

fprintf(fp , "%f" , soFarSalary );

fclose(fp);

break;





    }
else if(importantNumber == 2){
    printf("Are you sure you want to restart your monthly salary? (yes/no)\n");
   char restart [10];
   scanf("%s" , restart);
   if(strcasecmp(yes , restart) == 0 ){
    FILE * fp;
    fp = fopen ("salarySoFar.txt" , "w");
    fprintf(fp , "0");
    fclose(fp);
    printf("\nSalary has been restart successfully!\n\n");
break;
   } else{
   printf("\nSalary has not been restart.\n\n");
   }
   break;

}
else if(importantNumber == 3){
    printf("Your current salary is %.2f Shekels.\n\n" , soFarSalary);
    break;
}
else{
    printf("\nInvalid choise number , please try again.\n\n");
    break;
}

}


}

srand(time(NULL));
int r = rand()%10;

switch(r)
{
case 1:
    printf("\n\nSave some money ain't no sin, right?\n\n");
    break;

case 2:
    printf("\n\nMove like Jagger!\n\n");
    break;

case 3:
    printf("\n\nBye Bye!\n\n");
    break;

case 4:
    printf("\n\nHElL YEAH ,doin' some money that's alright!\n\n");
    break;

case 5:
    printf("\n\nDon't do anything for free, A'ye?\n\n");
    break;

case 6:
    printf("\n\nBye Bye old friend\n\n");
    break;

case 7:
    printf("\n\nAren't you getting tired from all this work?\n\n");
    break;
case 8:
    printf("\n\nAdios Muchaha!");
    break;
case 9:
    printf("\n\nDid you smile to someone today?\n\n");
    break;
case 0:
    printf(" \n\n :) \n\n");
    break;


}

    return 0;}
