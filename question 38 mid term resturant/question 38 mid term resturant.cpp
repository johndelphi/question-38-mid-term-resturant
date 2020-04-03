// question 38 mid term resturant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//john michael 
//cosc 1336
//Write a program that computes the tax and tip on a restaurant bill for a patron with a $100.60 meal charge. 
//The tax should be 8.25 percent of the meal cost. The tip should be 
//20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.



#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
 double tax;
 double tip;
 double meal_charge=100.60;
 double totatatol;
 double tol;
 double subtatol;
 double total_bill;
 cout << "How much was the meal charge\t";// prompt user to enter the meal charge
 cin >> meal_charge;
 tax = (meal_charge * 0.0825);// calculate for the tax
 //cout << "Tax is \t" << tax << endl;//output the tax to display
 subtatol = (tax + meal_charge);
 tip = (subtatol * 0.2);
 total_bill = (meal_charge + tip);
 cout <<"Your bill is: "<<total_bill;
 cout <<"\nTAX chargedis: "<<tax;
cout<<"\nYou gave a tip of: "<< tip<<endl;

}

