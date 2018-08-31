#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
int main ()
{      int amount=10000,num[25],aty[25],n,total=0,i, r,d,sum=0;
        char ans[5];
        
struct info
{ int  age;
  char name[12]; }; 
struct quesset
{  char quesstate[999];
   int answer;};
struct quesset acsess[11]={{"When the popular sitcom 'taarak mehata ka oolta chashma' started?\n  \t\t\t1)2008\t\t2)2009\n  \t\t\t3)2013\t\t4)1990\n",1}
,{"In how many number of states the NDA parties are rulling?\n  \t\t\t1)21\t\t2)23\n  \t\t\t3)15\t\t4)4\n",1}
,{"What are the latest icc test rankings of Virat Kholi?\n  \t\t\t1)2\t\t2)4\n  \t\t\t3)1\t\t4)5\n",3},{"Study of the universe is known as____?\n  \t\t\t1)Geography\t\t2)Allopathy\n  \t\t\t3)Univerography\t\t4)Cosmology\n",4}
,{"What is the constitutional name of 'Right to Equqlity'?\n  \t\t\t1)Article 14-18\t\t2)Article 19-22\n  \t\t\t3)Article 23-24\t\t4)Article 25-28\n",1}
,{"What is the year of establishment of Bombay Highcourt?\n  \t\t\t1)2013\t\t2)1875\n  \t\t\t3)1862\t\t4)2001\n",3},
{"Who was the Mr.World 2016?\n  \t\t\t1)Bezwada wilson\t\t2)Rohit Khandelwala\n  \t\t\t3)Han kang\t\t4)Sanjay Leela\n",2},
{"With which sport 'Azlan Shah Cup' associated?\n  \t\t\t1)Tennis\t\t2)Cricket\n  \t\t\t3)Hockey\t\t4)Foot ball\n",3},
{"Name the frist flower finnaly bloomed in outerspace?\n  \t\t\t1)Zinna\t\t2)Zecera\n  \t\t\t3)Sounia\t\t4)Rose\n",1},
{"Who is 'Heavy Industries & Public Enterprises' minister of india?\n  \t\t\t1)Jual Oram\t\t2)Anant Geeta\n  \t\t\t3)Uma Bharti\t\t4)UK Sinha",2},
{"What is the growth rate of India during 1951-56?\n  \t\t\t1)4.5%\t\t2)2.1%\n  \t\t\t3)3.6%\t\t4)7.2%\n",3}};



struct info prof; 
         
while(1) {           

   printf("                                    ISHAN GAMBHIR'S\n");
   printf("                            *    *      *****       *******\n");
   printf("                            *  *        *   *       *\n");
   printf("                            **          *****       *\n");
   printf("                            *  *        *   *       *\n");
   printf("                            *    *      *****       *******\n");
   printf("                            \a Koun .\a Banega .\a Carorepati\n");
   printf("                      \v \a Welcome! To India's biggest game show\n");
sys:   
printf("\v\v Use the following keywords to proceed:\n");
   printf("...'S'...to start the NEW GAME                              ...'R'...to view RULES\n");
   printf("                                 ...'X'...to EXIT\n");
   printf("\vEnter your response here: ");
   scanf("%s",&ans[0]);
    ans[0]= toupper(ans[0]); if(ans[0]!='X' && ans[0] != 'R' && ans[0] !='S'){printf("Read the following information carefully\n"); goto sys;}
   if(ans[0]=='X'){printf("Oh!you are leaving just after starting page\n");break;}
   if(ans[0]=='R') {
   printf("                 \v         WELCOME TO RULES SECTION\n") ;
   printf("\v1.Game is fully based on your GK means all the questions\n  are supposed to check your general knowledge.\n"); 
   printf("\v2.Rules are easy there are total 15 question with four o-\n  ptions each with only one correct answer.\n");
   printf("\v3.For each correct answer you will win desired amount and\n  incorrect answer at any stage will make you lose the ga-\n  me and you are not allowed to continue.\n");
   printf("\v4.You are allowed to quit the game at any point before you\n  select any option.\n");
   printf("\v5.Besides this you have two life lines in total for the w-\n  hole game once used life line can't be used again.\n");
   printf("\v6.Once you loose you will lose all the amount .\n");
mam:   
printf("\v\v\a Enter 'Q' to reurn to start page\n");
   printf(" Give your response here: ");
      scanf("%s",&ans[1]);
 ans[1]=toupper(ans[1]); if(ans[1] != 'Q'){printf("Read the following information carefully\n"); goto mam;}}
   if (ans[1]=='Q'){
sos:
printf("\v Use the following keywords to proceed:\n");
printf("...'S'...to start NEW GAME     ...'X'...to EXIT\n");
printf("Enter your response here: ");
scanf("%s",&ans[2]); ans[2]=toupper(ans[2]);   if(ans[2]!='S' && ans[2]!='X'){printf("Read carefully\n");goto sos;}}
if(ans[2]=='X') {printf("\aHopping you like it!\n");break;}
   if (ans[0]=='S' || ans[2]=='S') {
   printf("                  \v\v\aWELCOME TO PERSONAL DETAILS\n");
   printf("                           SECTION\n");
   printf("            \v *No need to surprise we need some of your\n");
   printf("                      details before we start.\n");
   printf("Enter your good name: ");
   scanf("%s",prof.name);
   printf("Enter your age: ");
   scanf("%d",&prof.age);
   printf("          \vThanks for your coperation.Your game is just going\n");
   printf("                            to start.\n");
   printf("             \v\v\a   WELCOME TO INSTRUCTIONS\n");
   printf("                              ZONE\n");
   printf("\v\vIMPORTANT INSTRUCTIONS:\n");
   printf("\v1.There is no case of upper and lower case .i.e 'a' & 'A' are treated as same.\n");
   printf("\v2.Putting any athor integer as a answer expect 1,2,3,4 will be treated as wro-\n  ng answer.\n");
   printf("\v3.Every question appear on you screen is of following format:\n  (Ques no.) (Ques statement).\n");
   printf("\v4.Winning amount desired for each question is given aside of every question.\n");
   printf("\v5.For rest of the instructions refer to the rules section.\n");
   printf("\v\v  Use the following keywords to proceed\n");
   printf("...'C'...to VIEW FIRST QUESTION                 ...'R'...to return to RULES SECTION\n");
   printf("                              ...'X'...to EXIT\n");
   printf("\v  Give your response here: ");
   scanf("%s",&ans[3]); ans[3]=toupper(ans[3]);}
   if (ans[3]=='R'){
    printf("\v\a         WELCOME TO RULES SECTION\n") ;
   printf("\v1.Game is fully based on your GK means all the questions\n  are supposed to check your general knowledge.\n"); 
   printf("\v2.Rules are easy there are total 15 question with four o-\n  ptions each with only one correct answer.\n");
   printf("\v3.For each correct answer you will win desired amount and\n  incorrect answer at any stage will make you lose the ga-\n  me and you are not allowed to play more.\n");
   printf("\v4.You are allowed to quit the game at any point before you\n  select any option.\n");
   printf("\v5.Besides this you have two life lines in total for the w-\n  hole game once used life line can't be used again.\n");
   printf("\v8.Other wise once you loose you will lose all the amount .\n");
   printf("\v\v  Press 'S' to continue:\n");
   scanf("%s",&ans[4]); ans[4]=toupper(ans[4]);} if (ans[3]=='X') {break; }
   if (ans[3]=='C' || ans[4]=='S'){printf("\vYour question set  is building it might take few seconds...\n\v");
    
   here:
        for(n=0,i=0;n<=(10);i++,n++) { num[n]=i;}
      srand(time(0));
      for(i=(10);i>=0;--i) { r=((rand()%(10)+1)); num[r]=i;num[i]=r; } 

     for(n=0;n<=(10);n++) {for(i=0;i<n;i++){if(num[n]==num[i]){goto here;}} }
      n=1;
       while(n<=(10)){
    
   



     printf("\t\t\tQues %d.",n);
   printf("\a%s\n  winning ammount:RS.%d\n   enter your response(8 is life line to skip this question for only 1st use):",acsess[num[n]].quesstate,amount);
   scanf("%d",&aty[n]);
   if(aty[n]==acsess[num[n]].answer){total+=amount; if(n<(10)){printf("\t\t\tCorrect answer!          account status:%d\n",total);}
    if(n==(10)){printf("\t\t\t\t\aYOU WON!    account status:RS.%d\n",total);goto sos;}}
   if(aty[n]!=acsess[num[n]].answer){if(aty[n]==8){
for(d=1;d<n;d++){if(aty[d]!=8){sum+=1;}}if(sum==(n-1)){goto my;}if(sum==0){printf("Since it is already used,it is considered as worng.\n");goto asd;}}
else
{
asd:
total=0;printf("\t\t\t\a\aWorng answer!   correct answer is %d         account status:%d\n\t\t\t\tYOU LOOSE\n",acsess[num[n]].answer,total);goto sos;}} 
my:
n++;}
   }break;}
   return 0;
   }
