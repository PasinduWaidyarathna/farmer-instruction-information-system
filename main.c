#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Growing details Function declaration
void growingdetailsFunction();
// Disease  details Function declaration
void diseasefunction();

void main(){
    system("COLOR 03");
    int y=1;
    int Vegetable_code,Date_count,plantdate,plantmonth,currentday,currentmonth,plantyear,currentyear;
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    float rate[6]={0,825.526,793.775,544.29,326.58,498.938};
    float area_planted,abnormal_area,area_grown,estim_profit;
    int disease,dis; //disease=disease condition ,dis=user enter disease
	printf("test 01");
    printf("\n------------------------------------- WELCOME TO FARMER INSTRUCTION INFORMATION SYSTEM --------------------------------------\n\n");
    do{
    printf("* Vegetable Codes as below *\n\n\t01 -: Chilli \" MICH HY 1-2015 \"\n\t02 -: Eggplant \" AMANDA F1 \"\n\t03 -: Beans \" GANNORUWA BIL \"\n\t04 -: Okra \" OKH1 \"\n\t05 -: Tomato \" T245 \"\n\n");
    printf("Enter planted vegetable code : ");
    scanf("%d",&Vegetable_code);
    if(Vegetable_code<1 || Vegetable_code>5){
        printf("PLEASE ENTER VEGETABLE CODE CORRECTLY");
    }
    else{
       printf("\nEnter date of plantation begins : ");
       scanf("%d",&plantdate);
       printf("\nEnter month of plantation begins : ");
       scanf("%d",&plantmonth);
       printf("\nEnter year of plantation begins : ");
       scanf("%d",&plantyear);
       printf("\nEnter current date : ");
       scanf("%d",&currentday);
       printf("\nEnter current month : ");
       scanf("%d",&currentmonth);
       printf("\nEnter current year : ");
       scanf("%d",&currentyear);
       if((plantmonth>12 || plantmonth<1)  || (currentyear-plantyear)>1 || (currentyear-plantyear)<0 || plantdate>month[plantmonth-1] || currentday>month[currentmonth-1]){
          printf("\nPLEASE ENTER VALID DAY,MONTH,YEAR\n");
        }
       else{
          printf("\nEnter Cultivated Area (Please Enter m^2) : ");
          scanf("%f",&area_planted);
          printf("\nDamage Area Total (Please Enter m^2 and No lost please enter 0) : ");
          scanf("%f",&abnormal_area);

          if(currentday>plantdate && plantmonth==currentmonth && plantyear==currentyear){
          Date_count=currentday-plantdate;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count); // call the growing details function

          }
          if((currentmonth-plantmonth)==1 && plantyear==currentyear){
          Date_count=(month[plantmonth-1]-plantdate)+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);  // call the growing details function

          }
          if((currentmonth-plantmonth)==2  && plantyear==currentyear){
          Date_count=(month[plantmonth-1]-plantdate)+month[plantmonth]+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);   // call the growing details function

          }
          if((currentmonth-plantmonth)==3 && plantyear==currentyear){
          Date_count=(month[plantmonth-1]-plantdate)+month[plantmonth]+month[plantmonth+1]+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);    // call the growing details function

          }
          if((plantmonth==10 && currentmonth==1) && (currentyear-plantyear==1)){
          Date_count=(month[plantmonth-1]-plantdate)+month[plantmonth]+month[plantmonth+1]+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);   // call the growing details function

          }
          if((plantmonth==11 && currentmonth==1) && (currentyear-plantyear==1)){
          Date_count=(month[plantmonth-1]-plantdate)+month[plantmonth]+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);   // call the growing details function

          }
          if((plantmonth==11 && currentmonth==2) && (currentyear-plantyear==1)){
          Date_count=(month[plantmonth-1]-plantdate)+month[plantmonth]+month[currentmonth-2]+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);   // call the growing details function

          }
          if((plantmonth==12 && currentmonth==1) && (currentyear-plantyear==1)){
          Date_count=(month[plantmonth-1]-plantdate)+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);   // call the growing details function

          }
          if((plantmonth==12 && currentmonth==2) && (currentyear-plantyear==1)){
          Date_count=(month[plantmonth-1]-plantdate)+month[currentmonth-2]+currentday;
          printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
          printf("\t:::::\n\n");
          printf("\tYour cultivation needs to be appear like below\t**\n\n");
          growingdetailsFunction(Vegetable_code,Date_count);   // call the growing details function

          }
          if((plantmonth==12 && currentmonth==3) && (currentyear-plantyear==1)){
           Date_count=(month[plantmonth-1]-plantdate)+month[currentmonth-2]+month[currentmonth-1]+currentday;
           printf("\n:::::\tNumber of Days gone after Planting: %d",Date_count);
           printf("\t:::::\n\n");
           printf("\tYour cultivation needs to be appear like below\t**\n\n");
           growingdetailsFunction(Vegetable_code,Date_count);   // call the growing details function

          }
          printf("\n\nAre any new plant illnesses or differences appearing?(if appear please type 0 nor 1) : ");
          scanf("%d",&disease);
          if(disease==0){
          printf("*Good luck!*\n Add fertilizer on time\n\n");
          }else{
              if(Vegetable_code==1){
              printf("\n");
              printf("Chillie  Diseases are :-");
              printf("Fungal Disease Number is = 1\n");
              printf("\t\t\tBacterial disease Number is  = 2\n");
              printf("\t\t\tViral disease  Number is = 3\n\n");
              printf("Enter Current Disease Number : ");
              scanf("%d",&dis);
              diseasefunction(Vegetable_code,dis); // call the disease details function
              }
              if(Vegetable_code==2){
              printf("\n");
              printf("Eggplant Diseases are :-");
              printf("Entrance disease Number is   = 4\n");
              printf("\t\t\tOkravari cellavirus Number is = 5\n\n");
              printf("Enter Current Disease Number Number is : ");
              scanf("%d",&dis);
              diseasefunction(Vegetable_code,dis);   // call the disease details function
              }
              if(Vegetable_code==3){
              printf("\n");
              printf("Beans  Diseases are  :-");
              printf("Diamolan food  Number is   = 6\n");
              printf("\t\t\tRootrot  Number is = 7\n");
              printf("\t\t\tDownymildew  Number is = 8\n\n");
              printf("Enter Current Disease Number : ");
              scanf("%d",&dis);
              diseasefunction(Vegetable_code,dis);  // call the disease details function
              }
              if(Vegetable_code==4){
              printf("\n");
              printf("Okra  Diseases are :-");
              printf("Pest damage  Number is = 9\n");
              printf("\t\t\tFungal disease Number is = 10\n");
              printf("\t\t\tViral disease  Number is = 11\n\n");
              printf("Enter Current Disease Number : ");
              scanf("%d",&dis);
              diseasefunction(Vegetable_code,dis);   // call the disease details function
              }
              if(Vegetable_code==5){
              printf("\n");
              printf("Tomato  Diseases are :-");
              printf("Fungal diseases Number is = 12\n");
              printf("\t\t\tBacterial diseases Number is = 13\n");
              printf("\t\t\tViral disease Number is = 14\n\n");
              printf("Enter Current Disease Number : ");
              scanf("%d",&dis);
              diseasefunction(Vegetable_code,dis);    // call the disease details function
              }
            }
                printf("\n                                               CALCULATION TABLE                                                           \n");
                printf("\n---------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n|\tArea cultivated\t\t|\tArea lost\t|\tTotal Area Grown\t|\tEstimated Profit\t|\n");
                printf("\n---------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n|\t%.2f\t\t|",area_planted);
                printf("\t%.2f\t\t|",abnormal_area);
                area_grown=area_planted-abnormal_area;
                printf("\t\t%.2f\t\t|",area_grown);
                estim_profit=area_grown*rate[Vegetable_code];
                printf("\t%.2f\t\t|\n",estim_profit);
                printf("\n---------------------------------------------------------------------------------------------------------------------------\n");

                printf("\n------------------------------------Thank for Using Farmer Instruction Information System----------------------------------\n");

        }

    }
        printf("\n\n-------- If you need more please enter 1 --------\n\nEnter here: ");
        scanf("%d",&y);
    }while(y==1);
}
void diseasefunction(int x,int dis)  // Disease Function definition
{
       int dise1_FungalDisease=1;
	   int dise2_Bacterialdisease=2;
	   int dise3_Viraldisease=3;
	   int dise4_Entrancedisease=4;
	   int dise5_Okravaricellavirus=5;
	   int dise6_Diamolanfood=6;
	   int dise7_Rootrot=7;
	   int dise8_Downymildew=8;
	   int dise9_Pestdamage=9;
	   int dise10_Fungaldisease=10;
	   int dise11_Viraldisease=11;
	   int dise12_Fungaldiseases=12;
	   int dise13_Bacterialdiseases=13;
	   int dise14_Viraldisease=14;

    if(x==1){
        printf("\nVEGETABLE NAME : Chillie\n");
        printf("\n");
       if(dis==dise1_FungalDisease){
       printf("SOLUTION FOR 'Fungal Disease' :\n\n");
       printf("\tSoil Remediation / Use of appropriate fungicides / Removal of diseased plant parts.\n");
       }
       else if(dis==dise2_Bacterialdisease){
       printf("SOLUTION FOR 'Bacterial disease' :\n\n");
       printf("\tremoval of diseased plants from the field. Use of a field not planted with plants of the genus Solanaceae in previous seasons.\n\tAdoption of crop rotation. At the same time as organic fertilizers.\n");
       }
       else if(dis==dise3_Viraldisease){
       printf("SOLUTION FOR 'Viral disease' :\n\n");
       printf("\tUse of insecticides to control viral vectors. / Balanced use of chemical fertilizers / Not planting chillies with Solanaceae plants.\n");
       }
       else
        printf(" Incorrect Disease Number");

    }
    if(x==2){
        printf("\nVEGETABLE NAME : Eggplant\n");
        printf("\n");

       if(dis==dise4_Entrancedisease){
       printf("SOLUTION FOR 'Entrance disease' :\n\n");
       printf("keeping the plantation clean. Humidity and temperature control.\n Recommended use of fungicides.\n");
       }
       else if(dis==dise5_Okravaricellavirus){
       printf("SOLUTION FOR 'Okravari cellavirus' :\n\n");
       printf("Use of okra extract. Removal of diseased plants.\n Use of recommended seeds and resistant varieties. Disease control by IPM.\n");
       }
       else
        printf(" Incorrect Disease Number");
    }
	if(x==3){
	   printf("\nVEGETABLE NAME : Beans\n");

       printf("\n");
       if(dis==dise6_Diamolanfood){
       printf("SOLUTION FOR 'Diamolanfood' :\n\n");
       printf(" revitalizing beds. Removal of infected plants. At the seed treatment itself. Soil treatment.\n");
       }
       else if(dis==dise7_Rootrot){
       printf("SOLUTION FOR 'Rootrot' :\n\n");
       printf("Remove infected plants. Development of water vehicle. Use of soil treatments\n");
       }
	   else if(dis==dise8_Downymildew){
	   printf("SOLUTION FOR 'Downymildew' :\n\n");
       printf("Recommended fungicide use. Use of recommended pesticides.\n");
	   }
       else{
       printf(" Incorrect Disease Number");

       }
    }
	if(x==4){
	    printf("\nVEGETABLE NAME : Okra\n");

        printf("\n");
       if(dis==dise9_Pestdamage){
       printf("SOLUTION FOR 'Pest damage' :\n\n");
       printf("Use of appropriate pesticides.\n");
       }
       else if(dis==dise10_Fungaldisease){
       printf("SOLUTION FOR 'Fungal disease' :\n\n");
       printf("Use of appropriate fungicides.\n");
       }
	   else if(dis==dise11_Viraldisease){
	   printf("SOLUTION FOR 'Viral disease' :\n\n");
       printf("Removal of diseased plant parts. Recommended use of insecticides.\n");
	   }
       else
        printf(" Incorrect Disease Number");
    }
    if(x==5){
	    printf("\nVEGETABLE NAME : Tomato\n");

        printf("\n");
       if(dis==dise12_Fungaldiseases){
       printf("SOLUTION FOR 'Fungal diseases' :\n\n");
       printf("\tAdd a heaping tablespoon of baking soda, a teaspoon of vegetable oil, and a small amount of mild soap to a gallon of water and spray the tomato plants with this solution.\n");
       }
       else if(dis==dise13_Bacterialdiseases){
       printf("SOLUTION FOR 'Bacterial diseases' :\n\n");
       printf("\tUsing pathogen-free seed and disease-free transplants.\n");
       }
	   else if(dis==dise14_Viraldisease){
	   printf("SOLUTION FOR 'Viral disease' :\n\n");
       printf("\tRoguing or removing infected plants immediately from the garden may help reduce the incidence of disease on additional plants.\n");
	   }
       else
        printf("\t Incorrect Disease Number");

    }
}
void growingdetailsFunction(int vegicode,int daytotal)   // Growing Details Function definition
{

    if(vegicode==01){   //chillie
        if (0<daytotal && 14>daytotal){
        printf("Seed germination is happening in first 7 days.");
        printf("\nWe can\'t see any leaves or buds for first 7 days.");
        printf("\n2 leaves can be seen after 9-10 days.Here leaves are green colour.");
        }
        else if (14<=daytotal && 28>daytotal){
        printf("Leaves start to growing faster.\nIn first 5 days only 2-3 leaves can be seen and in the end of the day lapse range bout 3-4 inches tall and 6-10 leaves need to be growed.sprouting starts.");
        }
        else if (28<=daytotal && 42>daytotal){
        printf("Chilli seedlings can be seen in the first few days and starts flowering in the end of the time lapse.\n 20 - 30 leave need to be grown with good health conditions.");
        }
        else if (42<=daytotal && 56>daytotal){
        printf("1-1.5 foot tall plant can be observed with many leaves and many flowers.\nDay time leaves and flowers felt down and in the night leaves and flowers wake up. \nNeed more water in this stage. ");
        }
        else if (56<=daytotal && 70>daytotal){
        printf("matuaring takes place in this part of time and Some big plant with more leaves can be observed.");
        }
        else if (70<=daytotal && 84>daytotal){
        printf("Harvesting can be observed in this quata of time.");
        }
        else{
        printf("\nPLEASE ENTER CORRECT DATES DURATION");
        }
    }
    if(vegicode==02){  //Eggplant
        if (0<daytotal && 14>daytotal){
        printf("Seed germination is happening in first 7 days.\nWe can't see any leaves or buds for first 7 days.\n 2 leaves can be seen after 9-10 days. Here leaves are green colour.");
        }
        else if (14<=daytotal && 28>daytotal){
        printf("Leaves start to growing faster.\nIn first 5 days only 2-3 leaves can be seen and in the end of the day lapse range bout 3-4 inches tall and 6-10 leaves need to be growed.\nsprouting starts.");
        }
        else if (28<=daytotal && 42>daytotal){
        printf("plant is growing with branching");
        }
        else if (42<=daytotal && 56>daytotal){
        printf("Eggplant seedlings can be seen in the first few days and starts flowering in the end of the time lapse.\n 20 - 30 leave need to be grown with good health conditions.");
        }
        else if (56<=daytotal && 70>daytotal){
        printf("1-1.5 foot tall plant can be observed with many leaves and many flowers.\nMatuaring takes place in this part of time and Some big plant with more leaves can be observed.");
        }
        else if (70<=daytotal && 84>daytotal){
        printf("fruits can be observed in this quata of time. harvesting is possible after 85 days.");
        }
        else{
        printf("\nPLEASE ENTER CORRECT DATES DURATION");
        }
    }
    if(vegicode==03){  //Beans
        if (0<daytotal && 14>daytotal){
        printf("Seed germination is happening in first 7 days.\nWe can see 1-2 leaves or buds for first 7 days.3-4 leaves can be seen after 9-10 days. Here leaves are green colour.");
        }
        else if (14<=daytotal && 28>daytotal){
        printf("Leaves start to growing faster.In first 5 days only 3-4 leaves can be seen and in the end of the day lapse range about 5-6 inches long and 7-10 leaves need to be growed.sprouting starts.");
        }
        else if (28<=daytotal && 42>daytotal){
        printf("beans seedlings can be seen in the first few days and starts flowering in the end of the time lapse.\n20 - 30 leave need to be grown with good health conditions.Flowering starts.\n long plant can be observed.");
        }
        else if (42<=daytotal && 56>daytotal){
        printf("3-4 foot long plant can be observed with many leaves and many flowers.\nDay time leaves and flowers felt down and in the night leaves and flowers wake up. Need more water in this stage. \nMore and more branches need to beapear. You need to select a path to grow along.");
        }
        else if (56<=daytotal && 70>daytotal){
        printf("matuaring takes place in this part of time and Some big plant with more leaves can be observed.\n Small fruits can be see on branches.");
        }
        else if (70<=daytotal && 84>daytotal){
        printf("harvest your beans.");
        }
        else{
        printf("\nPLEASE ENTER CORRECT DATES DURATION");
        }
    }
    if(vegicode==04){ //Okra
        if (0<daytotal && 7>daytotal){
        printf("Seed germination is happening in first 7 days.We can see 1-2 leaves or buds for first 7 days.\n3 leaves can be seen after 9-10 days. Here leaves are green colour.");
        }
        else if (14<=daytotal && 28>daytotal){
        printf("Leaves start to growing faster.\nIn first 5 days only 3-4 leaves can be seen and in the end of the day lapse range about 5-6 inches tall and 4-5 leaves need to be growed.\nsprouting starts. \nWhen you germinate seeds much closer there will be some plants wilting due to lack of space.");
        }
        else if (28<=daytotal && 42>daytotal){
        printf("plants need to transplant with more space after 28 days gone. already 4-5 leaves will be there.");
        }
        else if (42<=daytotal && 56>daytotal){
        printf("about 6-9 inch plant can be seen and leaves will grow maturely. \nFlowering starts.");
        }
        else if (56<=daytotal && 70>daytotal){
        printf("grow matuarly and flowers appear with the time. seedlings can be seen");
        }
        else if (70<=daytotal && 84>daytotal){
        printf("We can harvest after 75 days.There will be ladies fingers on plants.");
        }
        else{
        printf("\nPLEASE ENTER CORRECT DATES DURATION");
        }
    }
    if(vegicode==05){ //Tomato
        if (0<daytotal && 14>daytotal){
        printf("Seed germination is happening in first 7 days.\nWe can see 1-2 leaves or buds for first 7 days.3-4 leaves can be seen after 9-10 days. Here leaves are green colour.");
        }
        else if (14<=daytotal && 28>daytotal){
        printf("Leaves start to growing faster.\nIn first 5 days only 5-6 leaves can be seen and in the end of the day lapse range bout 5-6 inches tall and 6-10 leaves need to be growed.\nsprouting starts.");
        }
        else if (28<=daytotal && 42>daytotal){
        printf("tomato seedlings can be seen in the first few days and starts flowering in the end of the time lapse.\n20 - 30 leave need to be grown with good health conditions.Flowering starts.");
        }
        else if (42<=daytotal && 56>daytotal){
        printf("1.5-2 foot tall plant can be observed with many leaves and many flowers.\nDay time leaves and flowers felt down and in the night leaves and flowers wake up.\n Need more water in this stage. More and more branches need to beapear.");
        }
        else if (56<=daytotal && 70>daytotal){
        printf("matuaring takes place in this part of time and Some big plant with more leaves can be observed. \nSmall fruits can be see on branches.");
        }
        else if (70<=daytotal && 84>daytotal){
        printf("Harvesting can be observed in this quata of time.");
        }
        else{
        printf("\nPLEASE ENTER CORRECT DATES DURATION");
        }
    }

}
