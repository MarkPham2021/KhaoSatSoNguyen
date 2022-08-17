#pragma once
#include<iostream>
#include<bitset>
#include<string>
#include<vector>
using namespace std;

//Cac ham xu ly bai tap 1

vector<int> DectoBin(int n);
vector<string> DectoHex(int n);
int BintoDec(string chuoibit);
int HextoDec(string chuoihex);
vector<string> BintoHex(string chuoibit);

//Cac ham xu ly bai tap 2
int * AddSingle(int a, int b);
string Formatbitstr(string bit);
string Addition(string bit1, string bit2);
bool isoverFlow(string bit1, string bit2);
string OppBit(string bit);
string Subtraction(string bit1, string bit2);
string SHLBit(string bit);
string SHRBit(string bit);