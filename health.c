#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int AGE(int *age)
{
    printf("\t\t\t|Age:");
    scanf("%d",&age);
    if(age<=0||age>=123)
    {
    printf("\t\t\tINVALID AGE ENTER AGAIN\n");
    return AGE(*age);
    }
}
int GEN(char *gen)
{
    fflush(stdin);
    char male[3]="M",female[3]="F";
    printf("\t\t\t|Gender(M/F):");
    scanf("%c",gen);
    int s=strcmp(gen,male);
    int s1=strcmp(gen,female);
    if(s==0)
    {
        printf("\t\t\tThe average calorie to be intaken is 2500.\n");
    }
    else if (s1==0)
    {
        printf("\t\t\tThe average calorie to be intaken is 2000.\n");
    }
    else
    {
        printf("\t\t\tCHOOSE FROM(M/F)\n\n");
        GEN(gen);
    }
}
int CALO(float *calo)
{
printf("\t\t\t|Calories intake:");
scanf("%f",*calo);
printf("%f",calo);
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
    char gender[3],gen;
    float height1,weight1,calo;
    int age;
    printf("\t\t\t********************HEALTH AND WELLNESS PROGRAMME********************\n");
    BMI(&height1,&weight1);
    AGE(&age);
    GEN(&gender);
    CALO(&calo);
    if (age>=2&&age<=4&&calo>=1000&&calo<=1600&&gen=='M')
    {
        printf("\t\t\tBreakfast- fruit smoothie, apple \n\t\t\tLunch- yogurt & strawberries \n\t\t\tDinner- tomato soup, avocado toast \n\t\t\tSnack- almonds");
    }
    else if(age>=2&&age<=4&&calo>=1000&&calo<=1400&&gen=='F')
    {
        printf("Breakfast- apple, strawberry and flax smoothie \n\t\t\tLunch-peanut butter yogurt/avocado/almonds \n\t\t\tDinner- steamed broccoli with olive oil and parmesan  \n\t\t\tSnack- seasoned mashed chickpeas");
    }
    else if(age>=5&&age<=8&&calo>=1200&&calo<=2000&&gen=='M')
    {
        printf("Breakfast- banana and almond butter toast, whole wheat bread \n\t\t\tLunch- maple strawberries and cream, almonds  \n\t\t\tDinner- spinach and sun-dried tomato sandwich, roasted broccoli \n\t\t\tSnack- apples and almond butter");
    }
    else if(age>=5&&age<=8&&calo>=1200&&calo<=1800&&gen=='F')
    {
        printf("Breakfast- strawberry yogurt with strawberries \n\t\t\tLunch-kale white bean and pesto salad \n\t\t\tDinner- bowties with  broccoli \n\t\t\tSnack- banana, almond, cheese slices ");
    }
    else if(age>=9&&age<=13&&calo>=1600&&calo<=2600&&gen=='M')
    {
        printf("Breakfast- banana and almond butter toast, nonfat yogurt \n\t\t\tLunch- kale white bean and pesto salad, cinnamon honey cottage cheese \n\t\t\tDinner- seitian skillet with pepper and onions,hummus \n\t\t\tSnack- lemon avocado salad");
    }
    else if(age>=9&&age<=13&&calo>1400&&calo<=2200&&gen=='F')
    {
        printf("Breakfast- strawberry with green smoothie, buttered toast \n\t\t\tLunch-apple and vanilla-cinnamon yogurt snack,grapes \n\t\t\tDinner- open face veggie hummus  lentil toast , parmesian chips \n\t\t\tSnack- banana");
    }
    else if(age>=14&&age<=18&&calo>=2000&&calo<=3200&&gen=='M')
    {
        printf("Breakfast- pancakes, apple \n\t\t\tLunch-peanut butter and jelly \n\t\t\tDinner- pasta, microwaved sweet potato \n\t\t\tSnack- mango triffe");
    }
    else if(age>=14&&age<=18&&calo>1800&&calo<=2400&&gen=='F')
    {

        printf("Breakfast- powerball smoothie \n\t\t\tLunch-green pea pesto,cottage cheese with cucumber and tomato \n\t\t\tDinner- flat bread pizza \n\t\t\tSnack- nonfat Greek yogurt");
    }
    else if(age>=19&&age<=30&&calo>=2400&&calo<=3000&&gen=='M')
    {
        printf("Breakfast- bagel with cream cheese,oranges \n\t\t\tLunch-peanut butter & jelly \n\t\t\tDinner- pita pizza, roasted asparagus \n\t\t\tSnack- cottage cheese with raspberries");
    }
    else if(age>=19&&age<=30&&calo>=2000&&calo<2400&&gen=='F')
    {
        printf("Breakfast- orange mango smoothie with chia \n\t\t\tLunch-mango strawberry and arugula salad,banana \n\t\t\tDinner- pasta pascal \n\t\t\tSnack- peppered cottage cheese,apple");
    }
    else if(age>=31&&age<=59&&calo>=2200&&calo<3000&&gen=='M')
    {
        printf("Breakfast- burrito \n\t\t\tLunch-hummus and veggie sandwich \n\t\t\tDinner- flat bread pizza, garlic green beans \n\t\t\tSnack- fruit smoothie");
    }
    else if(age>=31&&age<=59&&calo>1800&&calo<2200&&gen=='F')
    {
        printf("Breakfast- carrot orange grapefruit juice \n\t\t\tLunch-big sandwich \n\t\t\tDinner- summer pasta \n\t\t\tSnack- banana peanut butter and raisins,blueberries");
    }
    else if(age>=60&&calo>2000&&calo<2600&&gen=='M')
    {
        printf("Breakfast- chocolate covered berry smoothie \n\t\t\tLunch-potato chips sandwich \n\t\t\tDinner- pasta la checca \n\t\t\tSnack- apple");
    }
    else if(age>=60&&calo>=1600&&calo<2000&&gen=='F')
    {
        printf("Breakfast- blueberry smoothie ,apple \n\t\t\tLunch- Mexican tortilla rolls \n\t\t\tDinner- black bean quesadillas, pan fried corn \n\t\t\tSnack- peppered cottage cheese, cucumber,slices");
    }
}
