# -*- coding: utf-8 -*-
"""
Created on Mon Aug 27 01:54:48 2018

@author: Mossy
"""
import csv
def menu():
        
    print("Press 1 to Search by City")
    print("Press 2 to Search by Day")
    print("Press 3 to Search by Month")
    print("Press 4 to Search by Year")
    
    choice = input()
    if choice == "1":  
        cityinput = input("Enter City:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if cityinput == row[1]: # if the username shall be on column 3 (-> index 2)
                    print(row)

    
    if choice == "2":  
        dayinput = input("Enter Day:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if dayinput == row[10]: 
                    print(row)

    if choice == "3":  
        monthinput = input("Enter Month:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if monthinput == row[9]: 
                    print(row)

    
    if choice == "4":  
        yearinput = input("Enter Year:")
        with open('data1.csv', 'rt') as f:
            reader = csv.reader(f, delimiter=',')
            for row in reader:
                if yearinput == row[8]: 
                    print(row)
menu()