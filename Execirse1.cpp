#include <iostream>

int main() {
    double merchandiseCost, employeeSalary, yearlyRent, electricityCost;
    
    // Prompt Linda to enter the necessary information
    std::cout << "Enter the total cost of the merchandise: ";
    std::cin >> merchandiseCost;
    
    std::cout << "Enter the total salary of the employees (including your own): ";
    std::cin >> employeeSalary;
    
    std::cout << "Enter the yearly rent: ";
    std::cin >> yearlyRent;
    
    std::cout << "Enter the estimated electricity cost: ";
    std::cin >> electricityCost;
    
    // Calculate total expenses
    double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;
    
    // Calculate desired net profit
    double desiredNetProfit = 0.10 * totalExpenses;
    
    // Calculate total revenue needed
    double totalRevenueNeeded = totalExpenses + desiredNetProfit;
    
    // Calculate revenue after 15% sale
    double revenueAfterSale = totalRevenueNeeded / 0.85;
    
    // Calculate markup percentage
    double markupPercentage = ((revenueAfterSale / merchandiseCost) - 1) * 100;
    
    // Output the markup percentage
    std::cout << "The merchandise should be marked up by approximately " << markupPercentage << "% to achieve the desired profit." << std::endl;
    
    return 0;
}
