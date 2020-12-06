//
//  main.cpp
//  AdventOfCodeDay1
//
//  Created by Zach Howes on 12/5/20.
//

#include <iostream>
#include <fstream>
#include <vector>

void addFileToArray(std::vector<int>&,std::ifstream&);

int findAnswer(std::vector<int>&);

int main(int argc, const char * argv[]) {
	std::ifstream in;
	in.open(argv[1]);
	
	if (!in.is_open()) {
		std::cout << "The file could not open" << std::endl;
		exit(-1);
	}
	
	std::vector<int> arr;
	addFileToArray(arr, in);
	
	std::cout << "The answer is " << findAnswer(arr) << "\n";
	
	

	return 0;
}


void addFileToArray(std::vector<int> &arr,std::ifstream &inputFile) {
	int num;
	while (inputFile >> num) {
		arr.push_back(num);
	}
	
}

int findAnswer(std::vector<int>& arr) {
	
	for (int i = 0; i <= arr.size(); ++i) {
		for (int j = i + 1; j < arr.size(); ++j) {
			if (arr[i] + arr[j] == 2020) {
				return arr[i] * arr[j];
			}
		}
	}
	
	return 0;
}
