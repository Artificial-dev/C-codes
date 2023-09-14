#include<stdio.h>
#
int main(void){
//declaration 
                                                                                              
  float b1,b2,b3,d1,d2,d3,area_1,area_2,area_3,
        y_bar,x_bar,
        h1y,h2y,h3y, Ixx;
  
 /*                   //BODMAS RULE
                
                   1. Bracket
                   2. Division
                   3. Multiplication
                   4. Addition
                   5. Subtraction                             */
        // for fig 1
         
    printf("Enter Base(b1)");
    scanf("%f",&b1);
    printf("Enter Height(d1)");
    scanf("%f",&d1);
    printf("Enter H1y(h1y)");
    scanf("%f",&h1y);

        // for fig 2 
  /*
   printf("Enter Base(b2)");
   scanf("%d",&b2);
   printf("Enter Height(d2)");
   scanf("%d",&d2);
   printf("Enter H2y(h2y)");
   scanf("%f",&h2y);
      
    
         // for fig 3
    
    printf("Enter Base(b3)");
    scanf("%d",&b3);
    printf("Enter Height(d3)");
     scanf("%d",&d3);
     printf("Enter H3y(h3y)");
    scanf("%f",&h3y); 
    */
      
      area_1 = b1*d1 ;
  //  area_2 = b2*d2 ;                                                                        
  //  area_3 = b3*d3 ;
  

    printf("the area of fig1 is %f\n",area_1);
 //   printf("the area of fig2 is %f \n",area_2);
//    printf("the area of fig3 is %f\n",area_3);

    
 //   float formula_1,formula_2,formula_3;
    
 //   formula_1 = (b1*d1*d1*d1)/12;
 //   formula_2 = (b2*d2*d2*d2)/12;
//    formula_3 = (b3*d3*d3*d3)/12;    
    
  //Ixx= formula_1 + (area_1*h1y)  + (b2*d2*d2)/12 +(area_2*h2y) +(b3*d3*d3)/12 +(area_3*h3y) ;
 // printf("The Ixx is %.2f",Ixx);

        return 0;
}