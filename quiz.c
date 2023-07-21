#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char name[50];
int score;

void intro();
void highest_score();
void start();
void help();
void contd();

int main()
{
    int choice = 0;

    printf("\n \t\t\t\t\t !!!!!!!!!QUIZ TIME!!!!!!!!!\n");

    printf("Press 1 to sstart the quiz.\n Press 2 to view score \n Press 3 to view the rules.\n Press 0 to exit\n.");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        intro();
        start();
        break;

    case 2:
        highest_score();
        contd();
        break;

    case 3:
        help();
        contd();
        break;

    default:
        printf("The quiz is been exited");
        exit(1);
    }
}

void contd()
{
    int choice;
    printf("Do you want to contine?\n(1)=yes?\n(2)=no?\n:-");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        start();
        break;
    default:
        exit(1);
        break;
    }
    return;
}

void intro()
{
    printf("\n\t\t\t **THE QUIZZZZ**\n");
    printf("\n---------------------------------------------------------------------------\n");
    printf("\n\t ***WELCOME\n");
    printf("\n\t\t TO \n");
    printf("\n\t\t\t THE \n");
    printf("\n\t\t\t\t QUIZ***\n");
    printf("\n---------------------------------------------------------------------------\n");
    printf("\n*So lets  test our general knowledge.*\n\n");
    printf("_______________________________________________________________________________\n");
    printf("************ALL THE BESTT**************\n");
    printf("_______________________________________________________________________________\n\n");

    printf("******RULES TO BE FOLLOWED********\n\n");
    printf("1:- THERE WILL BE TOTAL OF 20 QUESTIONS IN WHOLE QUIZ .\n");

    printf("2:- YOU WILL BE ASKED TO PRESS 1 TO START THE GAME \t  PRESS 2 TO VIEW YOUR SCORE \t PRESS 3 FOR HELP \t PRESS  4 TO EXIT \n");

    printf("3:- ALL THE QUESTIONS WOULD BE BASED ON GENERAL KNOWLDEDGE.\n");

    printf("4:- EACH CORRECT QUESTION CONSIST OF 5 POINTS  AND WRONG ANSWER CONSIST OF 0 POINTS,THUS TOTAL THE QUIZ WOULD BE OF 100 POINTS.\n");

    printf("5:- YOU HAVE TO ANSWER ALL THE QUESTIONS AND AT THE THE END ACCORDINGLY YOUR POINTS WOULD DISPLAY\n\n\n");

    printf("IF YOU ARE CLEAR WITH THE GAME RULES , THEN LET'S CONTINUE WITH THE QUIZ........\n");

    printf("_________________________________________________________________________________________________\n\n\n\n");

    contd();
}

void help()
{

    printf("******RULES TO BE FOLLOWED********\n\n");
    printf("___________________________________________________________________________________________________\n\n");
    printf("1:- THERE WILL BE TOTAL OF 20 QUESTIONS IN WHOLE QUIZ .\n");

    printf("2:- YOU WILL BE ASKED TO \t PRESS 1 TO START THE GAME \t  PRESS 2 TO VIEW YOUR SCORE \t PRESS 3 FOR HELP \t PRESS  4 TO EXIT \n");

    printf("3:- ALL THE QUESTIONS WOULD BE BASED ON GENERAL KNOWLDEDGE.\n");

    printf("4:- EACH CORRECT QUESTION CONSIST OF 5 POINTS  AND WRONG ANSWER CONSIST OF 0 POINTS\n");
    printf("5:-YOU HAVE TO CHOOSE APPROPRIATE ANSWER FROM THE GIVEN OPTIONS AND ENTER 1,2,3,4 AS PER THE REQUIREMENT..");
    printf("6:- EACH CORRECT QUESTION CONSIST OF 5 POINTS  AND WRONG ANSWER CONSIST OF 0 POINTS,THUS TOTAL THE QUIZ WOULD BE OF 100 POINTS.\n");

    printf("IF YOU ARE CLEAR WITH THE GAME RULES , THEN LET'S CONTINUE WITH THE QUIZ.\n\n\n");
    printf("___________________________________________________________________________________________________\n");
}

