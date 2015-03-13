// Google_2_hash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <fstream>
#include <unordered_map>

using namespace std;

int graph[20][20];
string func[20];

int main()
{
	ifstream input("task-2-extra-sample-in.txt");
	ofstream output("output2-extra.txt");

	int n;

	input >> n;

	unordered_map<string, int> hash;

	for (int i = 0; i < n; i++){
	
		input >> func[i];
		hash[func[i]]++;
	}

	return 0;
}

