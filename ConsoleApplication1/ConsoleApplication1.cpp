#include <iostream>
#include <string>

struct Bankaccount {
    int accountnumber;      
    std::string ownername;  
    double balance;       
};


void updatebalance(Bankaccount& account, double newbalance) {
    account.balance = newbalance;
}

int main() {
    Bankaccount account;
    setlocale(LC_ALL, "Russian");
   
    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountnumber;
    std::cin.ignore(); 



    std::cout << "Введите имя владельца: ";
    std::getline(std::cin, account.ownername);
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;


    double newbalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newbalance;

    
    updatebalance(account, newbalance);
    setlocale(LC_ALL, "Russian");
  
    std::cout << "Ваш счёт: " << account.ownername << ", "
      
        << account.accountnumber << ", "

        << account.balance << std::endl;

    return 0;
}