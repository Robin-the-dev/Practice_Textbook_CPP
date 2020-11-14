#include <iostream>
#define MAX_NUM 5

int main(void) {
	int num;
	int result = 0;

	for(int i = 0; i < MAX_NUM; i++) {
		std::cout << i + 1 << "번째 정수 입력: ";
		std::cin >> num;

		result += num;
	}

	std::cout << "합계: " << result << std::endl;

	return 0;
}
