#include <stdio.h>

typedef struct
{
	double real;
	double imagin;
} complnum;

complnum compladd(complnum num1, complnum num2)
{
	complnum addresult;
	addresult.real = num1.real+num2.real;
	addresult.imagin = num1.imagin+num2.imagin;
	
	return addresult;
}

complnum complmul(complnum num1, complnum num2)
{
	complnum mulresult;
	mulresult.real = num1.real*num2.real - num1.imagin*num2.imagin;
	mulresult.imagin = num1.imagin*num2.real + num1.real*num2.imagin;
	
	return mulresult;
}

int main(void)
{
	complnum numarr[2];
	
	for(int i=0; i<2; i++){
		printf("복소수 입력%d[실수 허수]: ", i+1);
		scanf("%lf %lf", &numarr[i].real, &numarr[i].imagin);
	}
	
	complnum addresult = compladd(numarr[0], numarr[1]);
	complnum mulresult = complmul(numarr[0], numarr[1]);
	
	printf("합의결과: 실수부 %f, 허수부 %f\n", addresult.real, addresult.imagin);
	printf("곱의결과: 실수부 %f, 허수부 %f\n", mulresult.real, mulresult.imagin);

}