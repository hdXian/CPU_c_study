#include <iostream>

using namespace std;

// ����ü�� �⺻ ���� �����ڴ� public�̴�.
struct TV {
private:
	int volume;
	bool powerOn;
	int channel;

public:
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100)
			volume = vol;
		cout << "�Ҹ��� " << volume << "�� �ٲ���ϴ�." << endl;
	}
	
	void on() {
		cout << "TV�� �մϴ�." << endl;
		powerOn = true;
	}

	void off() {
		cout << "TV�� ���ϴ�." << endl;
		powerOn = false;
	}

	void setChannel(int cnl) {
		if (cnl >= 0 && cnl <= 99)
			channel = cnl;
		cout << "ä���� " << channel << "�� �ٲ���ϴ�." << endl;
	}
};

int main() {
	TV lg;
	// lg.powerOn = true; �ܺο��� ���� �Ұ�
	// lg.channel = 10; �ܺο��� ���� �Ұ�
	lg.setVolume(50);
	lg.setChannel(10);
	lg.on();
	lg.setChannel(-24);
}