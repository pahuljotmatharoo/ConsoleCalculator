#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double addition() {
	double sum = 0;
	cout << "Enter number of terms: ";
	vector <double> nums;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double num; 
		cout << "Enter number " << i + 1 << ": ";
		cin >> num;
		nums.push_back(num);
	}
	for (int i = 0; i < nums.size(); i++) {
		sum += nums[i];
	}
	cout << "Answer: ";
	return sum;
}

double subtraction() {
	cout << "Enter number of terms: ";
	vector<double> nums;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double num; 
		cout << "Enter number " << i + 1 << ": ";
		cin >> num;
		nums.push_back(num);
	}
	double subtract = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		subtract = subtract - nums[i];
	}
	cout << "Answer: ";
	return subtract;
}

double multiplication() {
	double product = 1;
	cout << "Enter number of terms: ";
	vector <double> nums;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double num; 
		cout << "Enter number " << i + 1 << ": ";
		cin >> num;
		nums.push_back(num);
	}
	for (int i = 0; i < nums.size(); i++) {
		product *= nums[i];
	}
	cout << "Answer: ";
	return product;
}

double division() {
	cout << "Enter number of terms: ";
	vector <double> nums;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		double num; 
		cout << "Enter number " << i + 1 << ": ";
		cin >> num;
		nums.push_back(num);
	}
	double quiotent = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		quiotent = (quiotent) / (nums[i]);
	}
	cout << "Answer: ";
	return quiotent;
}

double exponent() {
	cout << "Enter base number: ";
	int num; cin >> num;
	cout << "Enter exponent: ";
	int expo; cin >> expo;
	int product = num;
	for (int i = 1; i < expo; i++) {
		product = product * num;
	}
	cout << "Answer: ";
	return product;
}

double root() {
	cout << "Enter number: ";
	double num; cin >> num;
	double roots = sqrt(num);
	cout << "Answer: ";
	return roots;
}

int main() {
	char operation; cout << "Enter operation\n + : Add \n - : Subtract \n x : Multiply \n / : Divide \n ^ : Exponent \n % : Square root : ";
	cin >> operation;
	while (operation != '+' && operation != '-' && operation != 'x' && operation != '/' && operation != '^' && operation != '%') {
		cout << "ERROR \n Enter correct operation: ";
		cin >> operation;
	}
	switch (operation) {
	case '+':
		cout << addition();
		break;
	case '-':
		cout << subtraction();
		break;
	case 'x':
		cout << multiplication();
		break;
	case '/':
		cout << division();
		break;
	case '^':
		cout << exponent();
		break;
	case '%':
		cout << root();
		break;
	}

}