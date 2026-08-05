#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;
};

void merge(Employee arr[], int low, int mid, int high)
{
    Employee temp[100];

    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i].salary < arr[j].salary)
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= high)
        temp[k++] = arr[j++];

    for (int i = low; i <= high; i++)
        arr[i] = temp[i];
}

void mergeSort(Employee arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID: ";
        cin >> emp[i].id;

        cout << "Name: ";
        cin >> emp[i].name;

        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    mergeSort(emp, 0, n - 1);

    cout << "\nEmployees Sorted by Salary\n";

    for (int i = 0; i < n; i++)
    {
        cout << emp[i].id << " "
             << emp[i].name << " "
             << emp[i].salary << endl;
    }

    return 0;
}

/*
--------------- SAMPLE OUTPUT ----------------

Enter number of employees: 3

Employee 1
ID: 101
Name: Rahul
Salary: 35000

Employee 2
ID: 102
Name: Priya
Salary: 28000

Employee 3
ID: 103
Name: Aman
Salary: 45000

Employees Sorted by Salary

102 Priya 28000
101 Rahul 35000
103 Aman 45000

----------------------------------------------
*/