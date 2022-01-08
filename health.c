#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int AGE(int *age)
{
    printf("Age:");
    printf("\n");
    scanf("%d",&age);
    if(age<=0||age>=123)
    {
    printf("INVALID AGE ENTER AGAIN\n");
    return AGE(*age);
    }
}
int GEN(char *gen)
{
    fflush(stdin);
    char male[3]="M",female[3]="F";
    printf("Gender(M/F):");
    scanf("%c",gen);
    int s=strcmp(gen,male);
    int s1=strcmp(gen,female);
    if(s==0)
    {
    printf("");
    }
    else if (s1==0)
    {
    printf("");
    }
    else
    {
        while(s!=0||s1!=0)
        {
        return GEN(gen);
        }
    }

}

int (float calorie)
{
printf("Calories intake");
    scanf("%f",&calorie);

}
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
    *b=(*weight)/((*height)*(*height));
    printf("\t\t\THE BMI IS:%f\n\n",*b);
}
int main()
{
    char gender[3];
    float height1,weight1,age;
    //*gen=gender;
    printf("\t\t\t********************HEALTH AND WELLNESS PROGRAMME********************\n");
    BMI(&height1,&weight1);
    GEN(&gender);
    AGE(&age);
}

