#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;

int n;
int a[N];

struct Item{
	int val, id;
};
Item b[N];
Item c[N]; int nc = 0;

void nhap(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
}
void taomangB(){
	for(int i = 0; i < n; i++) {
		b[i].val = a[i];
		b[i].id = i;
	}
}

bool cmpItem(Item a, Item b) {
	// Hàm trả về true nếu a được sắp xếp trước b
	// return a.val < b.val || (a.val == b.val && a.id < b.id);
	if(a.val < b.val) return true;
	if(a.val > b.val) return false;

	if(a.id < b.id) return true;
	return false;
}
void sapXepMangB(){
	sort(b, b + n, cmpItem);
}

void chonGiaTri(){
	/// Đưa 1 giá trị vào mảng C thì:
	// c[nc] = val;
	// ++nc;

	for(int i = 0; i < n; i++) {
		if(i == 0) {
			/// Đưa i vào mảng chọn
			c[nc] = b[i];
			++nc;
		}
		else {
			if(b[i].val == b[i - 1].val) continue;

			/// Đưa i vào mảng chọn
			c[nc] = b[i];
			++nc;
		}
	}
}

bool cmpItemIndex(Item a, Item b){
	return a.id < b.id;
}

void xuatGiaTri(){
	sort(c, c + nc, cmpItemIndex);
	for(int i = 0; i < nc; i++) cout << c[i].val << ' ';
}

int main(){
	nhap();
	taomangB();
	sapXepMangB();
	chonGiaTri();
	xuatGiaTri();
}