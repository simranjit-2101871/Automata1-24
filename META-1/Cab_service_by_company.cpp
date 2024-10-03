/*QUESTION-> A company wishes to provide cab service fo their N employees.The employees have IDs ranging from 0 to N-1.The company has calculated 
the total distance from a resideance to the company, cosnidering the path to be foloowed by cab is a straight path. The dsitance for the employees
who live to the left sie of the comapny is rpresented with negative sign and those right side are rpresented with postive sign. The cab will be 
alloted a range distance,the coampny wishes to find the didstance for the employees who live within the particualr distnace range
Write an alogrithim to find the distance for the employees who live wothin the distances range.
*/

#include <iostream>
#include <cmath>

void find_distances_in_range(int employee_distances[], int N, int distance_range, int result[], int& result_count) {
    result_count = 0;

    for (int i = 0; i < N; ++i) {
        if (std::abs(employee_distances[i]) <= distance_range) {
            result[result_count++] = employee_distances[i];
        }
    }

    if (result_count == 0) {
        result[0] = 0;
        result_count = 1;
    }
}

int main() {
    int N; // Number of employees
    std::cout << "Enter the number of employees: ";
    std::cin >> N;

//int employee_distances[N]; // Assuming the maximum number of employees won't exceed N
    std::cout << "Enter the distances of the employees from the company (negative for left, positive for right):" << std::endl;
    for (int i = 0; i < N; ++i) {
//std::cin >> employee_distances[i];
    }

    int distance_range;
    std::cout << "Enter the distance range: ";
    std::cin >> distance_range;

//int result[N]; // Result array, assuming maximum size won't exceed N
    int result_count;

//find_distances_in_range(employee_distances, N, distance_range, result, result_count);

    std::cout << "Distances within the range:";
    for (int i = 0; i < result_count; ++i) {
//std::cout << " " << result[i];
    }
    std::cout << std::endl;

    return 0;
}
//it is custom case one can modify for a gerneric code
