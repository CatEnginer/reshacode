#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

float density( float md, float Vd);
float heavy( float mh );
float farxim(float roarx, float Varx);
float work1(float Fwork, float swork);
float work2(float Nwork, float twork);
float power(float An, float tn);
float kinetenerge(float menerg, float venerg);
float potentionener(float mpotener, float hpotener);




//Физика
float md, Vd, dens;
float mh, heav;
float roarx, Varx, arxim;
float Fwork, swork, workresult1;
float Nwork, twork, workresult2;
float An, tn, powerres;
float menerg, venerg, energeres;
float mpotener, hpotener, potenergi;


//Нужная перемменная для выбора
int choosework;
//Констата
float g = 9.8;





int phc1()
 {
	 printf("Введите данные...\nМасса:");
					scanf("%f", &md);
					printf("Обьем:");
					scanf("%f", &Vd);
					printf("Результат:");
					printf("%f", dens=density( md, Vd));
					return 0; 
}
 int phc2()
 {
	 printf("Введите данные...\nМасса:");
					scanf("%f", &mh);
					printf( "Ваш результат:");
					printf("%f",heav=heavy( mh )); 
					return 0;
}
 int phc3()
 {
	 printf("Введите данные...\nПлотность:");
					scanf("%f", &roarx);
					printf("Обьем:");
					scanf("%f", &Varx);
					printf("Получилось:");
					printf("%f", arxim=farxim( roarx, Varx));
					return 0;
}
 int phc4()
 {
	 printf("Будем работать...\nЧто нам известно ?\n");
					printf("1.Сила-расстояние\n2.Мощность-время\n");
					scanf("%d", &choosework);
					if (choosework == 1)
					{
						printf("Чему равна сила ?\n");
						scanf("%f", &Fwork);
						printf("Какого пройденное расстояние ?\n");
						scanf("%f", &swork);
						printf("Работа равна:");
						printf("%f", workresult1=work1(Fwork, swork));
					}
					else if (choosework == 2)
					{
						printf("Чему равна мощность ?\n");
						scanf("%f", &Nwork);
						printf("Затраченное время ?\n");
						scanf("%f", &twork);
						printf("Работа равна:");
						printf("%f", workresult2=work2(Nwork, twork));
					}
					else 
					{
						printf("Быть не может !");
					}
					return 0;
					}
 int phc5()
 {
	 printf("Чему равна работа ?\n");
					scanf("%f", &An);
					printf("Сколько затраченно времени ?\n");
					scanf("%f", &tn);
					printf("Получилось:");
					printf("%f", powerres=power(An, tn));
					return 0;
					}
 int phc6()
 { 
	 printf("Масса обьекта равна ?\n");
					scanf("%f", &menerg);
					printf("Чему равна скорость ?\n");
					scanf("%f", &venerg);
					printf("Кинетическая равна:");
					printf("%f", energeres=kinetenerge(menerg, venerg));
					return 0;
					}
 int phc7()
 {
	 printf("Чему равна масса ?\n");
					scanf("%f", &mpotener);
					printf("Высота/расстояние ?\n");
					scanf("%f", &hpotener);
					printf("Результат - ");
					printf("%f", potentionener(mpotener, hpotener));
					return 0;
}


//здесь определение функций..

float density(float md, float Vd)
{

	dens=md / Vd;

	return(dens);

}

float heavy(float mh)
{
	heav=mh * g;

	return(heav); 
}


float farxim(float roarx, float Varx)
{
	arxim=roarx * g * Varx;

	return(arxim);
}


float work1(float Fwork, float swork)
{

	workresult1=Fwork * swork;

	return(workresult1);

}


float work2(float Nwork, float twork)
{

	workresult2=Nwork * twork;

	return(workresult2);

}


float power(float An, float tn)
{
	powerres=An / tn;

	return(powerres);
}


float kinetenerge(float menerg, float venerg)
{
	energeres=menerg * (venerg * venerg) / 2;

	return(energeres);
}

float potentionener(float mpotener, float fpotener)
{
	potenergi=mpotener * fpotener * g;

	return(potenergi);
}











