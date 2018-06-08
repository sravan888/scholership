#include<stdio.h>

void main()

{
    
int a,b,c,total,n;
    
printf("enter the three subjects marks\n");

    scanf("%d%d%d",&a,&b,&c);
   
 if ((a>=35)&&(b>=35)&&(c>=35))
  
  printf("pass\n");
   
 else
    
printf("fail\n");
  
  {
     
   printf("enter the percentage\n");
     
   scanf("%d",&n);
       
   if(n>=80)
 {
     
   printf("you got 80 percentage\n");
   
      }
      
  else{
    
    printf("you got less than 80 percentage\n");
      
  }
  
  {
       
 total=a+b+c;
      

  if(total>=260)
       
 {

            printf("you got scholership\n");
   
     }

        else{

            printf(" you won't get scholership\n");
       
 }

 }

  
}

}