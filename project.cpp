#include <iostream>
#include <conio.h>

using namespace std;

main()
{

    int TOTAL_STUDENTS = 1000; // total size
    int index = 7;

    // Data Structures
    string nameArray[TOTAL_STUDENTS] = {"ali", "ammar", "sara", "ahmed","zain", "nida","tariq"};
    int ageArray[TOTAL_STUDENTS] = {19, 20 , 21 , 22 , 20 , 23 , 19};
    float matricArray[TOTAL_STUDENTS] = {1050, 890 , 940 , 960 , 880 , 910 , 995};
    float interArray[TOTAL_STUDENTS] = {980 , 850 , 900 , 870 , 820 , 840 , 950};
    float ecatArray[TOTAL_STUDENTS] = {350, 280 , 300 , 330 , 270 , 310 , 360};
    string pref1Array[TOTAL_STUDENTS] = {"CE", "CS", "CS", "CE", "EE", "CE","CS"};
    string pref2Array[TOTAL_STUDENTS] = {"CS", "CE", "CE", "EE", "CS", "EE", "CS"};
    string pref3Array[TOTAL_STUDENTS] = {"EE", "CE", "CS", "CE", "EE", "CS", "CE"};
    float aggreArray[TOTAL_STUDENTS];


    // CRUD Create, Read, Update, Delete
    while (true)
    {
        // Main Header of UMS
        system("cls");
        cout << "-----------------------------------------------------" << endl;
        cout << "------- University Admission Management System-------" << endl;
        cout << "-----------------------------------------------------" << endl;

        cout << "User Menu " << endl;
        cout << "1. Admin " << endl;
        cout << "2. Student " << endl;
        cout << "3. Exit " << endl;
        cout << "Choose Option : " << endl;
        string userOption;
        cin >> userOption;

        cout << "You choose " << userOption << endl;
        if (userOption == "1")
        {
            // Write here the admin code
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << "Admin Menu : Login attempt " << i + 1 << endl;
                cout << "Enter username : ";
                string username;
                cin >> username;
                cout << "Enter Password : ";
                string password;
                cin >> password;
                if (username == "admin" && password == "123")
                {
                    cout << "Successfully login " << endl;

                    while (true)
                    {
                        system("cls");
                        cout << "1. Show All Students " << endl;
                        cout << "2. Search Student " << endl;
                        cout << "3. Update Student Record " << endl;
                        cout << "4. Generate Merit List " << endl;
                        cout << "5. Delete Record by Name " << endl;
                        cout << "6. Logout " << endl;
                        cout << "Choose the option : " << endl;
                        string adminOption;
                        cin >> adminOption;
                        if (adminOption == "1")
                        {
                            // show students record
                            cout << "Name\tAge\tMatric\tInter\tEcat\tPref1\tPref2\tPref3" << endl;
                            for (int i = 0; i < index; i++)
                            {   if(nameArray[i] != "" ){

                                cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                     << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                        }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // Find student by name;
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tInter\tEcat\tPref1\tPref2\tPref3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }

                        else if (adminOption == "3")
                        {
                            // update student record;
                            cout << "Enter the name you want to update record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "----------Old Record---------" << endl;
                                cout << "Name\tAge\tMatric\tInter\tEcat\tPref1\tPref2\tPref3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update: " << endl;
                                cout << "Enter your Name : ";
                                string name;
                                cin >> name;
                                cout << "Enter your age : ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks : ";
                                float matric;
                                cin >> matric;
                                cout << "Enter Inter Marks : ";
                                float inter;
                                cin >> inter;
                                cout << "Enter ECAT Marks : ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS, CE, EE as your preferences :  " << endl;
                                cout << "Enter your 1st preference : ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter your 2nd preference : ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter your 3rd preference : ";
                                string pref3;
                                cin >> pref3;
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = inter;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list(sorting)
                            for(int i = 0; i < index; i++){
                                float aggre = matricArray[i] / 1050.0 * 100 * 0.30 + interArray[i] / 1100.0 * 100 * 0.4 + ecatArray[i] / 400 * 100 * 0.3;
                                aggreArray[i] = aggre;
                            }

                            // 77 , 90 , 29 ,33
                            // sorting the data on the basis of aggregate
                            for(int i = 0; i+1 < index; i++){
                                for(int j = i; j < index; j++ ){
                                    if(aggreArray[i] < aggreArray[j]){
                                 
                                        //SWAP OPERATION
                                        //swaping of name
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;

                                        //swaping of age
                                        int tempAge = ageArray[i];
                                        ageArray[i] = ageArray[j];
                                        ageArray[j] = tempAge;

                                        //swaping of matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;

                                        //swaping of inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;

                                        //swaping of ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;

                                        //swaping of pref1
                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        //swaping of pref2
                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;
                                
                                        //swaping of pref2
                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        //swaping of aggregate
                                        float tempAggre = aggreArray[i];
                                        aggreArray[i] = aggreArray[j];
                                        aggreArray[j] = tempAggre;
                                    }
                                }
                            }
                            //code to display all data with aggregate
                          cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {   if(nameArray[i] != "" ){

                                cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggreArray[i] << endl;
                        }
                            }
                        //admit students into discplines
                            
                        }
                        else if (adminOption == "5")
                        {
                            // delete student record(sliding window)
                            cout << "Enter the name you want to delete record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if(found == true){
                            nameArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                cout<<"Record of "<<name<<" deleted "<<endl;
                            }else{
                                cout<<"Record not found "<<endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected " << endl;
                        }

                        cout << "Press any key to continue..";
                        getch();
                    }
                    cout << "Press any key to continue..";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or Password is invalid " << endl;
                }
                cout << "Press any key to continue..";
                getch();
            }
        }
        else if (userOption == "2")
        {
            // write here the student code
            system("cls");
            cout << "Welcome to UMS Student Menu " << endl;
            cout << "Enter your Name : ";
            string name;
            cin >> name;
            cout << "Enter your age : ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks : ";
            float matric;
            cin >> matric;
            cout << "Enter Inter Marks : ";
            float inter;
            cin >> inter;
            cout << "Enter ECAT Marks : ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS, CE, EE as your preferences :  " << endl;
            cout << "Enter your 1st preference : ";
            string pref1;
            cin >> pref1;
            cout << "Enter your 2nd preference : ";
            string pref2;
            cin >> pref2;
            cout << "Enter your 3rd preference : ";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = inter;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout << "Your data has been saved " << endl;

            cout << "Press any key to continue..";
            getch();
        }
        else if (userOption == "3")
        {
            break;
        }
        else
        {
            cout << "You entered wrong option " << endl;
        }
    } // End of our main while loop

    cout << endl
         << "Thanks for using this software ";
}
