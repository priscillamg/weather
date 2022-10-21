//File Name: assign5_pmg45.cpp

//

//Author: Priscilla Garza

//Co Author: Andrew Alvarez

//Date: 10/31/2017

//Assignment Number: 5

//CS 1428.006 Fall 2017

//Instructor: Jill Seaman

//

// This program computes the weather statistics for New Braunfels (2017) for the following months : June, July , August.





#include <iostream>

#include <fstream>

#include <iomanip>



using namespace std;



int main(){

    

    int totalTemp=0; // This indicates the total temperatures in the month of June

    int totalTemp2=0;// This indicates the total temperatures in the month of July

    int totalTemp3=0;// This indicates the total temperatures in the month of August

    int count=0; // This count variable will sum up each day of the month

    int maximumtempJun=0; // This represents the highest temperature in the month of June

    int maximumtempJul=0;// This represents the highest temperature in the month of July

    int maximumtempAug=0;// This represents the highest temperature in the month of August

    float averageTemp=0.0; // This will represent the average temperature of the entire summer

    const int June=30; // This represents the total number of days in the month of June

    int days [June];// This represents the total number of days that will be summed up in the month of June

    const int July=30;// This represents the total number of days in the month of July

    int days2 [July];// This represents the total number of days that will be summed up in the month of July

    const int August=30;// This represents the total number of days in the month of August

    int days3 [August];// This represents the total number of days that will be summed up in the month of August

    string date; // This represents any day of a certain month

    string maximumTemp; // This represents the highest temperature reached for the month of June

    string maximumTemp2;// This represents the highest temperature reached for the month of July

    string maximumTemp3;// This represents the highest temperature reached for the month of August

    string fileName; // This represents the name of the file the user inputs

    

    

    // Prompts user to enter the name of the file

    

    cout<< "Please enter the name of the temperature data file:";

    cin>>fileName;

    

    // Opens file, as well as checks if the file is available or not

    

   ifstream fin;

    fin.open(fileName.c_str());

    if (!fin)

    {

        cout << "ERROR - File Not Able to Open";

        return -1;

    }

    

    // Ignores the first line of the file in order to obtain the data

    getline(fin,fileName);

    

    

    // Uses the "for" loop in order to put each day's data into the variable count. It also uses the if statements to find the maximum temperature in the specific month.

    

    for (int i=0;i<June;i++)

    {

        fin>>date;

        fin>>days[i];

        fin>>ws;

       

        if (days[i]>=100)

        {

            count++;

        }

       

        if (days[i]>=maximumtempJun)

        {

            maximumtempJun=days[i];

            maximumTemp=date;

        }

        totalTemp+= days[i];

        

    }

  

    // Uses the "for" loop in order to put each day's data into the variable count. It also uses the if statements to find the maximum temperature in the specific month.

   

    for (int i=0;i<July;i++)

    {

        fin>>date;

        fin>>days2[i];

        fin>>ws;

        if (days2[i]>=100)

        {

            count++;

        }

        if (days2[i]>=maximumtempJul)

        {

            maximumtempJul=days2[i];

            maximumTemp2=date;

        }

        totalTemp2+= days2[i];

        

    }

  

    // Uses the "for" loop in order to put each day's data into the variable count. It also uses the if statements to find the maximum temperature in the specific month.

    

    for (int i=0;i<August;i++)

    {

        fin>>date;

        fin>>days3[i];

        fin>>ws;

        if (days3[i]>=100)

        {

            count++;

        }

        if (days3[i]>=maximumtempAug)

        {

            maximumtempAug=days3[i];

            maximumTemp3=date;

        }

       

        totalTemp3+= days3[i];

        

    }

    

    // This finds the average temperature and is formatted to one decimal place

   

    cout<<fixed<<setprecision(1); averageTemp=(totalTemp+totalTemp2+totalTemp3)/90.0;

    

    // Closes the file

    

    fin.close();

    

    // Displays the information obtained from the file

    

    cout << "High temperature statistics for the summer: "<< endl;

   

    cout << "Average daily high temperature: "<< averageTemp <<endl;

    

    cout << "Number of days that reached 100 degrees: "<<count<<endl;

   

    cout << "Maximum temperature for June: "<<maximumtempJun<<" occurred on "<<maximumTemp<<endl;

    

    cout << "Maximum temperature for July: "<<maximumtempJul<<" occurred on "<<maximumTemp2<<endl;

    

    cout << "Maximum temperature for August: "<<maximumtempAug<<" occurred on "<<maximumTemp3<<endl;

    

    return 0;

    }

