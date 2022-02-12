#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;


class cocoMoModel {
private:
	//class data member
	double kloc, effort, duration, avgStuffing;
public:
	//constructor
	cocoMoModel() {
		kloc = effort = duration = avgStuffing = 0;
	}
	//set the value of kilo line of code
	void setKloc(double kiloLOC) {
		kloc = kiloLOC;
	}
	//calculating the basic mode
	void calcBasic() {
		//if basic and organic
		if (kloc >= 2 && kloc <= 50) {
			effort = 2.4 * pow(kloc, 1.05);
			duration = 2.5 * pow(effort, 0.38);
			calcAvgStuffing();
		}
		//if basic and semi detached
		else if (kloc > 50 && kloc <= 300) {
			effort = 3 * pow(kloc, 1.12);
			duration = 2.5 * pow(effort, 0.35);
			calcAvgStuffing();
		}
		//if basic and embedded
		else if (kloc > 300) {
			effort = 3.6 * pow(kloc, 1.2);
			duration = 2.5 * pow(effort, 0.32);
			calcAvgStuffing();
		}
	}
	//calculating the intermediate and detailed mode
	void calcIntermediate(double costDrivers) {
		//if intermediate and organic
		if (kloc >= 2 && kloc <= 50) {
			effort = costDrivers * 3.2 * pow(kloc, 1.05);
			duration = 2.5 * pow(effort, 0.38);
			calcAvgStuffing();
		}
		//if intermediate and semi detached
		else if (kloc > 50 && kloc <= 300) {
			effort = costDrivers * 3.0 * pow(kloc, 1.12);
			duration = 2.5 * pow(effort, 0.35);
			calcAvgStuffing();
		}
		//if intermediate and embedded
		else if (kloc > 300) {
			effort = costDrivers * 2.8 * pow(kloc, 1.2);
			duration = 2.5 * pow(effort, 0.32);
			calcAvgStuffing();
		}
	}
	void calcAvgStuffing() {
		avgStuffing = effort / duration;
	}
	void results() {
		cout << "Effort=\t" << effort << endl;
		cout << "Duration=\t" << duration << endl;
		cout << "Average stuffing=\t" << avgStuffing << endl;
	}
};
int main() {
	cout << fixed;
	cout << setprecision(2);
	double kloc, costDrivers = 1, tempCost;
	char costAgain = 'y';
	cout << "Enter the estimated KILO line of code: \t";
	cin >> kloc;
	cocoMoModel coco;
	coco.setKloc(kloc);
	cout << "There are cost drivers? (y/n):\t";
	cin >> costAgain;
	switch (costAgain)
	{
	case 'n':
		coco.calcBasic();
		break;
	case 'y':
		while (costAgain == 'y')
		{
			cout << "Enter cost drivers:\t";
			cin >> tempCost;
			costDrivers *= tempCost; // costDrivers = costDrivers * tempCost 1.14
			cout << "Another cost driver? (y/n):\t";
			cin >> costAgain;
		}
		coco.calcIntermediate(costDrivers);
		break;
	default:
		cout << "Invalid choice";
		break;
	}
	//show results to user
	coco.results();
	return 0;
}