#include<iostream>
 
using namespace std;
 
struct Time {
	int hour, minute, second;
};
 
void readData(Time& data) {
	cout << "Nhap thoi gian cach nhau boi dau cach: ";
	cin >> data.hour >> data.minute >> data.second;
}
 
// neu a lon hon b -> 1
// neu b lon hon a -> -1
// neu bang nhau -> 0
int comp(Time a, Time b) {
	if (a.hour > b.hour) return 1;
	if (a.hour < b.hour) return -1;
	if (a.minute > b.minute) return 1;
	if (a.minute < b.minute) return -1;
	if (a.second > b.second) return 1;
	if (a.second < b.second) return -1;
	return 0;
}
 
void Hieu(Time a, Time b) {
	int muon = 0;
	Time Ketqua;
 
	if (a.second > (b.second + muon)) {
		Ketqua.second = a.second - (b.second + muon);
		muon = 0;
	}
	else {
		Ketqua.second = 60 + a.second - (b.second + muon);
		muon = 1;
	}
 
	if (a.minute > (b.minute + muon)) {
		Ketqua.minute = a.minute - (b.minute + muon);
		muon = 0;
	}
	else {
		Ketqua.minute = 60 + a.minute - (b.minute + muon);
		muon = 1;
	}
 
	Ketqua.hour = a.hour - (b.hour + muon);
 
	cout << Ketqua.hour << ":" << Ketqua.minute << ":" << Ketqua.second;
}
 
int main()
{
	Time a, b;
	readData(a);
	readData(b);
	int cmp = comp(a, b);
	if (cmp == 0) cout << 0;
	else if (cmp == 1) Hieu(a, b);
	else Hieu(b, a);
}