#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int GEN()
{
    fflush(stdin);
    char male[3]="M",female[3]="F";
    int age,calo;
    char gen[3];
    //calories
    printf("\t\t\tCalories intake");
    scanf("%d",&calo);
    //age
    printf("Age:");
    printf("\n");
    scanf("%d",&age);
    
    if(age<=0||age>=123)
    {
    printf("INVALID AGE ENTER AGAIN\n");
    return GEN(gen,age,calo);
    }
    //gender
    printf("Gender(M/F):");
    scanf("%c",gen);
    int s=strcmp(gen,male);
    int s1=strcmp(gen,female);
    if(s==0)
    {
     if()
    {
    printf("\t\t\tTHATS UNHEALTHY FOR YOU!\n");
    printf("\t\t\tTRY TO CONSUME CALORIES BETWEEN YOUR AGE,GENDER AND BMI\n");
    printf("\t\t\t*****MALE*****\n");
     if(age>=2&&age<=4&&calo<1000||calo>3300);
        {printf("\t\t\t|AGE:2-4   |CALORIES:1000-1600");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- fruit smoothie, apple \n\t\t\tLunch- yogurt & strawberries \n\t\t\tDinner- tomato soup, avocado toast \n\t\t\tSnack- almonds");
        }
     if(age>=5&&age<=8&&calo<1000||calo>3300);
        {
        printf("\t\t\t|AGE:5-8   |CALORIES:1200-2000");
        printf("\t\t\tDIET SUGGISTIONS\n");
        
        }
    if(age>=9&&age<=13&&calo<1000||calo>3300);
        {
        printf("\t\t\t|AGE:9-13  |CALORIES:1600-2600");
        printf("\t\t\tDIET SUGGISTIONS\n");
        }
    if(age>=14&&age<=18&&calo<1000||calo>3300);
        {
        printf("\t\t\t|AGE:14-18 |CALORIES:2000-3200");
        printf("\t\t\tDIET SUGGISTIONS\n");   
        }
     if(age>=19&&age<=30&&calo<1000||calo>3300);
        {
        printf("\t\t\t|AGE:19-30 |CALORIES:2400-3000");
        printf("\t\t\tDIET SUGGISTIONS\n");   
        }
     if(age>=31&&age<=59&&calo<1000||calo>3300);
        {
        printf("\t\t\t|AGE:31-59 |CALORIES:2200-3000");
        printf("\t\t\tDIET SUGGISTIONS\n");
        }
    if(age>=60&&calo<1000||calo>3300)
        {
        printf("\t\t\t|AGE:+60   |CALORIES:2000-2600");
        printf("\t\t\tDIET SUGGISTIONS\n");
        }
    }
    
    if(calo>=1000&&calo=<3200)
        {
        printf("\t\t\t*****MALE DIET PLAN*****\n");
        if (age>=2&&age<=4&&calo>=1000&&calo<=1600)
            {
            printf("\t\t\tBreakfast- fruit smoothie, apple \n\t\t\tLunch- yogurt & strawberries \n\t\t\tDinner- tomato soup, avocado toast \n\t\t\tSnack- almonds");
            }
        else if(age>=5&&age<=8&&calo>=1200&&calo<=2000)
            {
            printf("Breakfast- banana and almond butter toast, whole wheat bread \n\t\t\tLunch- maple strawberries and cream, almonds  \n\t\t\tDinner- spinach and sun-dried tomato sandwich, roasted broccoli \n\t\t\tSnack- apples and almond butter");
            }
        else if(age>=9&&age<=13&&calo>=1600&&calo<=2600)
            {
            printf("Breakfast- banana and almond butter toast, nonfat yogurt \n\t\t\tLunch- kale white bean and pesto salad, cinnamon honey cottage cheese \n\t\t\tDinner- seitian skillet with pepper and onions,hummus \n\t\t\tSnack- lemon avocado salad");
            }
        else if(age>=14&&age<=18&&calo>=2000&&calo<=3200)
            {
            printf("Breakfast- pancakes, apple \n\t\t\tLunch-peanut butter and jelly \n\t\t\tDinner- pasta, microwaved sweet potato \n\t\t\tSnack- mango triffe");
            }
        else if(age>=19&&age<=30&&calo>=2400&&calo<=3000)
            {
            printf("Breakfast- bagel with cream cheese,oranges \n\t\t\tLunch-peanut butter & jelly \n\t\t\tDinner- pita pizza, roasted asparagus \n\t\t\tSnack- cottage cheese with raspberries");
            }
        else if(age>=31&&age<=59&&calo>=2200&&calo<3000)
            {
            printf("Breakfast- burrito \n\t\t\tLunch-hummus and veggie sandwich \n\t\t\tDinner- flat bread pizza, garlic green beans \n\t\t\tSnack- fruit smoothie");
            }
        else if(age>=60&&calo>2000&&calo<2600)
            {
            printf("Breakfast- chocolate covered berry smoothie \n\t\t\tLunch-potato chips sandwich \n\t\t\tDinner- pasta la checca \n\t\t\tSnack- apple");
            }    
        }
    }
    else if (s1==0)
    {
        if(calo<1000||calo>3300)
        {
        printf("\t\t\t*****FEMALE*****\n");
        if(age>=2&&age<=4);
        {
        printf("\t\t\t|AGE:2-4   |CALORIES:1000-1400");
        }
        else if(age>=5&&age<=8);
        {
        printf("\t\t\t|AGE:5-8   |CALORIES:1200-1800");
        }
        else if(age>=9&&age<=13);
        {
        printf("\t\t\t|AGE:9-13  |CALORIES:1400-2200");
        }
        else if(age>=14&&age<=18);
        {
        printf("\t\t\t|AGE:14-18 |CALORIES:1800-2400");
        }
        else if(age>=19&&age<=30);
        {
        printf("\t\t\t|AGE:19-30 |CALORIES:2000-2400");
        }
        else if(age>=31&&age<=59);
        {
        printf("\t\t\t|AGE:31-59 |CALORIES:1800-2200");
        }
        else
        {
        printf("\t\t\t|AGE:+60   |CALORIES:1600-2000");
        }

        }
        if(calo>=1000&&calo<3300)
            {
                printf("\t\t\tFEMALE DIET PLAN");
                if(age>=2&&age<=4&&calo>=1000&&calo<=1400)
                    {
                    printf("Breakfast- apple, strawberry and flax smoothie \n\t\t\tLunch-peanut butter yogurt/avocado/almonds \n\t\t\tDinner- steamed broccoli with olive oil and parmesan  \n\t\t\tSnack- seasoned mashed chickpeas");
                    }
                else if(age>=5&&age<=8&&calo>=1200&&calo<=1800)
                    {
                    printf("Breakfast- strawberry yogurt with strawberries \n\t\t\tLunch-kale white bean and pesto salad \n\t\t\tDinner- bowties with  broccoli \n\t\t\tSnack- banana, almond, cheese slices ");
                    } 
                else if(age>=9&&age<=13&&calo>1400&&calo<=2200)
                    {
                    printf("Breakfast- strawberry with green smoothie, buttered toast \n\t\t\tLunch-apple and vanilla-cinnamon yogurt snack,grapes \n\t\t\tDinner- open face veggie hummus  lentil toast , parmesian chips \n\t\t\tSnack- banana");
                    }
                else if(age>=14&&age<=18&&calo>1800&&calo<=2400)
                    {   
                    printf("Breakfast- powerball smoothie \n\t\t\tLunch-green pea pesto,cottage cheese with cucumber and tomato \n\t\t\tDinner- flat bread pizza \n\t\t\tSnack- nonfat Greek yogurt");
                    }
                else if(age>=19&&age<=30&&calo>=2000&&calo<2400)
                    {
                    printf("Breakfast- orange mango smoothie with chia \n\t\t\tLunch-mango strawberry and arugula salad,banana \n\t\t\tDinner- pasta pascal \n\t\t\tSnack- peppered cottage cheese,apple");
                    }
                else if(age>=31&&age<=59&&calo>1800&&calo<2200)
                    {   
                    printf("Breakfast- carrot orange grapefruitjuice \n\t\t\tLunch-big sandwich \n\t\t\tDinner- summer pasta \n\t\t\tSnack- banana peanut butter and raisins,blueberries");
                    }
                else if(age>=60&&calo>=1600&&calo<2000)
                    {
                    printf("Breakfast- blueberry smoothie ,apple \n\t\t\tLunch- Mexican tortilla rolls \n\t\t\tDinner- black bean quesadillas, pan fried corn \n\t\t\tSnack- peppered cottage cheese, cucumber,slices");
                    }
            }
    }
    
    else
    {
    printf("\t\t\tCHOOSE FROM(M/F)\n\n");
    return GEN(gen,age,calo);
    }
   
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
    float height1,weight1;
    //*gen=gender;
    printf("\t\t\t********************HEALTH AND WELLNESS PROGRAMME********************\n");
    GEN();
}
