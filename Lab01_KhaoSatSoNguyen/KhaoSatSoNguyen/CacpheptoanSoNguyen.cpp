#include "Header.h"

/*
	Yeu cau: Thuc hien cac phep toan: cong/tru/nhan chia 2 số nhị phân 8 bit (số nguyên có dấu dạng bù 2)

*/
int * AddSingle(int a, int b) {
	static int r[2];
	if (a == 0 && b == 0) {
		r[0] = 0;
		r[1] = 0;
	}
	else if ((a == 1 && b == 0) || (a == 0 && b == 1)) {
		r[0] = 0;
		r[1] = 1;
	}
	else if (a == 1 && b == 1 ) {
		r[0] = 1;
		r[1] = 0;
	}
	else
	{
		r[0] = -1;
		r[1] = -1;
	}
	return r;
}
string Formatbitstr(string bit) {
	string r;
	int l = bit.length();
	string s = "00000000";
	if (l > 8) {
		r = bit.erase(0, l - 8);
	}
	else if(l<8)
	{
		s.erase(0, l);
		r = s + bit;
	}
	else
	{
		r = bit;
	}
	return r;
}
bool isoverFlow(string bit1, string bit2) {
	string c = Addition(bit1, bit2);
	string sbit1 = Formatbitstr(bit1);
	string sbit2 = Formatbitstr(bit2);
	if ((c.substr(0, 1) == "1" && sbit1.substr(0, 1) == "0" && sbit2.substr(0, 1) == "0") || (c.substr(0, 1) == "0" && sbit1.substr(0, 1) == "1" && sbit2.substr(0, 1) == "1")) {
		return true;
	}
	else
	{
		return false;
	}
}
string Addition(string bit1, string bit2) {
	string r="00000000";
	string sbit1= Formatbitstr(bit1);
	string sbit2 = Formatbitstr(bit2);
	int mem=0, s;
	for (int i = 7; i >= 0; i--) {
		int a = sbit1[i] - 48;
		int b = sbit2[i] - 48;
		int* p = AddSingle(a, b);
		s = *(p + 1);
		int m1 = *p;
		int *q = AddSingle(s, mem);		
		if (m1 == 0) {
			mem = *q;
		}
		else
		{
			mem = m1;
		}
		s = *(q + 1);
		r.replace(i,1, to_string(s));
	}
	return r;
}
string AdditionM(string bit1, string bit2) {
	string r = "000000000";
	string sbit1 = Formatbitstr(bit1);
	string sbit2 = Formatbitstr(bit2);
	int mem = 0;
	int s;
	for (int i = 7; i >= 0; i--) {
		int a = sbit1[i] - 48;
		int b = sbit2[i] - 48;
		if (a + b + mem == 0) {
			s = 0;
			mem = 0;
		}
		else if (a + b + mem == 1) {
			s = 1;
			mem = 0;
		}
		else if (a + b + mem == 2) {
			s = 0;
			mem = 1;
		}
		else if (a + b + mem == 3) {
			s = 1;
			mem = 1;
		}		
		r.replace(i+1, 1, to_string(s));
	}
	r.replace(0, 1, to_string(mem));
	return r;
}
string OppBit(string bit) {
	bit = Formatbitstr(bit);
	for (int i = 0; i < bit.length(); i++) {
		if (bit.substr(i, 1) == "1") {
			bit.replace(i, 1, "0");
		}
		else
		{
			bit.replace(i, 1, "1");
		}
	}
	string r = Addition(bit, "1");
	return r;
}
string Subtraction(string bit1, string bit2) {
	bit2 = OppBit(bit2);
	return Addition(bit1, bit2);
}
string SHLBit(string bit) {
	string r = bit.substr(1);
	r=r+"0";
	return r;
}
string SHRBit(string bit) {
	int l = bit.length();
	string r = "0" + bit.substr(0,l-1);	
	return r;
}
string MultiplicationM(string bit1, string bit2) {
	string r;
	bit1 = Formatbitstr(bit1);
	bit2 = Formatbitstr(bit2);
	r = "00000000" + bit2 + "0";
	string a;
	string b = "00000000";
	string qq;
	int k = 8;
	while (k>0)
	{
		a = r.substr(0, 8);
		qq = r.substr(15, 2);
		if (qq == "10") {
			b = Subtraction(a, bit1);
			r.replace(0, 8, b);
		}
		else if (qq == "01") {
			b = Addition(a, bit1);
			r.replace(0, 8, b);
		}		
		r= SHRBit(r);
		k--;
	}	
	return r.substr(0,16);
}
string Multiplication(string bit1, string bit2) {
	string r;
	bit1 = Formatbitstr(bit1);
	bit2 = Formatbitstr(bit2);
	r = "000000000" + bit2;
	string a;
	string b;
	string q;
	int k = 8;
	do {
		a = r.substr(1, 8);
		q = r.substr(16, 1);
		if (q == "1") {
			b = AdditionM(a, bit1);
			r.replace(0, 9, b);
		}
		r = SHRBit(r);
		k=k-1;
	} while (k >= 0);
	
	return r.substr(1);
}