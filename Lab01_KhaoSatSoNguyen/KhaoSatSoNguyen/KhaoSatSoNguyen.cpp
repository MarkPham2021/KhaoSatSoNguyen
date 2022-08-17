// KhaoSatSoNguyen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Header.h"


int main()
{
	//int n;	
 //  cout << "----------------------------------------------------------------------\n";
 //  cout << "Xin moi nhap mot so nguyen duong:\n";
 //  cin >> n;
 //  vector<int> kq = DectoBin(n);
 //  cout << "Chuyen " << n << " thanh so nhi phan: ";
 //  for (int i = 0; i < kq.size(); i++)
 //  {
	//   cout << kq[i];
 //  }
 //  cout << "\n";
 //  cout << "----------------------------------------------------------------------\n";
 //  vector<string> hex = DectoHex(n);
 //  cout << "Chuyen " << n << " thanh so thap luc phan: ";
 //  for (int i = 0; i < hex.size(); i++)
 //  {
	//   cout << hex[i];
 //  }
 //  cout << "\n";
 //  cout << "----------------------------------------------------------------------\n";
 //  string chuoibit ;   
 //  cout << "Nhap chuoi nhi phan (viet lien, khong khoang trang): \n";
 //  
 //  cin>>chuoibit;
 //  int num = BintoDec(chuoibit);
 //  cout << "chuoi nhi phan: " << chuoibit << " = " << num << " (he thap phan).";
 //  cout << "\n";
 //  cout << "----------------------------------------------------------------------\n";
 //  string chuoihex;
 //  cout << "Nhap chuoi thap luc phan (viet lien, khong khoang trang): \n";
 //  //cin.ignore();
 //  cin>>chuoihex;
 //  int decnum = HextoDec(chuoihex);
 //  cout << "chuoi thap luc phan: " << chuoihex << " = " << decnum<< " (he thap phan).";
 //  cout << "\n";
 //  cout << "----------------------------------------------------------------------\n";
 //  cout << "Nhap chuoi nhi phan (viet lien, khong khoang trang): \n";
 //  cin >> chuoibit;
 //  vector<string> hexbin = BintoHex(chuoibit);
 //  cout << "Chuyen " << chuoibit<< " thanh so thap luc phan: ";
 //  for (int i = 0; i < hexbin.size(); i++)
 //  {
	//   cout << hexbin[i];
 //  }

 //  cout << "\n";
 //  cout << "----------------------------------------------------------------------\n";
	string a= "01100111";
	string b = "01100001";//2
	
	cout << a<<" + "<<b<<" = " << AdditionM(a, b) << "\tis overFlow: " << isoverFlow(a, b)<<"\n";
	cout << a << " - " << b << " = " << Subtraction(a, b) << "\tis overFlow: " << isoverFlow(a, OppBit(b))<<"\n";
	cout << a << " *M " << b << " = " << MultiplicationM(a, b) << "\n";
	cout << a << " * " << b << " = " << Multiplication(a, b) << "\n";
   return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
