#include "pch.h"
#include <iostream>
#include<stdio.h>
#include<math.h>
#include <locale.h>
//Прототипы функций дальше в теле буду прописывать функционал а какие то пропишу сразу
char getRank(int rank); //РанГ карты 
char getMast(int mast);//Масть карты 
void getFirstHand(int cardRank[], int cardMast[]); //Функция выдачи карт 
int getBet();
char MAPA(int a)
{
	int a1;
	for (a1 = 1; a1 < a; a1++)
	{
		printf("Starshay karta - Разные 5 карт\n");
		printf("Para - 2 карты одинакого номинала(5, 5) (K and K)\n");
		printf("Set - 3 карты одинакого наминала  (4, 4, 4) (D, D, D)\n");
		printf("Strit - 5 последовательно расположеных карт (3, 4, 5, 6, 7) (K, T, V, D, 10) \n");
		printf("Flesh - 5 карт одной масти \n");
		printf("Full Haus - 3 карты одного наминала и 2 других (3, 3, 3, V, V)\n");
		printf("Kare - 4 карты одного наминала (4, 4, 4, 4)\n");
		printf("Strit Flesh - Strit где все карты одной масти (3, 4, 5, 6, 7 все пики)\n");
		printf("Flesh Royal - Strit Flesh с картами от 10 до Туза (10, V, D, K, T, Все крести)\n");
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
int Cash;
int cheat;
int start;
int l, j;
int bet;
char mast, rank; //переменные создаем для масти и ранга;
int i;
int cardRankUser[2]; //Одно из 13 значение номинала player
int cardMastUser[2]; //Одно из 4 номиналов мастей player
int cardRankPC[2]; //То же самое но для ПК 
int cardMastPC[2]; // ТО же самое но для ПК
int StolRank[5]; //Те самые 5 карт на столе 
int StolfinalSuit[5]; //Те самые 5 карт на столе 5 рангов и 5 значение 
int main()
{
	setlocale(LC_ALL, "Rus");
	int komb;
	Cash = 100;
	printf(".......................................................................................................................\n");
	printf("..              Приветствую тебя в моей ахрененной игре под названием   ARKANA POKER EDITOR                          ..\n");
	printf("..    Для начала я попробую расказать пару правил и механик а дальше ты сам решишь как в это играть, хорошо?         ..\n");
	printf(".. Я думаю ДА, сначала делается ставка, послпе чего выдается 2 карты, и предлогается сделать ставки ты можеш         ..\n");
	printf(".. сделать ставку или оставить банк таким же, после чего на стол будут класть еще по одной карте пока их не станет 5 ..\n");
	printf(".. после каждой карты на столе ты можешь повысить ставки или сбросить карты есле не захочешь продолжать.             ..\n");
	printf(".. Но если вы все же решитесь поднять ставки ты обязуете своего противника так же поднять ставку, так же и в обратном..\n");
	printf(".. порядке если противник поднимет ставки вы будете обязаны либо ответить либо сбросить карты выигрывает тот у кого  ..\n");
	printf(".. будет лучшая комбинация карт, посмотреть комбинации вы сможете чуть позже, написав в поле ставка 777.             ..\n");
	printf(".. А и я забыл представиться меня зову  Copmuter Alex и я буду твоим противником                                     ..\n");
	printf(".......................................................................................................................\n\v");
	printf("Ты в любой момент можешь посмотреть комбинации написав в поле для ставки 777, попробуй...\n");
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

				Cheat(cheat, Cash);
				Cash += 1000;
				printf("Cash  = %d\n", Cash);
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
		printf("| Ах да еще же есть 10 она будет обозначена как D                                  |\n");
		printf(" ----------------------------------------------------------------------------------\n");
			do
			{
				bet = getBet();
				getFirstHand(cardRankUser, cardMastUser);
				{
					int l, j;
					int cardDup;
					for (l = 0; l < 5; l++)
					{
						cardDup = 0;
						do
						{
							cardRankUser[l] = (rand() % 13);
							cardMastUser[l] = (rand() % 4);
							for (j = 0; j < l; j++)
							{
								if ((cardRankUser[i] == cardRankUser[j]) && (cardMastUser[i] == cardMastUser[j]))
								{
									cardDup = 1;
								}
							}
						} while (cardDup == 1);
					}
				}

				char getMast(int mast); //у Здесь понятно кейс для масти...
				{
					switch (mast)
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
				char getRank(int rank);
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
				printf("Твои 2 карты\n");
				for (l = 0; l < 2; l++)
				{
					mast = getMast(cardMastUser[l]);
					rank = getRank(cardRankUser[l]);
					printf("Карта 1 %c%c\t Карта 2 %c%c", rank, mast);//Выдаем карты...
				}
				printf(" _____________\n");
				printf("|     СТОЛ    |\n");
				printf(" -------------\n");
			}

	
}
	else
	{
	if (start != 0)
	{
		printf("Ты ввел не правильно попробуй вновь.\n");
		printf("|  1||0 -   ");
		scanf_s("%d", &start);
		printf(" ____________________|\n");
	}
	int x, bin;
	for (x = 0; x < 40; x++)
	{
		printf("Delete fail %d\n", x);
		for (bin = 0; bin < 20; bin++)
		{
			printf("Delete bin %d\n", bin);
		}
	}
	printf("Досвидания тогда\n");
	printf("Windows delete\n");

	return 0;
	}

	return 0;
}
