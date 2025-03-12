#include <iostream>
#include <thread>  // Thư viện để thêm hiệu ứng thời gian trễ
#include <chrono>  // Thư viện để xử lý thời gian

using namespace std;

// Hàm để mã hóa/giải mã mật khẩu bằng phép XOR
string xorCipher(const string& password, char key) {
    string result = password;
    for (char& c : result) {
        c ^= key;  // Mã hóa/giải mã bằng phép XOR
    }
    return result;
}

void displayPassword(const string& password) {
    cout << "Mật khẩu giải nén của bạn là: ";
    for (char c : password) {
        cout << c;  // Hiển thị từng ký tự
        cout.flush();  // Đảm bảo ký tự được hiển thị ngay
        this_thread::sleep_for(chrono::milliseconds(300));  // Thời gian trễ 300ms giữa các ký tự
    }
    cout << endl;
}

int main() {
    // Mã hóa mật khẩu gốc 'levanhau' bằng XOR
    string encodedPassword = "\x07\x0f\x11\x0e\x00\x06\x0b\x15";  // Đây là mật khẩu đã được mã hóa
    char key = 'K';  // Chìa khóa để mã hóa/giải mã

    // Giải mã mật khẩu khi cần hiển thị
    string password = xorCipher(encodedPassword, key);

    // Hiển thị mật khẩu với hiệu ứng
    displayPassword(password);

    return 0;
}
