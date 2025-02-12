#include <iostream>
using namespace std;

/*  problem 1
int main(){
    float subproblem, avg;
    float n;
    int sum;
    cout<<"Enter subproblem number: ";
    cin>>subproblem;
    int sub = subproblem * 10;
    switch(sub){
    case 11:
    for (int i = 1; i <= 10; i++){
      cout << i<< " ";
    }
    break;
    case 12:
    cout << "Enter a natural number: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        cout << i << " ";
    }
    break;

    case 13:
    for (int i = 1; i <= 10; i++){
        sum += i;
    }
    cout << sum;
    break;

    case 14:
    cout << "Enter a natural number: ";
    cin >> n;
    for (int i = 0; i <= n; i++){
        sum += i;
    }
    cout << sum;
    break;

    case 15:
    for (int i = 1; i <= 10; i++){
        sum += i;
    }
    avg = sum / 10.0;
    cout << avg;
    break;

    case 16:
    cout << "Enter a natural number: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    avg = sum / n;
    cout << avg;
    break;

    default:
        cout<<"Invalid input.";
    }
    return 0;
}*/

/*  problem 2
main(){
    float subproblem;
    int n;
    cout << "Enter the subproblem number: ";
    cin >> subproblem;
    int sub = subproblem * 10;
    switch (sub){
    case 21:
        for (int i=0; i<=10; i++){
            if (i%2==1){
                cout << i << " ";
            }
        }
    break;

    case 22:
    for (int i=0; i<=10; i++){
    if (i%2==0){
        cout << i << " ";
    }
    }
    break;

    case 23:
    cout << "Enter a natural number: ";
    cin >> n;
    for (int i=0; i<=n; i++){
        if (i%2==1){
            cout << i << " ";
    }
    }
    break;

    case 24:
    cout << "Enter a natural number: ";
    cin >> n;
    for (int i=0; i<=n; i++){
        if (i%2==0){
            cout << i << " ";
    }
    }
    break;

    case 25:
    for (int i=0; i<=100; i++){
        if (i%10==0){
            cout << i << " ";
        }
    }
    break;

    case 26:
    cout << "Enter a natural number: ";
    cin >> n;
    for (int i=0; i<=n; i++){
        if (i%10==0){
            cout << i << " ";
    }
    }
    break;

    default:
    cout << "Wrong input.";
    }
    return 0;
}*/

/* problem 3
int main(){
    char ch;
    int counter;
    for (ch = 'A'; ch <= 'Z'; ch++){
        if (counter < 4){
        cout << ch << " ";
        counter++;
        }
        else{
        cout << ch << " " << endl;
        counter = 0;
        }
    }
    return 0;
}*/

/*  problem 4
int main(){
    int n;
    int factorial = 1;
    cout << "Enter a  non-negative number: ";
    cin >> n;
    if (n < 0){
        cout << "Factorial of negative number is not defined!" << endl;
    }
    else{
        for (int i = n; i > 0; i--){
        factorial = factorial * i;
        }
    }
    cout << "The factorial of " << n << " is: " << factorial << endl;
    return 0;
}*/

/*  problem 5
int main(){
    int classes, credits, totalCredits;
    float gpa;
    float total, avgGpa;
    cout<<"Enter the number of classes: ";
    cin>>classes;
    for(int i=0;i<classes;i++){
    cout<<"Enter credits first, and then gpa: ";
    cin >> credits >> gpa;
    total += credits * gpa;
    totalCredits += credits;
    }
    avgGpa = total/totalCredits;
    cout<<"Average gpa: "<<avgGpa<<endl;
    return 0;
}*/