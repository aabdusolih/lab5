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

/*  problem 6
int main() {
    int students, classes, credits, totalCredits = 0;
    float gpa, totalGPA = 0.0;
    float total = 0.0, avgGpa = 0.0;
    cout<<"Enter the number of students and classes: ";
    cin>>students >> classes;
    for (int i=0; i<students; i++) {
        totalCredits = 0;
        totalGPA = 0.0;
        for (int j=0; j<classes; j++) {
            cout <<"Enter the number of credits and gpa: ";
            cin>>credits >> gpa;
            totalCredits += credits;
            totalGPA += gpa*credits;
        }
        total += totalGPA/totalCredits;
    }
    avgGpa = total/students;
    cout << "Average GPA: " << avgGpa << endl;
    return 0;
}*/

/*  problem 7
int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}*/

/*  problem 8
int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    for (int j = 0; j < i; j++) {
        for (int k = 0; k <= j; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}*/

/*  problem 9
int main() {
    int n;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
        }
    }
    if (isPrime) {
        cout << n << " is a prime number";
    }
    else {
        cout << n << " is not a prime number";
    }
    return 0;
}*/

/* problem 10
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << "*" << i << "=" << i*i << endl;
    }
    return 0;
}*/

/*  problem 11
int main() {
    int n;
    float total = 0.0;
    int pCounter = 0, nCounter = 0, counter = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        if (n > 0) {
            pCounter++;
        }
        else if (n < 0) {
            nCounter++;
        }
        total += n;
        counter++;
    }
    if (counter > 0){
    float average = total/counter;
    cout << "Positive numbers: " << pCounter << endl;
    cout << "Negative numbers: " << nCounter << endl;
    cout << "Total: " << total << endl;
        cout << "Counter: " << counter << endl;
    cout << "Average: " << average << endl;
    }
    return 0;
}*/

/*  problem 12
int main() {
    int n, number;
    int modulus = 10;
    cout << "Enter a number: ";
    cin >> n;
    while (true) {
        if (n == 0) {
            break;
        }
        number = n % modulus;
        n -= number;
        cout << number/(modulus/10);
        modulus *= 10;
    }
    return 0;
}*/

/*  problem 13
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n==0) {
        cout << "Zero depth" << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }
            cout << endl;
        }
    }
    return 0;
}*/

/*  problem 14
int main() {
    int binary, decimal = 0,digit = 0;
    cout << "Enter binary number: ";
    cin >> binary;
    int modulus = 10;
    int mult = 1;
    while (true) {
        if (binary == 0) {
            break;
        }
        digit = binary % modulus;
        decimal += digit * mult;
        mult *= 2;
        binary /= 10;
    }
    cout << decimal << endl;
    return 0;
}*/