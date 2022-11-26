#include <iostream>
#include <string>

// Trying to get into the habit of what requires std:: hence the lack of "using namespace std" in the headers.

// have balance as a global scope
float balance = 100.00;
float requestedAmount;

void checkBalance()
{
  std::cout << "Your current balance is " << balance << "$";
}

void withdraw()
{
  std::cout << "Please insert the amount that you wish to withdraw: ";
  std::cin >> requestedAmount;

  if (requestedAmount && requestedAmount <= balance)
  {
    // withdraw only when amount being withdrawn is less or equal to the balance
    balance = balance - requestedAmount;
    std::cout << "You've withdrawned " << requestedAmount << "$" << std::endl;
    std::cout << "Your remaining balance is " << balance << "$ ";
  }
  else if (requestedAmount > balance)
  {
    std::cout << "Insufficent Funds" << std::endl;
    std::cout << "Please try again" << std::endl;
    withdraw();
  }
  else
  {

    std::cout << "An error has occured please try again another time";
  }
}

void showMenu()
{

  int usersOption;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "*************************Saul's ATM Menu*************************" << std::endl;
  std::cout << "1.Check Balance" << std::endl;
  std::cout << "2.Withdraw" << std::endl;
  std::cout << "3.Deposit" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  std::cin >> usersOption;

  if (usersOption == 1)
  {
    checkBalance();
  }
  else if (usersOption == 2)
  {
    withdraw();
  }
  else if (usersOption == 3)
  {
    std::cout << "Deposit choice was selected";
  }
  else
  {
    std::cout << "An error has occured please try again";
  }
}

int main()
{

  // check balance , deposit, withdraw and show menu to the User.
  showMenu();
  system("pause>0");
}