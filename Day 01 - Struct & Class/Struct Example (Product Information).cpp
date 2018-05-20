#include<bits/stdc++.h>
using namespace std;

///Used 'struct' to create a custom Data Type 'Product'
struct Product{
    int weight;
    int cost;
};

///Declared a 'Product'-type array to store product info
Product A[1010];

///Sum variables to store sum of the weights and costs/prices
int sumWeight;
int sumCost;

int main()
{
    int number_of_products;
    cout << "Enter number of products: ";
    cin >> number_of_products;

    for (int i=1; i<=number_of_products; i++){
        cout << "Enter weight of the item " << i << ": ";
        cin >> A[i].weight;
        cout << "Enter cost of the item " << i << ": ";
        cin >> A[i].cost;

    }

    for (int i=1; i<=number_of_products; i++){
        sumWeight = sumWeight + A[i].weight;
        sumCost = sumCost + A[i].cost;
    }

    cout << "Total weight in your warehouse : " << sumWeight << endl;
    cout << "Total price of the products : " << sumCost << endl;

    return 0;
}
