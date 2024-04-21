#include <stdio.h>
#include <time.h> // for time structure

#define MAX_TRANSACTIONS 100
#define MAX_BUDGETS 10

struct Transaction
{
    char type; // 'i' for income, 'e' for expense
    double amount;
    char description[50];
    char category[20]; // Optional for categorization
    struct tm date;    // Structure for transaction date
};

struct Budget
{
    char name[20];
    double amount;
    double spent;
};

struct Investment
{ // Not implemented in C code (placeholder)
    char name[20];
    double shares;
    double price;
};

// Function prototypes (implementation not shown here)
void addTransaction(struct Transaction *transactions, int *numTransactions);
void editTransaction(struct Transaction *transactions, int numTransactions);
void deleteTransaction(struct Transaction *transactions, int *numTransactions);

void createBudget(struct Budget *budgets, int *numBudgets);
void editBudget(struct Budget *budgets, int numBudgets);
void trackBudget(struct Budget *budgets, int numBudgets, struct Transaction transactions[], int numTransactions);

void saveData(struct Transaction *transactions, int numTransactions, struct Budget *budgets, int numBudgets);
void loadData(struct Transaction *transactions, int *numTransactions, struct Budget *budgets, int *numBudgets);

int main()
{
    struct Transaction transactions[MAX_TRANSACTIONS];
    int numTransactions = 0;

    struct Budget budgets[MAX_BUDGETS];
    int numBudgets = 0;

    // Load data from file (if it exists)
    loadData(transactions, &numTransactions, budgets, &numBudgets);

    int choice;

    while (1)
    {
        printf("\nPersonal Finance Tracker\n");
        printf("1. Add Income\n");
        printf("2. Add Expense\n");
        printf("3. Edit Transaction\n");
        printf("4. Delete Transaction\n");
        printf("5. View Transactions\n");
        printf("6. Create Budget\n");
        printf("7. Edit Budget\n");
        printf("8. Track Budget\n");
        printf("9. Save Data\n");
        printf("10. Load Data\n");
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
          case 1:
            addTransaction(transactions, &numTransactions);
            break;
          case 2:
            addTransaction(transactions, &numTransactions);
            break;
          case 3:
            editTransaction(transactions, numTransactions);
            break;
          case 4:
            deleteTransaction(transactions, &numTransactions);
            break;
          case 5:
            // Implement function to view transactions
            break;
          case 6:
            createBudget(budgets, &numBudgets);
            break;
          case 7:
            editBudget(budgets, numBudgets);
            break;
          case 8:
            trackBudget(budgets, numBudgets, transactions, numTransactions);
            break;
          case 9:
            saveData(transactions, numTransactions, budgets, numBudgets);
            break;
          case 10:
            loadData(transactions, &numTransactions, budgets, &numBudgets);
            break;
          case 11:
            printf("Exiting...\n");
            saveData(transactions, numTransactions, budgets, numBudgets); // Save data before exiting
            return 0;
          default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
