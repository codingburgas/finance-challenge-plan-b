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

//function for advices
void FinancialAdvice()
{
    char answer;
    cout << "1 - Set Clear Financial Goals" << endl;
    cout << "Define short-term and long-term financial goals to help you stay focused and motivated." << endl;
    cout << endl;
    cout << "2 - Create a Budget" << endl;
    cout << "Track your income and expenses, allocating funds for essentials, savings, and leisure to avoid overspending." << endl;
    cout << endl;
    cout << "3 - Build an Emergency Fund" << endl;
    cout << "Set aside savings for unexpected expenses to reduce reliance on credit in emergencies." << endl;
    cout << endl;
    cout << "4 - Invest in Your Future" << endl;
    cout << "Explore savings accounts, stocks, or mutual funds. Start small but consistently to grow your wealth" << endl;
    cout << endl;
    cout << "5 - Avoid Unnecessary Debt" << endl;
    cout << "Be cautious with credit cards and loans. Try to pay off your debts on time to avoid high interest." << endl;
    cout << endl;
    cout << "6 - Save for Retirement Early" << endl;
    cout << "The earlier you begin, the more you’ll benefit from compound interest." << endl;
    cout << endl;
    cout << "7 - Track Your Expenses" << endl;
    cout << "Review your spending habits to identify areas where you can cut back and save." << endl;
    cout << endl;
    cout << "8 - Increase Financial Literacy" << endl;
    cout << "Learn about personal finance through books, podcasts, and courses to make informed decisions." << endl;
    cout << endl;
    cout << "9 - Live Within Your Means" << endl;
    cout << "Resist lifestyle inflation by keeping expenses below your income and prioritizing savings." << endl;
    cout << endl;
    cout << "10 - Regularly Review Your Finances" << endl;
    cout << "Periodically assess your financial situation, adjusting goals, budgets, and investments as needed." << endl;
    cout << endl;
    cout << "This advices are NOT from professionals!" << endl;

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