#include<iostream>
using namespace std;
int main() {
	int item=0.0,quantity=0.0,price=0.0,orderamount=0.0,ordertype=0.0,servicecharges=0.0,bill=0.0,service=0.0,totalbill=0.0;
	double discount = 0.0, discountapply = 0.0;
	char customertype;
	cout << "enter your menu" << endl;
	cout << "1.Burger=350" << endl;
	cout << "2.pizza roll Rs.280" << endl;
	cout << "3.chicken roll Rs.220" << endl;
	cout << "4.Cold Drink Rs.100" << endl;
	cout << "enter your item" << endl;
	cin >> item;
	switch (item)
	{
	case 1:
		price = 350;
		break;
	case 2:
		price = 280;
		break;
	case 3:
		price = 220;
		break;
	case 4:
		price = 100;
		break;
	default:
		cout << "invalid item" << endl;

	}
	if (item <= 0)
	{
		cout << "invalid item" << endl;
	}
	if (item > 0 && item <= 4)
	{
		cout << "valid item" << endl;
		cout << "enter the quantity" << endl;
		cin >> quantity;
		orderamount = price * quantity;
		if (quantity > 0)
		{
			cout << "valid Quantity" << endl;
			cout << "enter the customer type" << endl;
			cout << "S.students" << endl;
			cout << "F.faculty" << endl;
			cout << "G.guests" << endl;
			cin >> customertype;
			switch (customertype)
			{
			case 'S':
			case's':
				if (orderamount >= 1000)
				{
					discount = 0.15;
					
				}
				else if (orderamount >= 500 && orderamount < 1000)
				{
					discount = 0.10;
				}
				else
				{
					discount = 0.05;
				}
				break;
			case'F':
			case'f':
				if (orderamount >= 1000)
				{
					discount = 0.20;
				}
				else
				{
					discount = 0.10;
				}
				break;
			case'g':
			case'G':
				if (orderamount >= 1000)
				{
					discount = 0.10;
				}
				else
					{
						discount = 0.0;
					}
				break;
				
			default:
				cout << "invalid customer type.Treated as a Guest" << endl;
			}

		}
		else
			cout << "invalid quantity" << endl;

		discountapply = orderamount * discount;
		bill = orderamount - discountapply;
	}
	else
		cout << "invalid item" << endl;
	cout << "enter the order type" << endl;
	cout << "1.Dine in" << endl;
	cout << "2.Takeaway" << endl;
	cin >> ordertype;
	if (ordertype == 1)
	{
		servicecharges = bill * 0.05;
		totalbill = bill + servicecharges;
	}
	if (ordertype == 2)
	{
		servicecharges= + 30;
		totalbill = bill + servicecharges;
	}
	
	int cashgiven=0.0, cashreturn=0.0;
	cout << "enter the cash given" << endl;
	cin >> cashgiven;
	if (cashgiven == totalbill)
	{
		cashreturn = 0.0;
	}
	if (cashgiven > totalbill)
	{
		cashreturn = cashgiven - totalbill;
	}
	if (cashgiven < totalbill)
	{
		cashreturn = cashgiven - totalbill;
	}

	cout << "item=" << item << endl;
	cout << "Quantity=" << quantity << endl;
	cout << "order amount=" << orderamount << endl;
	cout << "Discount=" << discountapply << endl;
	cout << "Service charges=" << servicecharges << endl;
	cout << "Totalbill=" << totalbill << endl;
	cout << "Cash Given=" << cashgiven << endl;
	cout << "cash returned=" << cashreturn << endl;

	return 0;
}