#include "Header.h"

vector<int> DectoBin(int n) {
	vector<int> kq;

	if (n < 0) {
		kq.push_back(-1);		
	}
	else
	{		
		
		int du = 0;
		do
		{			
			du = n % 2;
			auto id = kq.begin();
			kq.insert(id, du);
			n = n/2;
		} while (n > 0);
		auto id = kq.begin();
		kq.insert(id,0);		
	}	
	return kq;
}
vector<string> DectoHex(int n) {
	vector<string> kq;
	if (n < 0) {
		kq.push_back(to_string(-1));
	}
	else
	{
		vector<int> chuoibit;
		int du = 0;
		do
		{
			du = n % 16;
			string item;
			switch (du)
			{
			case 10:
				item = "A";
				break;
			case 11:
				item = "B";
				break;
			case 12:
				item = "C";
				break;
			case 13:
				item = "D";
				break;
			case 14:
				item = "E";
				break;
			case 15:
				item = "F";
				break;
			default:
				item = to_string(du);
				break;
			}
			auto id = kq.begin();
			kq.insert(id, item);
			n = n / 16;
		} while (n > 0);
	}
	return kq;
}
int BintoDec(string chuoibit) {
	int kq=0;
	int n = chuoibit.length();
	for (int i = 0; i < n; i++) {
		int num = stoi(chuoibit.substr(i, 1));
		kq += pow(2, n - 1 - i) * num;
	}
	return kq;
}
int HextoDec(string chuoihex) {
	int kq = 0;
	int n = chuoihex.length();
	for (int i = 0; i < n; i++) {
		string item = chuoihex.substr(i, 1);
		int num;
		if (item == "A" ||item=="a") {
			num = 10;
		}
		else if(item=="B" || item == "b")
		{
			num = 11;
		}
		else if (item == "C" || item == "c")
		{
			num = 12;
		}
		else if (item == "D" || item == "d")
		{
			num = 13;
		}
		else if (item == "E" || item == "e")
		{
			num = 14;
		}
		else if (item == "F" || item == "f")
		{
			num = 15;
		}
		else
		{
			num = stoi(item);
		}		 
		kq += pow(16, n - 1 - i) * num;
	}
	return kq;
}
vector<string> BintoHex(string chuoibit) {
	vector<string> kq; 
	int n = chuoibit.length();
	bool dung = (n==0);
	do {
		int val = 0;
		for (int i = 0; i < 4; i++) {
			n = n - 1;
			if (n < 0) {
				dung = true;
				break;
			}
			val += stoi(chuoibit.substr(n, 1))*pow(2,i);
			
		}
		if (dung && val == 0) {
			break;
		}
		else{
			string item;
			switch (val)
			{
			case 10:
				item = "A";
				break;
			case 11:
				item = "B";
				break;
			case 12:
				item = "C";
				break;
			case 13:
				item = "D";
				break;
			case 14:
				item = "E";
				break;
			case 15:
				item = "F";
				break;
			default:
				item = to_string(val);
				break;
			}
			auto id = kq.begin();
			kq.insert(id, item);
		}		
	} while (!dung);	

	return kq;
}