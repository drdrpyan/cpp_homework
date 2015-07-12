#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Money클래스
class Money
{
public:
	Money();
	Money(double amount);
	Money(int theDollars, int theCents);
	Money(int theDollars);
	double getAmount() const;
	int getDollars() const;
	int getCents() const;
	void input();
	void output() const;
private:
	int dollars;
	int cents;

	int dollarsPart(double amount) const;
	int centsPart(double amount) const;
	int round(double number) const;
};

//전역함수기반 연산자 오버로딩
const Money operator +(const Money& amount1, const Money& amount2);
const Money operator -(const Money& amount1, const Money& amount2);
bool operator ==(const Money& amount1, const Money& amount2);
const Money operator -(const Money& amount);

//메인함수
//Money클래스 yourAmount, myAmount를 선언하고 둘을 비교, 합, 차를 출력
int main()
{
	Money yourAmount, myAmount(10, 9);
	cout << "Enter an amount of money: ";
	yourAmount.input();
	cout << "Your amount is ";
	yourAmount.output();
	cout << endl;
	cout << "My amount is ";
	myAmount.output();
	cout << endl;

	if(yourAmount == myAmount)
		cout << "We have the same amounts.\n";
	else
		cout << "One of us is richer.\n";

	Money ourAmount = yourAmount + myAmount;
	yourAmount.output(); cout << " + "; myAmount.output();
	cout << " equals " ; ourAmount.output(); cout << endl;
	
	Money diffAmount = yourAmount - myAmount;
	yourAmount.output(); cout << " - "; myAmount.output();
	cout << " equals "; diffAmount.output(); cout << endl;

	system("pause");
	return 0;
}
//이하 전역함수기반 오버로딩
//불필요한 클래스 생성을 피하기 위해 피연산자는 call-by-refference이다.
// '+'연산자 오버로딩, 두 Money클래스의 멤버 변수를 더해 Money클래스를 반환
const Money operator +(const Money& amount1, const Money& amount2)
{
	int allCents1 = amount1.getCents() + amount1.getDollars()*100;
	int allCents2 = amount2.getCents() + amount2.getDollars()*100;
	int sumAllCents = allCents1 + allCents2;
	int absAllCents = abs(sumAllCents);
	int finalDollars = absAllCents/100;
	int finalCents = absAllCents%100;

	if(sumAllCents < 0)
	{
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}

	return Money(finalDollars, finalCents);
}

// '-'연산자 오버로딩, 두 Money클래스의 멤버 변수를 빼 Money클래스를 반환
const Money operator -(const Money& amount1, const Money& amount2)
{
	int allCents1 = amount1.getCents() + amount1.getDollars()*100;
	int allCents2 = amount2.getCents() + amount2.getDollars()*100;
	int diffAllCents = allCents1 - allCents2;
	int absAllCents = abs(diffAllCents);
	int finalDollars = absAllCents/100;
	int finalCents = absAllCents%100;

	if(diffAllCents < 0)
	{
		finalDollars = -finalDollars;
		finalCents = -finalCents;
	}

	return Money(finalDollars, finalCents);
}

// '=='연산자 오버로딩, 두 Money클래스의 멤버변수가 같은지 비교
bool operator ==(const Money& amount1, const Money& amount2)
{
	return ((amount1.getDollars() == amount2.getDollars())
		&& (amount1.getCents() == amount2.getCents()));
}
// '-'연산자 오버로딩, Money클래스의 멤버변수의 부호를 바꾼다.
const Money operator -(const Money& amount)
{
	return Money(-amount.getDollars(), -amount.getCents());
}

//이하 Money클래스 생성자
Money::Money() : dollars(0), cents(0)
{}
Money::Money(double amount)
	: dollars(dollarsPart(amount)), cents(centsPart(amount))
{}
Money::Money(int theDollars)
	: dollars(theDollars), cents(0)
{}
Money::Money(int theDollars, int theCents)
{
	if( (theDollars < 0 && theCents >0) || (theDollars > 0 && theCents < 0) )
	{
		cout << "Inconsistent money data.\n";
		exit(1);
	}
	dollars = theDollars;
	cents = theCents;
}

//Momey클래스 접근자
double Money::getAmount() const
{
	return (dollars + cents*0.01);
}
int Money::getDollars() const
{
	return dollars;
}
int Money::getCents() const
{
	return cents;
}

//Money클래스 출력 함수
void Money::output() const
{
	int absDollars = abs(dollars);
	int absCents = abs(cents);
	if(dollars < 0 || cents < 0)
		cout << "$-";
	else
		cout << '$';
	cout << absDollars;

	if(absCents >= 10)
		cout << '.' << absCents;
	else
		cout << '.' << '0' << absCents;
}

//Money클래스 입력 함수
void Money::input()
{
	char dollarSign;
	cin >> dollarSign;
	if(dollarSign != '$')
	{
		cout << "No dollar sign in Money input.\n";
		exit(1);
	}

	double amountAsDouble;
	cin >> amountAsDouble;
	dollars = dollarsPart(amountAsDouble);
	cents = centsPart(amountAsDouble);
}

//double형 수에서 소수점 아래부분을 뗀 값(달러 부분)
int Money::dollarsPart(double amount) const
{
	return static_cast<int>(amount);
}

//double형 수에서 소수점 아래부분(센트 부분)
int Money::centsPart(double amount) const
{
	double doubleCents = amount * 100;
	int intCents = (round(fabs(doubleCents)))%100;
	if(amount < 0)
		intCents = -intCents;
	return intCents;
}

//반올림 함수
int Money::round(double number) const
{
	return static_cast<int>(floor(number + 0.5));
}