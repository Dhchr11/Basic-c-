// 1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs,
//Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance) 
#include <iostream>
using namespace std;

// Base class Cricketer
class Cricketer 
{
protected:
    string name;
    int matchesPlayed;

public:
    // Function to input basic cricketer details
     inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter Number of Matches Played: ";
        cin >> matchesPlayed;
    }

    // Function to display basic cricketer details
    void displayCricketerData() const {
        cout << "Cricketer's Name: " << name << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

// Derived class Batsman from Cricketer
class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    // Function to input batsman's data
    void inputBatsmanData() {
        inputCricketerData();  // Input base class data
        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
        cout << "Enter Best Performance (Highest Score): ";
        cin >> bestPerformance;
    }

    // Function to calculate average runs
    void calculateAverageRuns() {
        if (matchesPlayed > 0) {
            averageRuns = static_cast<float>(totalRuns) / matchesPlayed;
        } else {
            averageRuns = 0;
        }
    }

    // Function to display batsman's data
    void displayBatsmanData() const {
        displayCricketerData();  // Display base class data
        cout << "Total Runs Scored: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;

    // Input data for the batsman
    batsman.inputBatsmanData();

    // Calculate the average runs
    batsman.calculateAverageRuns();

    // Display the batsman's data
    batsman.displayBatsmanData();

    return 0;
}

