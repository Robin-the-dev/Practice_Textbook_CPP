#include <iostream>

using namespace std;

class Car {
	private:
		int gasolineGauge;
	public:
		Car(int gas) : gasolineGauge(gas) {
			// empty
		}
		int GetGasGauge() {
			return gasolineGauge;
		}
};

class HybridCar : public Car {
	private:
		int electricGauge;
	public:
		HybridCar(int gas, int elec) : Car(gas), electricGauge(elec) {
			// empty
		}
		int GetElectGauge() {
			return electricGauge;
		}
};

class HybridWaterCar : public HybridCar {
	private:
		int waterGauge;
	public:
		HybridWaterCar(int gas, int elec, int water) : HybridCar(gas, elec), waterGauge(water) {
			// empty
		}
		void ShowCurrentGauge() {
			cout << "Gasoline: " << GetGasGauge() << endl;
			cout << "Electricity: " << GetElectGauge() << endl;
			cout << "Water: " << waterGauge << endl;
		}
};

int main(void) {
	HybridWaterCar* hwc = new HybridWaterCar(50, 40, 30);
	hwc -> ShowCurrentGauge();

	delete hwc;

	return 0;
}
