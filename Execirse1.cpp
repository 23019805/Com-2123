#include <iostream>

int main() {
    double merchandiseCost, employeeSalary, yearlyRent, electricityCost;
    

    std::cout << "Enter the total cost of the merchandise: ";
    std::cin >> merchandiseCost;
    
    std::cout << "Enter the total salary of the employees (including your own): ";
    std::cin >> employeeSalary;
    
    std::cout << "Enter the yearly rent: ";
    std::cin >> yearlyRent;
    
    std::cout << "Enter the estimated electricity cost: ";
    std::cin >> electricityCost;

    double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;
    
    double desiredNetProfit = 0.10 * totalExpenses;
    
    double totalRevenueNeeded = totalExpenses + desiredNetProfit;
    
    double revenueAfterSale = totalRevenueNeeded / 0.85;
    
    double markupPercentage = ((revenueAfterSale / merchandiseCost) - 1) * 100;
    
    std::cout << "The merchandise should be marked up by approximately " << markupPercentage << "% to achieve the desired profit." << std::endl;
    
    return 0;
}
