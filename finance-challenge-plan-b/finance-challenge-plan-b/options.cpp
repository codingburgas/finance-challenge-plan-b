#include "../finance-challenge-plan-b/menu.h"
#include "../finance-challenge-plan-b/options.h"

//function for monthlyIncomeandExpenses
void monthlyIncomeandExpenses()
{
    double monthlyincome, foodExpenses, billsExpenses, lifestyleExpenses, medicineExpenses, unexpectedExpenses, ownExpenses;
    string currency;

    char answer; //variable for user choice to return to menu

    cout << "Enter the currency (lv, euro, dollar or other): ";
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

    cout << "Expenses for own purcheses for (like technology, renovate or other) the current month (" << currency << "): ";
    cin >> ownExpenses;

    cout << "Unexpected expenses for the current month (" << currency << "): ";
    cin >> unexpectedExpenses;

    double totalExpenses = foodExpenses + billsExpenses + lifestyleExpenses + medicineExpenses + unexpectedExpenses + ownExpenses;

    cout << "All expenses for the current month: " << totalExpenses << " lv." << endl;
    cout << "Remaining income after expenses: " << (monthlyincome - totalExpenses) << " lv." << endl;

    //check for returning to main menu 
    cout << "Do you want to try another option?(y/n)" << endl;
    cin >> answer;
    if (answer == 'y')
    {
        system("cls"); //clear the console screen
        menu(choice); //return to main menu
    }
    else
    {
        exit(0); //exit the program
    }
}

//function for advices
void financialAdvice()
{
    char answer; //variable for user choice to return to menu

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

    //check for returning to main menu 
    cout << "Do you want to try another option?(y/n)" << endl;
    cin >> answer;
    if (answer == 'y')
    {
        system("cls"); //clear the console screen
        menu(choice); //return to main menu
    }
    else
    {
        exit(0); //exit the program
    }
}


//function for financialQuiz
void financialQuiz()
{
    cout << "Instructions:" << endl;
    cout << "Every answer starts with capital letters, the answer is one word for each question!" << endl;
    cout << "Press ENTER when you are ready with your answer." << endl;

    string a, b, c, d, e, f, g, h, i, j;

    int score = 0;

    string answers[] = { "Budget", "Interest", "Emergency fund", "Credit score", "Needs", "Debt", "Saving", "Inflation", "Stocks", "Taxes" };

    char answer; //variable for user choice to return to menu
    
    //print questions and checking answers
    cout << "1. What is a plan that helps you manage income and expenses?" << endl;
    cin.ignore(); //ignore the last characters from the input
    getline(cin, a); //read a string
    if (a == answers[0])
        score++;

    cout << "2. What is the cost of borrowing money or the earnings on savings?" << endl;
    getline(cin, b);
    if (b == answers[1])
        score++;

    cout << "3. What do we call a savings account set aside for unexpected expenses?" << endl;
    getline(cin, c);
    if (c == answers[2])
        score++;

    cout << "4. What is the term for a number that represents a person’s reliability as a borrower?" << endl;
    getline(cin, d);
    if (d == answers[3])
        score++;

    cout << "5. What is more important to prioritize, 'needs' or 'wants'?" << endl;
    getline(cin, e);
    if (e == answers[4])
        score++;

    cout << "6. What should students try to avoid: debt or savings?" << endl;
    getline(cin, f);
    if (f == answers[5])
        score++;

    cout << "7. What habit is important for financial security: spending or saving?" << endl;
    getline(cin, g);
    if (g == answers[6])
        score++;

    cout << "8. What term describes the increase in prices over time?" << endl;
    getline(cin, h);
    if (h == answers[7])
        score++;

    cout << "9. What are shares in a company that people can buy and sell??" << endl;
    getline(cin, i);
    if (i == answers[8])
        score++;

    cout << "10. What is the money paid to the government on income or purchases?" << endl;
    getline(cin, j);
    if (j == answers[9])
        score++;

    //print mistakes and correct answers
    (a == "Budget") ? cout << "1. Correct" << endl : cout << "1. Wrong: Correct answer is Budget" << endl;

    (b == "Interest") ? cout << "2. Correct" << endl : cout << "2. Wrong: Correct answer is Interest" << endl;

    (c == "Emergency fund") ? cout << "3. Correct" << endl : cout << "3. Wrong: Correct answer is Emergency fund" << endl;

    (d == "Credit score") ? cout << "4. Correct" << endl : cout << "4. Wrong: Correct answer is Credit score" << endl;

    (e == "Needs") ? cout << "5. Correct" << endl : cout << "5. Wrong: Correct answer is Needs" << endl;

    (f == "Debt") ? cout << "6. Correct" << endl : cout << "6. Wrong: Correct answer is Debt" << endl;

    (g == "Saving") ? cout << "7. Correct" << endl : cout << "7. Wrong: Correct answer is Saving" << endl;

    (h == "Inflation") ? cout << "8. Correct" << endl : cout << "8. Wrong: Correct answer is Inflation" << endl;

    (i == "Stocks") ? cout << "9. Correct" << endl : cout << "9. Wrong: Correct answer is Stocks" << endl;

    (j == "Taxes") ? cout << "10. Correct" << endl : cout << "10. Wrong: Correct answer is Taxes" << endl;

    cout << "Your Score is " << score << "/10" << endl;

    //check for returning to main menu 
    cout << "Do you want to try another option?(y/n)" << endl;
    cin >> answer;
    if (answer == 'y')
    {
        system("cls"); //clear the console screen
        menu(choice); //return to main menu
    }
    else
    {
        exit(0); //exit the program
    }
}