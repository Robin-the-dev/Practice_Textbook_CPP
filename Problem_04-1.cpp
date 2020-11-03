#include <iostream>

using namespace std;

class FruitSeller {
	private:
		int APPLE_PRICE;
		int numOfApples;
		int myMoney;

	public:
		void InitMembers(int price, int num, int money) {
			APPLE_PRICE = price;
			numOfApples = num;
			myMoney = money;
		}

		int SaleApples(int money) {
			if(money <= 0) {
				cout << "You need to pay!!!" << endl;
				return 0;
			}

			int num = money / APPLE_PRICE;
			numOfApples -= num;
			myMoney += money;
			return num;
		}

		void ShowSalesResult() const {
			cout << "Rest apples: " << numOfApples << endl;
			cout << "Sales: " << myMoney << endl;
		}
};

class FruitBuyer {
	private:
		int myMoney;
		int numOfApples;

	public:
		void InitMembers(int money) {
			myMoney = money;
			numOfApples = 0;
		}

		void BuyApples(FruitSeller &seller, int money) {
			if(money <= 0) {
				cout << "You need to pay!!!" << endl;
				return;
			}
			numOfApples += seller.SaleApples(money);
			myMoney -= money;
		}

		void ShowBuyResult() const {
			cout << "Money: " << myMoney << endl;
			cout << "Number of Apples: " << numOfApples << endl << endl;
		}
};

int main(void) {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, -1000);

	cout << "Seller" << endl;
	seller.ShowSalesResult();
	cout << "Buyer" << endl;
	buyer.ShowBuyResult();

	return 0;
}
