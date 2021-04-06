/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logic
 *
 * Created on June 10, 2020, 5:14 PM
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *dept_name;
    char *rank;
    int ratings;
    int dept_no;
} dept_info;

typedef struct {
    char *street;
    char *town;
    char *state;
} address_info;

typedef struct {
    char *full_name;
    int employee_Id;
    int age;
    address_info *home_address;
    dept_info *department;
    double salary;
} employee_data;

int main(int argc, char **argv) {

    employee_data employees[10];

    employees[0].full_name = "Okeke Enoch Chibuzo";
    employees[0].age = 27;
    employees[0].home_address->street = "Drive A5";
    employees[0].home_address->town = "Victoria Island";
    employees[0].home_address->state = "Lagos";
    employees[0].department->dept_name = "Algorithm Development";
    employees[0].department->dept_no = 912;
    employees[0].department->rank = "Senior Developer";
    employees[0].department->ratings = 8;
    employees[0].employee_Id = 2;
    employees[0].salary = 700000;

    printf("Full Name: %s\nAge: %d\nHome Address: %s, %s %s\nDepartment Name: %s\nDepartment Number: %s\nRank: %s\nRatings: %d Star(s)\nEmployee Id: G-%d-%d\nsalary: NGN %f ", employees[0].full_name, employees[0].age, employees[0].home_address->street, employees[0].home_address->town, employees[0].home_address->state, employees[0].department->dept_name, employees[0].department->dept_no, employees[0].department->rank, employees[0].department->ratings, employees[0].department->dept_no, employees[0].employee_Id, employees[0].salary);

    return (EXIT_SUCCESS);
}
