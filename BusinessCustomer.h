#pragma once
#include<iostream>
#include"Order.h"
#include<string>

using namespace std;

class BusinessCustomer
{	
	private:
		int BcustomerID;
		char Bname;
		double ContactNo;
		
	public:
		void additems();
		void payCommission();
		void updateDeliverDetails();	
};
