#pragma once
#include<iostream>
#include<string>

using namespace std;

class Order{

private:
	int orderID;
	string orderDate;
	int quantity;
	double totalPrice;
	
	
public:
	void addOrder(int o_ID, string o_Date, int qua, double T_price);
	double calTotal;
	void displayOrderDetails();
	
};