void start()
{
    int answer;
    int count = 0;
    int choice;

    FILE *fp;

    if ((fp = fopen("\\quiz.txt", "a")) == NULL)
    {
        printf("!!!!!!!!!!!!ERRORR!!!!!!!!!!!!!!\n");
        printf("TRY AGAIN...........");
    }
    else
    {
        printf("\n Please enter your name:-\n");
        scanf("%s", &name);
    }

    printf("\n________________________________________________________________\n\n");
    printf("WELCOME!!!,  %s  TO THE QUIZ ROOM\n\n");
    printf("LET'S BEGIN!!!!!!!!!--------->\n");
    printf("_________________________________________________________________________\n\n");

    printf("Q1\nHow cyclotrimethylenetrinitroamine usually a plastic explosive commonly known as?\n(1)RDX\n(2)Cyclonite\n(3)Hexoogn\n(4)All of these\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (1) RDX.\n \n");
    }

    printf("Q2\nSirocco is a hot wind from.....?\n(1)Indian ocean\n(2)Arabian sea\n(3)Sahara desert\n(4)Galpagos Island\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (3) Sahara desert.\n");
    }

    printf("Q3\nWhich animal remains blind for weeks after birth?\n(1)platypus\n(2)Bear\n(3)Hedgehog\n(4)Aramdillo\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (1)Platypus .\n");
    }

    printf("Q4\nWhich is the least populated state of India?\n(1)Nagaland\n(2)Kerala\n(3)Sikkim\n(4)Himachal Pradesh\n  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (3)Sikkim \n");
    }

    printf("Q5\nWho is considered to be the greatest footballer of all time?\n(1)Maradona\n(2)Zinediene Zidane\n(3)pele\n(4)David Beckham\n  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (3)pele \n");
    }

    printf("Q6\nWhich Indian State produces the largest amount of salt?\n(1)Tamil Nadu\n(2)Gujrat\n(3)Kerala\n(4)Maharashtra\n  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer= (2)Gujrat .\n");
    }

    printf("Q7\nWhat is the speed of a free falling object?\n(1)9.8 m/s^2\n(2)9.8 km/min\n(3)9.8 m/s\n(4)62 km/hr\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (1)9.8m/s^2 .\n");
    }

    printf("Q8\nWhich planet in the solar system is nearest from the sun?\n(1)Mercury\n(2)Earth\n(3)Saturn\n(4)Pluto\n");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (4)Mercury .\n");
    }

    printf("Q9\nWhich is the largest mammal existing on the earth?\n(1)Dolphin\n(2)Blue Whale\n(3)Tiger\n(4)Elephant\n  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (2)Blue Whale \n");
    }

    printf("Q10\nIn UNICEF 'C' stands for....?\n(1)Council\n(2)Co-operation\n(3)Company\n(4)Children's\n");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 4)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer =(4) Children's .\n");
    }

    printf("Q11\nWhich is India's largest IT's and ITE's company?\n(1)TCS\n(2)Cognizant\n(3)Wipro\n(4)Infosys\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (1) TCS.\n");
    }

    printf("Q12\nWho was the first Indian to go to space?.\n(1)Vikram Ambalal\n(2)Ravish Malhotra\n(3)Rakesh Sharma\n(4)Nagapathi Bhat.\n  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (3)Rakesh Sharma .\n");
    }

    printf("Q13\nWho among the following was the first  Indian man to climb MOUNT EVEREST without supplemental oxygen?\n(1)Junko Tabei\n(2)Reinhold Messnr\n(3)Duncan Chessell\n(4)Autar Singh CHeema\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 4)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer =(4)Autar Singh CHeema .\n");
    }

    printf("Q14\n How many Time Zones are there in Russia?\n(1)10\n(2)5\n(3)11\n(4)2\n. ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer =(3) 11 \n");
    }

    printf("Q15\nWhats the smallest country in the world?\n(1)India\n(2)Bangladesh\n(3)Italy\n(4)The Vatican City\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 4)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer =(4)The Vatican City .\n");
    }

    printf("Q16\nWhat is the slang name for New York City?\n(1)Atlanta\n(2)Michelangelo\n(3)Bansky\n(4)Gotham\n.  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 4)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (4) Gotham\n");
    }

    printf("Q17\nWho invented the World Wide Web and when?\n(1)Thomas Edison,1990\n(2)Einstien,1953\n(3)Tim Berners-Lee,1990.\n(4)Vasco Da Gama,1991\n ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (3)Tim Berners-Lee,1990.\n");
    }

    printf("Q18\nWhen was Netflix Founded?\n(1)1997\n(2)2001\n(3)2009\n(4)2010\n");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (1)1997.\n");
    }

    printf("Q19\nWhat was the clothing company NIKE originally called?\n(1)Beblue\n(2)Blue RIbbon Sports\n(3)Scavengers\n(4)flash\n  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer =(2)Blue Ribbon Sports .\n");
    }

    printf("Q20\nWhich of the following empires had no written languages?\n(1)Incan\n(2)Roman\n(3)Aztec\n(4)Egyptian\n  ");
    printf("Answer:-");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("yuhuuuu!!! correct answer!! you score +5 points for this.\n");
        count++;
    }
    else
    {
        printf("oops!!! it's a wrong answer.\n correct answer = (1) Incan .\n\n");
    }

    printf("_______________________________________________________________________________________\n");
    printf("_______________________________________________________________________________________\n\n");

    printf("!!!!!!!!THANKYOU FOR PLAYING THIS QUIZ!!!!!!!!\n");

    printf("________________________________________________________________________________________\n");
    printf("__________________________________________________________________________________________\n");

    score = count * 5;

    printf(" %s ,Your score is %d points\n", &name, score);
    fprintf(fp, "%s %d ", &name, score);
    fclose(fp);
}

void highest_score()
{
    FILE *fp;
    if ((fp = fopen("\\quiz.txt", "r")) == NULL)
    {
        printf("No games played yet.\n");
    }
    else
    {
        printf("\n--------------------SCORE TIME--------------------\n\n");
        printf("\nNAME\t\t\t\t\t\t\t\t\t\tPOINTS\n");

        printf("______________________________________________________________________________________________________\n\n");
        printf("______________________________________________________________________________________________________\n\n");

        while (fscanf(fp, "%s %d", &name, &score) != EOF)
        {
            printf("%s\t\t\t\t\t\t\t\t\t\t%d\n\n\n", &name, score);
            printf("\n__________________________________________________________________________________________________\n\n");
        }
        fclose(fp);
        printf("\n--------------------------THANKYOU FOR PLAYING THE QUIZ!!-------------------------------\n\n-------------------------------HOPE YOU ENJOYED---------------------------------------\n\n\n");
    }

    return;
}
