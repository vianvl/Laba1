#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<stdlib.h>
#include <locale.h>
#define FALSE 0
#define TRUE 1
void printGreeting();
int getBet();
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);
void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[], int suitsinHand[]);
int analyzeHand(int ranksinHand[], int suitsinHand[]);
int komb;
int cheat;
int start;
char MAPA(int a)
{
	int a1;
	for (a1 = 1; a1 < a; a1++)
	{
		printf("Starshay karta - Разные 5 карт Умножение X0\n");
		printf("Para - 2 карты одинакого номинала(5, 5) (K and K)Умножение X1.5\n");
		printf("Set - 3 карты одинакого наминала  (4, 4, 4) (D, D, D) Умножение X2 \n");
		printf("Strit - 5 последовательно расположеных карт (3, 4, 5, 6, 7) (K, T, V, D, 10) Умножение X3\n");
		printf("Flesh - 5 карт одной масти Умножение X4\n");
		printf("Full Haus - 3 карты одного наминала и 2 других (3, 3, 3, V, V) Умножение X5\n");
		printf("Kare - 4 карты одного наминала (4, 4, 4, 4)\n");
		printf("Strit Flesh - Strit где все карты одной масти (3, 4, 5, 6, 7 все пики) Умножение X10\n");
		printf("Flesh Royal - Strit Flesh с картами от 10 до Туза (10, V, D, K, T, Все крести) Умножение X20\n");
		return a1 = 0;
	}
}
int Cheat(int cheat, int Cash)
{
	int S;
	for (S = 0; S < 1; S++)
	{
		printf("Вот тебе подарочек +1000\n");
	}
	return S = 0;
}
main()
{
	int bet;
	int bank = 100;
	int i;
	int cardRank[5];
	int cardSuit[5];
	int	finalRank[5];
	int finalSuit[5];
	int ranksinHand[13];
	int suitsinHand[4];
	int winnings;
	time_t t;
	char suit, rank, stillPlay;
	printGreeting();
	do
	{
		bet = getBet();
		srand(time(&t));
		getFirstHand(cardRank, cardSuit);
		printf("Твои 5 карт: \n");
		for(i=0; i<5; i++)
			{
				suit = getSuit(cardSuit[i]);
				rank = getRank(cardRank[i]);
				printf("Карта №%d: %c%c\n", i+1, rank, suit );
			}
		for (i = 0; i < 4; ++i)
		{
			suitsinHand[i] = 0;
		}
		for (i = 0; i < 13; ++i)
		{
			ranksinHand[i] = 0;
		}
	getFinalHand(cardRank[], cardSuit[], finalRank[], finalSuit[], ranksinHand[], suitsinHand[]);
	printf("Ваша последняя партия карт: \n");
	for (int i = 0; i < 5; ++i)
	{
		suit = getSuit(finalSuit[i]);
		rank = getRank(finalRank[i]);
		printf("Карта №%d: %c%c\n", i+1, rank, suit );
	}
	winnings = analyzeHand(ranksinHand, suitsinHand);
	printf("Вы выиграли %d!\n", bet*winnings );
	bank = bank - bet + (bet*winnings);
	printf("Хотите сыграть еще? \n");
	scanf_s("%c", &stillPlay);
	} while (toupper(stillPlay) == 'Y');
	return;
}	
void printGreeting()
{
	printf(".......................................................................................................................\n");
	printf("..              Приветствую тебя в моей ахрененной игре под названием   ARKANA POKER EDITOR                          ..\n");
	printf("..    Для начала я попробую расказать пару правил и механик а дальше ты сам решишь как в это играть, хорошо?         ..\n");
	printf(".. Я думаю ДА, сначала делается ставка, послпе чего выдается 2 карты, и предлогается сделать ставки ты можеш         ..\n");
	printf(".. сделать ставку или оставить банк таким же, после чего на стол будут класть еще 3 карты и будет виден итог         ..\n");
	printf(".. Если ты соберешь комбинацию твоя ставка увеличиться смотря какую комбинацию ты соберешь. Взглянуть на процент     ..\n");
	printf(".. увелечия ставки сможешь написав в поле ставка 777.                                                                ..\n");
	printf(".. А и я забыл представиться меня зову  Copmuter Alex и я буду твоим противником                                     ..\n");
	printf(".......................................................................................................................\n\v");
	printf(" ____________________\n");
	printf("|  Ставка - ");
	scanf_s("%d", &komb);
	printf(" ____________________|\n");
	do
	{
		if (komb == 777 || komb == 2800070)
		{
			switch (komb)
			{
			case 777:
			{
				int a = 2;
				MAPA(a);
				break;
			}
			case 2800070:

				Cheat(cheat, bank);
				bank += 1000;
				printf("bank  = %d\n", bank);
				break;
			}
			break;
		}

		else
		{
			printf("Ты не ввел 777, введи и взгляни на комбинации\n");
			printf(" ____________________\n");
			printf("|  Ставка - ");
			scanf_s("%d", &komb);
			printf(" ____________________|\n");
			if (komb == 777 || 2800070)
			{
				switch (komb)
				{
				case 777:
				{
					int a = 2;
					MAPA(a);
					break;

				}
				case 2800070:
				{
					Cheat(cheat, Cash);
					Cash += 1000;
					printf("Cash  = %d\n", Cash);
					break;
				}
				}
			}


		}
	} while (komb != 777 || komb != 2800070);

	printf("Ну что ты готов начать, если да клацай Yes = 1 . Exit = 0?\n");
	printf(" ____________________\n");
	printf("|  1||0 -   ");
	scanf_s("%d", &start);
	printf(" ____________________|\n");
	if (start == 1)
	{
		printf(" __________________________________________________________________________________\n");
		printf("|Так у нас есть 52 карты наминалом от 2-10 Валет = V Дама = D Король = K и Туз = T |\n");
		printf("|Каждая из них имеет одну из 4 мастей. Буби = B Пики = P Черви = H и Крести = K    |\n");
		printf("| Таким образом у карты будет 2 значения  BK -  B - Буби, K - Король все карты так |\n");
		printf("| 					ГЛАВНОЕ РАЗВЛЕКАЙСЯ ПОКА Я БУДУ МАЙНИТЬ                        |\n");
		printf(" ----------------------------------------------------------------------------------\n");
		void getFirstHand(int cardRank[], int cardSuit[])
		{
			int i, j;
			int cardDup;
			for (i=0; i<5; i++)
			{
				cardDup = 0;
				do
				{
					cardSuit[i] = (rand() % 13);
					cardSuit[i] =(rand() % 4);
					for (int j = 0; j < i; ++i)
					{
						if ((cardRank[i] == cardRank[j]) && cardSuit[i] == cardSuit[j])
						{
							cardDup = 1;
						}
					}
				}while(cardDup == 1);

			}
		}
	char getSuit(int suit)
		{
			switch (suit)
				{
				case 0:
				return ('P');
				case 1:
				return ('B');
				case 2:
				return ('K');
				case 3:
				return ('H');
				}
		}
	char getRank(int rank)
	{
		switch (rank)
			{
				case 0:
				return ('T');
				case 1:
				return ('2');
				case 2:
				return ('3');
				case 3:
				return ('4');
				case 4:
				return ('5');
				case 5:
				return ('6');
				case 6:
				return ('7');
				case 7:
				return ('8');
				case 8:
				return ('9');
				case 9:
				return ('10');
				case 10:
				return ('V');
				case 11:
				return ('D');
				case 12:
				return ('K');
			}
	}
int getBet()
{
	int bet;
	do
	{
		printf("Сколько ты желаешь поставить, вводи число от 1 - 20\n");
		printf("Ну или введи 0 если хочешь выйти из игры... \n"); 
		scanf_s("%d", &bet);
		if (bet>=1 && bet <=20)
		{	
			return(ber);
		}
		else if (bet == 0)
		{
			exit(1);
		}
		else
		{
			printf("Пожалуйста введи ставку от 1 - 20 или 0 что бы выйти из игры\n");
		}
	}while ((bet < 0) || (bet > 20));
}
int analyzeHand(int ranksinHand[], int suitsinHand[])
	{
		int num_consec = 0;
		int i, rank, suit;
		int strainght = FALSE;
		int flush = FALSE;
		int four = FALSE;
		int three = FALSE;
		int pairs = 0;
		for (int suit = 0; suit < 4 ; suit++)
			if (suitsinHand[suit] == 5)
				flush = TRUE;
			rank = 0;
			while (ranksinHand[rank] == 0)
				rank++;
			for(; rank < 13 && ranksinHand[rank]; rank++)
				num_consec++;
			if (num_consec == 5)
			{
				strainght = TRUE;
			}
		for (rank = 0; rank < 13 ; rank++)
			{
				if (ranksinHand[rank] == 4)
					four = TRUE;
				if (ranksinHand[rank] == 3)
					three == TRUE;
				if (ranksinHand[2] == 2)
					pairs++;
			}	
			if (strainght && flush)
			{
				printf("Феш рояль \n\n");
				return (20);
			}
			else if (four)
			{
				printf("Каре\n\n");
				return (10);
			}
			else if (three && pairs == 1)
			{
				printf("Фуллхаус\n\n");
				return (8);
			}
			else if (flush)
			{
				printf("Флеш \n\n");
				return (5);
			}
			else if (strainght)
			{
				printf("Стрит \n\n");
				return (4);
			}
			else if (three)
			{
				printf("Три одного типа \n\n");
				return (3);
			}
			else if (pairs == 2)	
			{
				printf("Две пары\n\n");
				return (2);
			}
			else if (pairs == 1)
			{
				printf("Пара \n\n");
				return (0);
			}
			else
			{
				printf("Старшая карта\n\n");
				return 0;
			}
	}
	void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[], int suitsinHand[]);
	{
		int i, j, cardDup;
		char suit, rank, ans;
		for (i = 0; i < 5 ; i++)
		{
			suit = getSuit(cardSuit[i]);
			rank = getRank(cardRank[i]);
			printf("ЖЕлаешь сохранить карту №%d: %c%c?\n", i+1, rank, suit);
				printf("Пожалуйста ответь Y||N :\n");
				scanf_s("%c", &ans);
				if (toupper(ans) == 'Y')
				{
					finalRank[i] = cardRank [i];
					finalSuit[i] = cardSuit[i];
					ranksinHand[finalRank[i]]++;
					ranksinHand[finalSuit[i]]++;
					continue;
				}
				else if (toupper(ans) == 'N')
				{
					cardDup = 0
					do
					{
						cardDup = 0 
						finalRank[i] = (rand() % 13);
						finalSuit[i] = (rand() % 4);
						for (j=0; j<5; j++)
						{
							if((finalRank[i] == cardRank[j]) && (finalSuit[i] == cardSuit[j]))
							{
								cardDup = 1;
							}
						}
						for (j = 0; j < i ; j++)
						{
							if ((finalRank[i] == cardRank[j]) && (finalSuit[i] == cardSuit[j]))
							{
								cardDup = 1;
							}
						}
					}while (cardDup == 1);
					ranksinHand[finalRank[i]]++;
					suitsinHand[finalSuit[i]]++;
				}	
		}
	}
return 0;
}


