/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

// Functions
void equ_newtons2ndlaw();
void equ_kineticenergy();
void equ_power();
void equ_FractionNonconforming();

int main() {
    int choice;
    
    while (true) {
        cout << "Equation Menu:" << endl;
        cout << "1. Newton's 2nd Law" << endl;
        cout << "2. Kinetic Energy" << endl;
        cout << "3. Power" << endl;
        cout << "4. Fraction Nonconforming Control Chart" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                equ_newtons2ndlaw();
                break;
            case 2:
                equ_kineticenergy();
                break;
            case 3:
                equ_power();
                break;
            case 4:
                equ_FractionNonconforming();
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
        
        cout << endl;
    }
}

void equ_newtons2ndlaw() {
    double mass, acceleration, force;
    int solveFor;
    cout<<endl;
    cout << "Solve for: " << endl;
    cout << "1. Force" << endl;
    cout << "2. Mass" << endl;
    cout << "3. Acceleration" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> solveFor;
    
    switch (solveFor) {
        case 1:
            cout << "Enter the values of acceleration (m/s^2): ";
            cin >> acceleration;
            cout<<"Enter the values of mass (kg): ";
            cin>> mass;
            force = mass * acceleration;
            cout << "Force = " << force << " N" << endl;
            break;
        case 2:
            cout << "Enter the values of acceleration (m/s^2): ";
            cin >> acceleration;
            cout<<"Enter the values of force (N): ";
            cin>> force;
            mass = force / acceleration;
            cout << "Mass = " << mass << " kg" << endl;
            break;
        case 3:
            cout << "Enter the values of mass (kg): ";
            cin >> mass;
            cout<<"Enter the values of force (N): ";
            cin>> force;
            acceleration = force / mass;
            cout << "Acceleration = " << acceleration << " m/s^2" << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
    }
}

void equ_kineticenergy() {
    double mass, velocity, k;
        cout << "Enter the values of velocity (m/s): ";
            cin >> velocity;
            cout<<"Enter the values of mass (kg): ";
            cin>> mass;
            k = 0.5 * mass * pow(velocity, 2);
            cout << "Kinetic Energy = " << k << " J" << endl;
         
    }


void equ_power() {
    double current, voltage, power;
    int solveFor;
    cout<<endl;
    cout << " Solve for: " << endl;
    cout << "1. Power" << endl;
    cout << "2. Voltage" << endl;
    cout << "3. Current" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> solveFor;
    switch (solveFor) {
        case 1:
        cout << "Enter the values of Voltage (v): ";
            cin >> voltage;
            cout<<"Enter the values of current (A): ";
            cin>> current;
            power = current*voltage;
            cout << "Power = " << power << "watt" << endl;
            break;
        case 2:
        cout << "Enter the values of power (watt): ";
            cin >> power;
            cout<<"Enter the values of current (A): ";
            cin>> current;
            voltage = power/ current;
            cout << "voltage = " << voltage << " v" << endl;
            break;
        case 3:
        cout << "Enter the values of power (watt): ";
            cin >> power;
            cout<<"Enter the values of voltage (v): ";
            cin>> voltage;
            current = power/ voltage;
            cout << "Current = " << current << " A" << endl;
            break;
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
    }
}

void equ_FractionNonconforming() {
  int n,m;
  float p, ucl, lcl, d;



      cout << "Enter the sample size: ";
            cin >>n;
            cout<<"Enter the number of nonconforming items: ";
            cin>> d;
            cout<<"Enter the number of m: ";
            cin>> m;
            p = d/(n*m);

if(p<0){

            ucl= p + 3 * sqrt(p * (1 - p) / n);
            lcl= p - 3 * sqrt(p * (1 - p) / n);
            cout << "Fraction nonconforming = " << p << endl;
            cout<<"The center line is also: "<<p<<endl;
            cout << "UCL = " << ucl<< endl;
            cout << "LCL = " << lcl<< endl;
           }
else {
cout<<"the value can not be defined"<<endl;
   }
}