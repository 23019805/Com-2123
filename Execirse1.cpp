 cin >> employeeSalary;
    
    cout << "Enter the yearly rent: ";
    cin >> yearlyRent;
    
    cout << "Enter the estimated electricity cost: ";
    cin >> electricityCost;
    
    double totalExpenses = merchandiseCost + employeeSalary + yearlyRent + electricityCost;
    double desiredNetProfit = 0.10 * merchandiseCost;
    double totalRevenueNeeded = totalExpenses + desiredNetProfit;
    double sellingPriceAfterSale = totalRevenueNeeded / (1 - 0.15);
    double markupPercentage = ((sellingPriceAfterSale - merchandiseCost) / merchandiseCost) * 100;
    
    cout << "The merchandise should be marked up by approximately " << markupPercentage << "% to achieve the desired net profit." << endl;
    
    return 0;
}