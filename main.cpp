#include<iostream>
#include <string>

//Trying to get into the habit of what requires std:: hence the lack of "using namespace std" in the headers.

void showMenu() {

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

  if (usersOption == 1){
    std::cout << "Balance choice was selected";
  } else if ( usersOption == 2){
    std::cout << "Withdraw choice was selected";
  } else if (usersOption ==3){
    std::cout << "Deposit choice was selected";
  } else {
    std::cout << "An error has occured please try again";
  }
}



int main(){

    //check balance , deposit, withdraw and show menu to the User.
    showMenu();
    system("pause>0");
}