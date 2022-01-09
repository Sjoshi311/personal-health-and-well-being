#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int GEN()
{
    char male[3]="M",female[3]="F";
    int age,calo;
    char gen[3];
    //calories
    printf("\t\t\t|Calories intake");
    scanf("%d",&calo);
    //age
    printf("\t\t\t|Age:");
    scanf("%d",&age);
    printf("\n");

    if(age<=0||age>=123)
    {
    printf("\t\t\t|INVALID AGE ENTER AGAIN\n");
    return GEN();
    }
    //gender
    fflush(stdin);
    printf("\t\t\t|Gender(M/F):");
    scanf("%c",gen);
    printf("\n");
    int s=strcmp(gen,male);
    int s1=strcmp(gen,female);
    if(s==0)
    {
        printf("\t\t\t|THATS UNHEALTHY FOR YOU!\n");
        printf("\t\t\t|TRY TO CONSUME CALORIES BETWEEN YOUR AGE,GENDER AND BMI\n");
        if(age>=2&&age<=4&&calo<1000||calo>3300)
            {
            printf("\t\t\t|AGE:2-4   |CALORIES:1000-1600\n");
            printf("\t\t\t|DIET SUGGISTIONS\n");
            printf("\t\t\t\nBreakfast- fruit smoothie, apple \n\t\t\tLunch- yogurt & strawberries \n\t\t\tDinner- tomato soup, avocado toast \n\t\t\tSnack- almonds\n");
            }
        else if(age>=5&&age<=8&&calo<1000||calo>3300)
            {
            printf("\t\t\t|AGE:5-8   |CALORIES:1200-2000\n");
            printf("\t\t\t|DIET SUGGISTIONS\n");
            printf("\t\t\t\nBreakfast- banana and almond butter toast, whole wheat bread \n\t\t\tLunch- maple strawberries and cream, almonds  \n\t\t\tDinner- spinach and sun-dried tomato sandwich, roasted broccoli \n\t\t\tSnack- apples and almond butter\n");
            }
        else if(age>=9&&age<=13&&calo<1000||calo>3300)
            {
            printf("\t\t\t|AGE:9-13  |CALORIES:1600-2600\n");
            printf("\t\t\t|DIET SUGGISTIONS\n");
            printf("\t\t\t\nBreakfast- banana and almond butter toast, nonfat yogurt \n\t\t\tLunch- kale white bean and pesto salad, cinnamon honey cottage cheese \n\t\t\tDinner- seitian skillet with pepper and onions,hummus \n\t\t\tSnack- lemon avocado salad\n");
            }
        else if(age>=14&&age<=18&&calo<1000||calo>3300)
            {
            printf("\t\t\t|AGE:14-18 |CALORIES:2000-3200\n");
            printf("\t\t\t|DIET SUGGISTIONS\n");
            printf("\t\t\t\nBreakfast- pancakes, apple \n\t\t\tLunch-peanut butter and jelly \n\t\t\tDinner- pasta, microwaved sweet potato \n\t\t\tSnack- mango triffe\n");
            }
        else if(age>=19&&age<=30&&calo<1000||calo>3300)
            {
            printf("\t\t\t|AGE:19-30 |CALORIES:2400-3000\n");
            printf("\t\t\t|DIET SUGGISTIONS\n");
            printf("\t\t\t\nBreakfast- bagel with cream cheese,oranges \n\t\t\tLunch-peanut butter & jelly \n\t\t\tDinner- pita pizza, roasted asparagus \n\t\t\tSnack- cottage cheese with raspberries\n");
            }
        else if(age>=31&&age<=59&&calo<1000||calo>3300)
            {
            printf("\t\t\t|AGE:31-59 |CALORIES:2200-3000\n");
            printf("\t\t\t|DIET SUGGISTIONS\n");
            printf("\t\t\t\nBreakfast- burrito \n\t\t\tLunch-hummus and veggie sandwich \n\t\t\tDinner- flat bread pizza, garlic green beans \n\t\t\tSnack- fruit smoothie\n");
            }
        else if(age>=60&&calo<1000||calo>3300)
            {
            printf("\t\t\t|AGE:+60   |CALORIES:2000-2600\n");
            printf("\t\t\t|DIET SUGGISTIONS\n");
            printf("\t\t\t\nBreakfast- chocolate covered berry smoothie \n\t\t\tLunch-potato chips sandwich \n\t\t\tDinner- pasta la checca \n\t\t\tSnack- apple\n");
            }
         if (age>=2&&age<=4&&calo>=1000&&calo<=1600)
            {
            printf("\t\t\t*****MALE DIET PLAN*****\n");
            printf("\t\t\t\nBreakfast- fruit smoothie, apple \n\t\t\tLunch- yogurt & strawberries \n\t\t\tDinner- tomato soup, avocado toast \n\t\t\tSnack- almonds\n");
            }
        else if(age>=5&&age<=8&&calo>=1200&&calo<=2000)
            {
            printf("\t\t\t*****MALE DIET PLAN*****\n");
            printf("\t\t\t\nBreakfast- banana and almond butter toast, whole wheat bread \n\t\t\tLunch- maple strawberries and cream, almonds  \n\t\t\tDinner- spinach and sun-dried tomato sandwich, roasted broccoli \n\t\t\tSnack- apples and almond butter\n");
            }
        else if(age>=9&&age<=13&&calo>=1600&&calo<=2600)
            {
            printf("\t\t\t*****MALE DIET PLAN*****\n");
            printf("\t\t\t\nBreakfast- banana and almond butter toast, nonfat yogurt \n\t\t\tLunch- kale white bean and pesto salad, cinnamon honey cottage cheese \n\t\t\tDinner- seitian skillet with pepper and onions,hummus \n\t\t\tSnack- lemon avocado salad\n");
            }
        else if(age>=14&&age<=18&&calo>=2000&&calo<=3200)
            {
            printf("\t\t\t*****MALE DIET PLAN*****\n");
            printf("\t\t\t\nBreakfast- pancakes, apple \n\t\t\tLunch-peanut butter and jelly \n\t\t\tDinner- pasta, microwaved sweet potato \n\t\t\tSnack- mango triffe\n");
            }
        else if(age>=19&&age<=30&&calo>=2400&&calo<=3000)
            {
            printf("\t\t\t*****MALE DIET PLAN*****\n");
            printf("\t\t\t\nBreakfast- bagel with cream cheese,oranges \n\t\t\tLunch-peanut butter & jelly \n\t\t\tDinner- pita pizza, roasted asparagus \n\t\t\tSnack- cottage cheese with raspberries\n");
            }
        else if(age>=31&&age<=59&&calo>=2200&&calo<3000)
            {
            printf("\t\t\t*****MALE DIET PLAN*****\n");
            printf("\t\t\t\nBreakfast- burrito \n\t\t\tLunch-hummus and veggie sandwich \n\t\t\tDinner- flat bread pizza, garlic green beans \n\t\t\tSnack- fruit smoothie\n");
            }
        else if(age>=60&&calo>2000&&calo<2600)
            {
            printf("\t\t\t*****MALE DIET PLAN*****\n");
            printf("\t\t\t\nBreakfast- chocolate covered berry smoothie \n\t\t\tLunch-potato chips sandwich \n\t\t\tDinner- pasta la checca \n\t\t\tSnack- apple\n");
            }
        else
            {
            printf("\t\t\tYou are not taking diet according to your BMI");
            }

    }
    else if (s1==0)
    {
        if(calo<1000||calo>3300)
        {
        printf("\t\t\tTHATS UNHEALTHY FOR YOU!\n");
        printf("\t\t\tTRY TO CONSUME CALORIES BETWEEN YOUR AGE,GENDER AND BMI\n");
        //printf("\t\t\t*****FEMALE*****\n");
        if(age>=2&&age<=4)
        {
        printf("\t\t\t|AGE:2-4   |CALORIES:1000-1400\n");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- apple, strawberry and flax smoothie \n\t\t\tLunch-peanut butter yogurt/avocado/almonds \n\t\t\tDinner- steamed broccoli with olive oil and parmesan  \n\t\t\tSnack- seasoned mashed chickpeas");
        }
        else if(age>=5&&age<=8)
        {
        printf("\t\t\t|AGE:5-8   |CALORIES:1200-1800\n");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- strawberry yogurt with strawberries \n\t\t\tLunch-kale white bean and pesto salad \n\t\t\tDinner- bowties with  broccoli \n\t\t\tSnack- banana, almond, cheese slices\n");
        }
        else if(age>=9&&age<=13)
        {
        printf("\t\t\t|AGE:9-13  |CALORIES:1400-2200\n");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- strawberry with green smoothie, buttered toast \n\t\t\tLunch-apple and vanilla-cinnamon yogurt snack,grapes \n\t\t\tDinner- open face veggie hummus  lentil toast , parmesian chips \n\t\t\tSnack- banana\n");
        }
        else if(age>=14&&age<=18)
        {
        printf("\t\t\t|AGE:14-18 |CALORIES:1800-2400\n");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- powerball smoothie \n\t\t\tLunch-green pea pesto,cottage cheese with cucumber and tomato \n\t\t\tDinner- flat bread pizza \n\t\t\tSnack- nonfat Greek yogurt\n");
        }
        else if(age>=19&&age<=30)
        {
        printf("\t\t\t|AGE:19-30 |CALORIES:2000-2400\n");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- orange mango smoothie with chia \n\t\t\tLunch-mango strawberry and arugula salad,banana \n\t\t\tDinner- pasta pascal \n\t\t\tSnack- peppered cottage cheese,apple\n");
        }
        else if(age>=31&&age<=59)
        {
        printf("\t\t\t|AGE:31-59 |CALORIES:1800-2200\n");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- carrot orange grapefruitjuice \n\t\t\tLunch-big sandwich \n\t\t\tDinner- summer pasta \n\t\t\tSnack- banana peanut butter and raisins,blueberries\n");
        }
        else
        {
        printf("\t\t\t|AGE:+60   |CALORIES:1600-2000\n");
        printf("\t\t\tDIET SUGGISTIONS\n");
        printf("\t\t\tBreakfast- blueberry smoothie ,apple \n\t\t\tLunch- Mexican tortilla rolls \n\t\t\tDinner- black bean quesadillas, pan fried corn \n\t\t\tSnack- peppered cottage cheese, cucumber,slices\n");
        }

        }
        if(calo>=1000&&calo<3300)
            {
                printf("\t\t\tFEMALE DIET PLAN\n");
                if(age>=2&&age<=4&&calo>=1000&&calo<=1400)
                    {
                    printf("\t\t\t\nBreakfast- apple, strawberry and flax smoothie \n\t\t\tLunch-peanut butter yogurt/avocado/almonds \n\t\t\tDinner- steamed broccoli with olive oil and parmesan  \n\t\t\tSnack- seasoned mashed chickpeas\n");
                    }
                else if(age>=5&&age<=8&&calo>=1200&&calo<=1800)
                    {
                    printf("\t\t\t\nBreakfast- strawberry yogurt with strawberries \n\t\t\tLunch-kale white bean and pesto salad \n\t\t\tDinner- bowties with  broccoli \n\t\t\tSnack- banana, almond, cheese slices\n");
                    }
                else if(age>=9&&age<=13&&calo>1400&&calo<=2200)
                    {
                    printf("\t\t\t\nBreakfast- strawberry with green smoothie, buttered toast \n\t\t\tLunch-apple and vanilla-cinnamon yogurt snack,grapes \n\t\t\tDinner- open face veggie hummus  lentil toast , parmesian chips \n\t\t\tSnack- banana\n");
                    }
                else if(age>=14&&age<=18&&calo>1800&&calo<=2400)
                    {
                    printf("\t\t\t\nBreakfast- powerball smoothie \n\t\t\tLunch-green pea pesto,cottage cheese with cucumber and tomato \n\t\t\tDinner- flat bread pizza \n\t\t\tSnack- nonfat Greek yogurt\n");
                    }
                else if(age>=19&&age<=30&&calo>=2000&&calo<2400)
                    {
                    printf("\t\t\t\nBreakfast- orange mango smoothie with chia \n\t\t\tLunch-mango strawberry and arugula salad,banana \n\t\t\tDinner- pasta pascal \n\t\t\tSnack- peppered cottage cheese,apple\n");
                    }
                else if(age>=31&&age<=59&&calo>1800&&calo<2200)
                    {
                    printf("\t\t\t\nBreakfast- carrot orange grapefruitjuice \n\t\t\tLunch-big sandwich \n\t\t\tDinner- summer pasta \n\t\t\tSnack- banana peanut butter and raisins,blueberries\n");
                    }
                else if(age>=60&&calo>=1600&&calo<2000)
                    {
                    printf("\t\t\t\nBreakfast- blueberry smoothie ,apple \n\t\t\tLunch- Mexican tortilla rolls \n\t\t\tDinner- black bean quesadillas, pan fried corn \n\t\t\tSnack- peppered cottage cheese, cucumber,slices\n");
                    }
                else
                    {
                        printf("\t\t\tYou are not taking diet according to your BMI");
                    }
            }
    }
    else
    {
    printf("\t\t\tCHOOSE FROM(M/F)\n\n");
    return GEN();
    }

}
int bmi(float height,int weight,float b)
    {
    printf("\n\t\t\t|HEIGHT(in m):");
    scanf("%f",&height);
     printf("\n\t\t\t|WEIGHT(in kg):");
    scanf("%d",&weight);
    b=weight/(height*height);
    printf("\n\t\t\t|YOUR BMI=%f",b);
    if(b<23)
    {
        printf("\n\n\t\t\t|MORMAL\n\n");
    }
    else if(b>=23&&b<25)
    {
        printf("\n\n\t\t\t|OVERWEIGHT\n\n");
    }
    else if(b>=25&&b<=35)
    {
        printf("\n\n\t\t\t|CILINACLY OBESE\n\n");
    }
    else if(b>35)
    {
        printf("\n\n\t\t\t|MORBIDLY OBESE\n\n");
    }
}
int main()
{
    float height1,weight1;
    float b;
    printf("\t\t\t********************HEALTH AND WELLNESS PROGRAMME********************\n");
    bmi(height1,weight1,b);
    GEN();
}

