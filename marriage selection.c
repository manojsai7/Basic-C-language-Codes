#include <stdio.h>
int main(){
 int age,
  salary,job, house;
printf("Enter age\n");
scanf("%d",&age);

printf("Enter salary\n");
scanf("%d",&salary);

printf("Enter job\n");
scanf("%d",&job);

printf("Enter house\n");
scanf("%d",&house);

if (age>=18&&age<=30)
{
  if (salary>=30000)
  {
    if (house==1)
    {
      if (job==1)
      {printf("you are Selected !\n");}
      else {printf("Not accepted, as you dont have a job\n");}
    } 
    else {printf("Not accepted as you dont own a house yet\n");}
  }
  else {printf("You're rejected because of low income than expected");}

}
 else {printf("not accpeted, your age is incompatible");}
//return 0; 
}


