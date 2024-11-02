#include "../finance-challenge-plan-b/menu.h"
#include "../finance-challenge-plan-b/options.h"

//function for monthlyIncomeandExpenses
void MonthlyIncomeandExpenses()
{
    double monthlyincome, foodExpenses, billsExpenses, lifestyleExpenses, medicineExpenses, unexpectedExpenses;
    string currency;

    char answer;

    cout << "Enter the currency (lv, euro, dollars or other): ";
    cin >> currency;

    cout << "Income for the current month (" << currency << "): ";
    cin >> monthlyincome;

    cout << "Expenses for food for the current month (" << currency << "): ";
    cin >> foodExpenses;

    cout << "Expenses for bills for the current month (" << currency << "): ";
    cin >> billsExpenses;

    cout << "Expenses for lifestyle for the current month (" << currency << "): ";
    cin >> lifestyleExpenses;

    cout << "Expenses for medicine for the current month (" << currency << "): ";
    cin >> medicineExpenses;

    cout << "Unexpected expenses for the current month (" << currency << "): ";
    cin >> unexpectedExpenses;

    double totalExpenses = foodExpenses + billsExpenses + lifestyleExpenses + medicineExpenses + unexpectedExpenses;

    cout << "All expenses for the current month: " << totalExpenses << " lv." << endl;
    cout << "Remaining income after expenses: " << (monthlyincome - totalExpenses) << " lv." << endl;

    //Check for returning to main menu 

    cout << "Do you want to try another future?(y/n)" << endl;
    cin >> answer;
    if (answer == 'y')
    {
        system("cls");
        menu(choice);
    }
    else
    {
        exit(0);
    }
}