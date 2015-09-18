/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 18 Сентябрь 2015 г., 16:15
 */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	int i, temp, n, p1, p2;
	while (getline(stream, line)) {
		i = 0;
		while(line[i] != ',') {
			i++;
		}
		//cout << line.substr(0, i) << '|';
		n = atoi(line.substr(0, i).c_str());
		temp = ++i;
		while(line[i] != ',') {
			i++;
		}
		//cout << line.substr(temp, i-temp) << '|';
		p1 = atoi(line.substr(temp, i-temp).c_str());
		temp = ++i;
		p2 = atoi(line.substr(temp, line.length()-temp).c_str());
		//cout << line.substr(temp, line.length()-temp) << '|';
		
		
		//cout << n << '|' << p1 << '|' << p2 << '|';
		
		//cout << "POW: " << pow(2, p1-1) + pow(2, p2-1) << endl;
		temp = pow(2, p1-1) + pow(2, p2-1);
		
		//cout << '{' << pow(2, p1-1) << '}';
		
		n = n & temp;
		
		//cout << '[' << n << ']';

		if (n == temp || n == 0) {
			cout << "true\n";
		}
		else {
			cout << "false\n";
		}
		
		//cout << line[i];
		//cout << endl << line << endl;
	}
	
	return 0;
}

