#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void AGE(int *age)
{
    printf("Age:");
    scanf("%d",&age);
    if(age<=0||age>=123)
    {
    fflush(stdin);
    printf("INVALID AGE ENTER AGAIN\n");
    return AGE(*age);
    }
int GEN(char gen)
{
    fflush(stdin);
    printf("Gender(M/F):");
    scanf("%c",&gen);
}
//int (float calorie)
//printf("Calories intake");
  //  scanf("%f",&calorie);
int BMI(float *height,float *weight)
{
    float *b,BMI1;
    b=&BMI1;
    printf("\t\t\t|Height(m)");
    scanf("%f",height);
    printf("\n\n");
    if (*height<0.5||*height>2.72)
    {
    fflush(stdin);
    printf("\t\t\t*****\tWRONG INPUT\t*****\n\n");
    return BMI(&height,&weight);
    }
    printf("\t\t\t|Weight(kg)");
    scanf("%f",weight);
    printf("\n\n");
    //printf("\t\t\t%f\n\n",*height);
    *b=(*weight)/((*height)*(*height));
    printf("\t\t\THE BMI IS%f\n\n",*b);
}
int main()
{
    float height1,weight1;
    printf("\t\t\t********************HEALTH AND WELLNESS PROGRAMME********************\n");
    BMI(&height1,&weight1);
}
