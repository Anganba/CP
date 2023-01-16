#include <bits/stdc++.h>

using namespace std;

/*

*/

class Patient
{
    string id, name, disease, address;

public:
    Patient() {}
    Patient(string id, string name, string disease, string address)
    {
        this->id = id;
        this->name = name;
        this->disease = disease;
        this->address = address;
    }
    void patdisplay()
    {
        cout << "Patient id: " << id << endl;
        cout << "Patient name: " << name << endl;
        cout << "Patient department name: " << disease << endl;
        cout << "Patient address: " << address << endl;
    }
};
class Doctor
{
    string name, department, address;
    vector<Patient> patients;

public:
    Doctor(string Name, string Department, string Address, vector<Patient> pats)
    {
        name = Name;
        department = Department;
        address = Address;
        for (int i = 0; i < pats.size(); i++)
        {
            patients.push_back(pats[i]);
        }
    }
    void display()
    {
        cout << "Doctor Name: " << name << endl;
        cout << "Doctor Address: " << address << endl;
        cout << "Doctor department: " << department << endl;

        for (int i = 0; i < patients.size(); i++)
        {
            cout << "Patient " << i + 1 << endl;
            patients[i].patdisplay();
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    Patient pat("0121", "Nasser", "Coronary Artery Disease", "Cumilla");
    // pat.patdisplay();

    vector<Patient> p;
    p.push_back(pat);
    Doctor dc("Dr. Rahim", "Cardiologists", "Cumilla Sadar", p);
    dc.display();

    return 0;
}
