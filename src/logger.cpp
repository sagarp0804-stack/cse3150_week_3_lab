#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
	if (size == capacity){
	    throw std::string("Full");        
    }
	labels[size] = label;
	values[size] = value;
    ++size;
	
}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
    *valuePtr = newValue;
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
    std::cout << label << ": " << value << std::endl;
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
    if (size == 0){
        throw std::string("Empty");
    }
    double sum = 0.0;
    for (int i = 0; i < size; i++){
        sum += values[i];
    }
    return sum/size;
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    if (size == 0){
        throw std::string("Empty");
    }
    double min_val = values[0];
    for (int i = 1; i < size; i++){
        if (values[i] < min_val) {
            min_val = values[i];
        }
    }
    return min_val;
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    if (size == 0){
        throw std::string("Empty");
    }
    double max_val = values[0];
    for (int i = 1; i < size; i++){
        if (values[i] > max_val){
            max_val = values[i];
        }
    }
    return max_val;
}
