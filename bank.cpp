#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{   
    double balance = 100;
    int choice = 0;

    do
    {
        std::cout << "*********************** \n";
        std::cout << "---BANK SERVICE MENU---\n";
        std::cout << "*********************** \n";

        std::cout << "1. Cek Saldo \n";
        std::cout << "2. Tabung \n";
        std::cout << "3. Tarik \n";
        std::cout << "4. Keluar \n";
        std::cout << "Input your choice: \n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Selamat Tinggal";
                break;
            default: 
                std::cout << "Invalid choice \n";
                break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Saldo sekarang: $" << std::fixed << std::setprecision(2) << balance << '\n';
}

double deposit()
{    
    double amount;
    std::cout << "Masukan nominal: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    } else{
        std::cout << "Error! \n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount;
    std::cout << "Masukan nominal: ";
    std::cin >> amount;
    
    if(amount > balance){
        std::cout << "Saldo tidak cukup!";
        return 0;
    }
    else if(amount < 0){
        std::cout << "Error! \n";
        return 0;
    } else {
        return amount;
    }
}
