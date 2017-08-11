#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>


float algebrakvuds(float alkv1, float alkv2);
float algebrakvud1(float alkv1, float alkv2);
float algebrakvud2(float alkv1, float alkv2 );
float algebrakub1(float alkb1, float alkb2);
float algebrakub2(float alkb1, float alkb2);
float algebrakub3(float alkb1, float alkb2);
float algebrakub4(float alkb1, float alkb2);


//Алгебра
float alkv1, alkv2, alkvr;
float alkb1, alkb2, alkbr;





int alg1()
{
	printf("Чему равно первое число ?\n");
		scanf("%f", &alkv1);
		printf("Чему равно второе ?\n");
		scanf("%f", &alkv2);
		printf("Получилось:");
		printf("%f", alkvr=algebrakvuds( alkv1, alkv2 ));
		
	return 0; 
}


int alg2()
{
	printf("Чему равно первое число ?\n");
		scanf("%f", &alkv1);
		printf("Чему равно второе ?\n");
		scanf("%f", &alkv2);
		printf("Получилось:");
		printf("%f", alkvr=algebrakvud1( alkv1, alkv2 ));
	
	return 0;
	
}



int alg3()
{
	printf("Чему равно первое число ?\n");
		scanf("%f", &alkv1);
		printf("Чему равно второе ?\n");
		scanf("%f", &alkv2);
		printf("Получилось:");
		printf("%f", alkvr=algebrakvud2( alkv1, alkv2 ));
	
	return 0;
}




int alg4()
{
	printf("Чему равно первое число ?\n");
		scanf("%f", &alkb1);
		printf("Чему равно второе ?\n");
		scanf("%f", &alkb2);
		printf("Получилось:");
		printf("%f", alkbr=algebrakub1( alkb1, alkb2 ));
	
		return 0;
}




int alg5()
{
	printf("Чему равно первое число ?\n");
		scanf("%f", &alkb1);
		printf("Чему равно второе ?\n");
		scanf("%f", &alkb2);
		printf("Получилось:");
		printf("%f", alkbr=algebrakub2( alkb1, alkb2 ));
return 0;
	
}



int alg6()
{

printf("Чему равно первое число ?\n");
		scanf("%f", &alkb1);
		printf("Чему равно второе ?\n");
		scanf("%f", &alkb2);
		printf("Получилось:");
		printf("%f", alkbr=algebrakub3( alkb1, alkb2 ));

	return 0;
}




int alg7()
{

printf("Чему равно первое число ?\n");
		scanf("%f", &alkb1);
		printf("Чему равно второе ?\n");
		scanf("%f", &alkb2);
		printf("Получилось:");
		printf("%f", alkbr=algebrakub4( alkb1, alkb2 ));

	return 0;
}


float algebrakvuds(float alkv1, float alkv2)
{
	alkvr=(alkv1 + alkv2) * (alkv1 - alkv2);
	
	return(alkvr);
}


float algebrakvud1(float alkv1, float alkv2)
{
	alkvr=alkv1 * alkv1 + 2 * alkv1 * alkv2 + alkv2 * alkv2;
	
	return(alkvr);
}



float algebrakvud2(float alkv1, float alkv2)
{
	alkvr=alkv1 * alkv1 - 2 * alkv1 * alkv2 + alkv2 * alkv2;
	
	return(alkvr);
}



float algebrakub1(float alkb1, float alkb2)
{
	
	alkbr=alkb1 * alkb1 * alkb1 + 3 * alkb1 * alkb1 * alkb2 + 3 * alkb1 * alkb2 +alkb2 + alkb2 * alkb2 * alkb2;
	
	return(alkbr);
	
}

float algebrakub2(float alkb1, float alkb2)
{
	
	alkbr=alkb1 * alkb1 * alkb1 - 3 * alkb1 * alkb1 * alkb2 + 3 * alkb1 * alkb2 * alkb2 - alkb2 * alkb2 * alkb2;
	
	return(alkbr);
	
}


float algebrakub3(float alkb1, float alkb2)
{
	
	alkbr=(alkb1 + alkb2) * (alkb1 * alkb1 + alkb1 * alkb2 + alkb2 * alkb2 );

	return(alkbr);
	
}

float algebrakub4(float alkb1, float alkb2)
{
	
	alkbr=(alkb1 + alkb2) * (alkb1 * alkb1 + alkb1 * alkb2 + alkb2 * alkb2 );

	return(alkbr);
	
}





