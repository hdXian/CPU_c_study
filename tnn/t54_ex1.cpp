#include <iostream>

using namespace std;

// 구조체의 기본 접근 제어자는 public이다.
struct TV {
private:
	int volume;
	bool powerOn;
	int channel;

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100)
			volume = vol;
		cout << "소리를 " << volume << "로 바꿨습니다." << endl;
	}
	
	void on() {
		cout << "TV을 켭니다." << endl;
		powerOn = true;
	}

	void off() {
		cout << "TV를 끕니다." << endl;
		powerOn = false;
	}

	void setChannel(int cnl) {
		if (cnl >= 0 && cnl <= 99)
			channel = cnl;
		cout << "채널을 " << channel << "로 바꿨습니다." << endl;
	}
};

int main() {
	TV lg;
	// lg.powerOn = true; 외부에서 접근 불가
	// lg.channel = 10; 외부에서 접근 불가
	lg.setVolume(50);
	lg.setChannel(10);
	lg.on();
	lg.setChannel(-24);
}