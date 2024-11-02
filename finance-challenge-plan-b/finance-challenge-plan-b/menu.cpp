#include "../finance-challenge-plan-b/menu.h"
#include "../finance-challenge-plan-b/options.h"


void menu(int choice)
{
    cout << endl;
    cout << " 1 - Monthly Inclome and Expenses (calculation)" << endl;
    cout << " 2 - Financial Advice" << endl;
    cout << " 3 - Financial Quiz" << endl;
    cout << " 4 - Exit" << endl;
    cout << " Enter your choice and press return: " << endl;
    cin >> choice;

    if (choice == 1)
        monthlyIncomeandExpenses();
    else if (choice == 2)
        financialAdvice();
    else if (choice == 3)
        financialQuiz();
}