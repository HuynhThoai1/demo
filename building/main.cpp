#include <iostream>
#include <format>
#include <print>

/**
 * Tính tổng các số nguyên trong khoảng [start, end).
 * 
 * @param start  Giá trị bắt đầu (bao gồm).
 * @param end    Giá trị kết thúc (không bao gồm).
 * @return       Tổng các số nguyên từ start đến end - 1.
 * 
 * Ví dụ: calcSum(1, 5) = 1 + 2 + 3 + 4 = 10
 */ // 1 điểm
int calcSum(int start, int end);
void salute(std::string massage);
void bye();
void calcSumSeriesUseCase();

int main()
{
    salute("Chương trình tính tổng dãy số\n");
    
    calcSumSeriesUseCase(); // Siêu rút gọn của clean architecture
    
    bye();
    
    return 0;
}

void calcSumSeriesUseCase() {
    int start = 1;
    int end = 10;
    int sum = calcSum(start, end);
    
    std::print(
        "Tổng từ {0} đến {1} là: {2}",
        start, end, sum
    );
}

void salute(std::string message) {
    std::cout << message;
}

void bye() {
    std::cout << "\nChương trình đang thoát. Bấm enter để kết thúc..."; // 1 điểm
    std::cin.get();
}

int calcSum(int start, int end) {
    int sum = 0;
    for(int i = start; i < end; i++) {
        sum += i;
    }
    return sum;
}

