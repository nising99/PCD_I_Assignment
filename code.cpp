#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

void menu();
void selection();

void main()
{
	menu();
	system("pause");
	system("cls");
	selection();
}
void menu()
{
	printf(" ============================================================================= \n");
	printf("|                                                                             |\n");
	printf("|  @@@@           @@@@         @@@@@       @@@@@@@@@@@@@@@@  @@@@       @@@@  |\n");
	printf("|  @@@@@         @@@@@        @@@@@@@      @@@@@@@@@@@@@@@@  @@@@       @@@@  |\n");
	printf("|  @@@@@@       @@@@@@       @@@   @@@           @@@@        @@@@       @@@@  |\n");
	printf("|  @@@ @@@     @@@ @@@      @@@     @@@          @@@@        @@@@@@@@@@@@@@@  |\n");
	printf("|  @@@  @@@   @@@  @@@     @@@@@@@@@@@@@         @@@@        @@@@@@@@@@@@@@@  |\n");
	printf("|  @@@   @@@ @@@   @@@    @@@         @@@        @@@@        @@@@       @@@@  |\n");
	printf("|  @@@    @@@@@    @@@   @@@           @@@       @@@@        @@@@       @@@@  |\n");
	printf("|  @@@     @@@     @@@  @@@             @@@      @@@@        @@@@       @@@@  |\n");
	printf("|                     @@@@@@@@@@@@   @@@@@@@@                                 |\n");
	printf("|                          @@       @@      @@          @@@@                  |\n");
	printf("|                          @@      @@        @@         @@@@                  |\n");
	printf("|                          @@      @@        @@     @@@@@@@@@@@@              |\n");
	printf("|                          @@      @@        @@     @@@@@@@@@@@@              |\n");
	printf("|                          @@      @@     @@ @@         @@@@                  |\n");
	printf("|                          @@       @@      @@          @@@@                  |\n");
	printf("|                     @@@@@@@@@@@@   @@@@@@@@ @@                              |\n");
	printf("|                                                                             |\n");
	printf(" ============================================================================= \n");
}
void selection()
{//0
		int choice;
		do
		{
			printf("\t\t\t1. Addition\n");
			printf("\t\t\t2. Subtraction\n");
			printf("\t\t\t3. Multiplication\n");
			printf("\t\t\t4. Exit\n ");
			printf("\t\t\tSelect your choice > ");
			scanf("%d", &choice);
			system("cls");
		} while (choice > 4);
	switch (choice)
	{//1
	case 1:
	{//2
		int choice2;
		
		printf("\t\t\t1. Beginner\n");
		printf("\t\t\t2. Intermediate\n");
		printf("\t\t\t3. Advanced\n");
		printf("\t\t\tAny number. Choice\n");
		printf("\t\t\tSelect the level > ");
		scanf("%d", &choice2);
		system("cls");
		switch (choice2)
		{//3
		case 1:
		{//8
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//a
				printf("\t\t\t%d + %d = ", num1 = rand() % 21, num2 = rand() % 21);//0-20
				scanf("%d", &answer);
				if (answer == num1 + num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//a
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//8
			break;
		case 2:
		{//9
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//b
				printf("\t\t\t%d + %d = ", num1 = rand() % 40+11, num2 = rand() % 40+11);//11-50
				scanf("%d", &answer);
				if (answer == num1 + num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//b
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//9
			break;
		case 3:
		{//10
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//c
				printf("\t\t\t%d + %d = ", num1 = rand() % 45+51, num2 = rand() % 45+51);//51-95
				scanf("%d", &answer);
				if (answer == num1 + num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//c
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//10
			break;
		default:
			system("cls");
			selection();
		}//3
	}//2
		break;
	case 2:
	{//4
		int choice2;
		
		printf("\t\t\t1. Beginner\n");
		printf("\t\t\t2. Intermediate\n");
		printf("\t\t\t3. Advanced\n");
		printf("\t\t\tAny number. Choice\n");
		printf("\t\t\tSelect the level > ");
		scanf("%d", &choice2);
		system("cls");
		switch (choice2)
		{//5
		case 1:
		{//11
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//d
				printf("\t\t\t%d - %d = ", num1 = rand() % 21, num2 = rand() % 21);//0-20
				scanf("%d", &answer);
				if (answer == num1 - num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//d
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//11
			break;
		case 2:
		{//12
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//e
				printf("\t\t\t%d - %d = ", num1 = rand() % 40+11, num2 = rand() % 40+11);//11-50
				scanf("%d", &answer);
				if (answer == num1 - num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//e
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//12
			break;
		case 3:
		{//13
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//f
				printf("\t\t\t%d - %d = ", num1 = rand() % 45 + 51, num2 = rand() % 45 + 51);//51-95
				scanf("%d", &answer);
				if (answer == num1 - num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//f
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//13
			break;
		default:
			system("cls");
			selection();
		}//5
	}//4
		break;
	case 3:
	{//6
		int choice2;
	
		printf("\t\t\t1. Beginner\n");
		printf("\t\t\t2. Intermediate\n");
		printf("\t\t\t3. Advanced\n");
		printf("\t\t\tAny number. Choice\n");
		printf("\t\t\tSelect the level > ");
		scanf("%d", &choice2);
		system("cls");
		switch (choice2)
		{//7
		case 1:
		{//14
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//g
				printf("\t\t\t%d x %d = ", num1 = rand() % 21, num2 = rand() % 21);//0-20
				scanf("%d", &answer);
				if (answer == num1 * num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//g
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//14
			break;
		case 2:
		{//15
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//h
				printf("\t\t\t%d x %d = ", num1 = rand() % 21+30, num2 = rand() % 21+40);//30-50//40-60
				scanf("%d", &answer);
				if (answer == num1 * num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//h
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//15
			break;
		case 3:
		{//16
			int answer, num1, num2, question, a=0;
			srand(time(NULL));
			for (question = 1; question <= 5; question++)
			{//i
				printf("\t\t\t%d x %d = ", num1 = rand() % 21+40, num2 = rand() % 21+50);//40-60//50-70
				scanf("%d", &answer);
				if (answer == num1 * num2)
				{
					printf("\t\t\tYour answer is correct!\n");
					a++;
				}
				else
					printf("\t\t\tYour answer is wrong!\n");
				system("pause");
				system("cls");
			}//i
			if (a > 2)
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNice try, player!\n");
			}
			else
			{
				printf("\t\t\tResult : %d/5\n", a);
				printf("\t\t\tNever give up, player!\n");
			}
			system("pause");
			system("cls");
			selection();
		}//16
			break;
		default:
			system("cls");
			selection();
		}//7
	}//6
		break;
	case 4:
		printf("\t\t\tThanks for playing.\n");
		system("pause");
		break;
	default:
		selection();
	}//1
}//0
