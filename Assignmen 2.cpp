#include <iostream>
using namespace std;

int main() {
    // Define the quantities and prices
    int numofNotebooks = 15;
    int numofPens = 20;
    float pricePerNotebook = 2.25;
    float pricePerPen = 0.75;

    // Calculate the total cost of notebooks and pens
    float totalNotebookCost = numofNotebooks * pricePerNotebook;
    float totalPenCost = numofPens * pricePerPen;
    float totalCost = totalNotebookCost + totalPenCost;

    // Calculate and display total cost of all supplies
    cout << "Total cost of notebooks: Rs. " << totalNotebookCost << endl;
    cout << "Total cost of pens: Rs. " << totalPenCost << endl;
    cout << "Total cost of all supplies: Rs. " << totalCost << endl;

    return 0;
}