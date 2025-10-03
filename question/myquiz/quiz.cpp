#include <iostream>
#include <format>
#include <print>
#include <string>


void salute(std::string message);
void bye();
void printMail(char charEmail[3]);

/* Câu hỏi 1
Hàm question1 đưa ra một câu hỏi lý thuyết OOP về tính đa hình (Polymorphism) trong C++.
Người dùng được chọn một trong bốn phương án trả lời (a, b, c hoặc d).
Sau khi nhập, hàm sẽ lấy ký tự đầu tiên của chuỗi người dùng nhập làm kết quả.
Nếu người dùng không nhập gì, hàm sẽ trả về ký tự '0' mặc định.
*/
char question1();

/* Câu hỏi 2
Hàm question2 đưa ra một bài toán về toán tử bit trong C++.
Câu hỏi là tính giá trị của biểu thức: (220 & 200) | (150 ^ 91).
Sau khi in câu hỏi, hàm yêu cầu người dùng nhập một số nguyên dương làm đáp án.
Nếu người dùng nhập, hàm lấy ký tự cuối cùng trong chuỗi nhập vào để lưu làm kết quả.
Nếu không nhập gì, hàm mặc định trả về '0'.
*/
char question2();

/* Câu hỏi 3
Hàm question3 dùng để đưa ra một câu hỏi trắc nghiệm nhỏ về C++,
cụ thể là hỏi kết quả in ra màn hình của một đoạn code có phép dịch bit.
Hàm in đoạn code ví dụ, sau đó yêu cầu người dùng nhập vào 1 ký tự làm đáp án.
Nếu người dùng nhập thì lấy ký tự đầu tiên, nếu bỏ trống thì mặc định trả về '0'.
*/
char question3();

int main() {
    salute("Câu hỏi của chương trình tìm ra email bí ẩn: \n");
    char charEmail[3] = { '0', '0', '0' };
    charEmail[0] = question1();
    charEmail[1] = question2();
    charEmail[2] = question3();
    printMail(charEmail);
    std::cout << charEmail[1];
    bye();
    return 0;
}


void salute(std::string message) {
    std::cout << message;
}
void bye() {
    std::cout << "\nChương trình đang thoát. Bấm enter để kết thúc...";
    std::cin.get();
}  
void printMail(char charEmail[3]){
     std::print(
        "\nChúc mừng bạn đã trả lời xong 3 câu hỏi!\nHãy gửi lời mời đến {0}o{1}ngvu150{2}06@gmail.com để chúng ta cùng hợp tác nhé!\n",
        charEmail[2],charEmail[0],charEmail[1]
    );
}
char question1(){
    char result;
    std::cout << "\nCâu 4: Trong lập trình hướng đối tượng (OOP), tính đa hình (Polymorphism) trong C++ cho phép:\n"
              << "a. Một hàm hoặc toán tử có thể có nhiều cách cài đặt khác nhau\n"
              << "b. Một lớp có thể kế thừa từ nhiều lớp cha\n"
              << "c. Giấu dữ liệu nội bộ, chỉ cho phép truy cập qua phương thức public\n"
              << "d. Tạo đối tượng từ lớp trừu tượng\n";

    // Hỏi người dùng nhập đáp án
    std::cout << "Đáp án là (nhập một ký tự a, b, c hoặc d): ";
    std::string buffer;
    getline(std::cin, buffer);

    // Nếu người dùng có nhập thì lấy ký tự đầu tiên,
    // nếu không thì mặc định gán '0'
    if(buffer.length() > 0) {
        result = buffer[0];
    } else {
        result = '0';
    }

    return result; // Trả về ký tự đáp án mà người dùng nhập
}
char question2(){
    char result;
    std::cout << "\nCâu 2: Kết quả của phép toán sau:\n"
        << "(220 & 200)|(150 ^ 91)=?\n";

    // Yêu cầu người dùng nhập đáp án
    std::cout << "Đáp án là (Nhập một số nguyên dương) : ";
    std::string buffer;
    getline(std::cin, buffer);

    // Nếu người dùng có nhập thì lấy ký tự cuối cùng,
    // còn nếu không nhập gì thì gán mặc định là '0'
    if(buffer.length() > 0) {
        result = buffer[buffer.length()-1];
    }
    else {
        result = '0';
    }

    return result; // Trả về đáp án mà người dùng nhập
}
char question3(){
    char result;

    // In ra câu hỏi và đoạn code mẫu
    std::cout << "\nCâu 3: Kết quả in ra màn hình của đoạn code sau:\n"
        << "int main(){\n"
        << "std::string s;\n"
        << "s += static_cast<char>(0x1A << 2);\n"
        << "s += static_cast<char>(0xC2 >> 1);\n"  
        << "s += static_cast<char>(0x39 << 1);\n"  
        << "s += static_cast<char>(0x19 << 2);\n"  
        << "std::cout << s << '\\n';\n"
        << "return 0;\n}";

    // Hỏi người dùng nhập đáp án
    std::cout << "\nNhập đáp án : ";
    std::string buffer;
    getline(std::cin, buffer);

    // Nếu người dùng nhập ít nhất 1 ký tự thì lấy ký tự đầu tiên,
    // ngược lại gán mặc định là '0'
    if(buffer.length() > 0) {
        result = buffer[0];
    } else {
        result = '0';
    }
    return result; // Trả về đáp án mà người dùng nhập
}





