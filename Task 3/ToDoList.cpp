#include <iostream>
#include <cstring>
using namespace std;
class Task
{
public:
    int id;
    string task;
    char status; // C - Completed      P - Pending
};

void addTask(Task task_list[], int task_no)
{
    cout << "\nEnter the task : ";
    cin >> task_list[task_no].task;
    task_list[task_no].id = task_no + 1;
    task_list[task_no].status = 'P';
}

void viewTasks(Task task_list[],int i)
{
    cout << "\n\nSNo.\tTask\t\tStatus ( P-Pending , C-Completed )" << endl;
    for (int j = 0; j < i ; j++)
    {
        cout << task_list[j].id << "\t" << task_list[j].task << "\t\t" << task_list[j].status << endl;
    }
    cout << endl;
}

void deleteTask(Task task_list[],int tot){
    int i,j, found=0;
    string del;
    cout<<"\nEnter task to be Deleted: ";
    cin>>del;
    for(i=0; i<tot; i++)
    {
        if(task_list[i].task==del)
        {
            for(j=i; j<(tot-1); j++)
                task_list[j].task = task_list[j+1].task;
                task_list[j].status = task_list[j+1].status;
                task_list[j].id = task_list[j+1].id;
            found=1;
            i--;
        }
    }
    if(found==0){
        cout<<"\nTask doesn't found in the List!"<<endl;
    }
    else
    {
        cout<<"\nTask Deleted Successfully!"<<endl;
    }
    cout<<endl;
}

void markComplete(Task task_list[],int tot){
    string str;
    cout<<"\nWhich task is completed? : ";
    cin>>str;
    for(int i=0; i<tot; i++)
    {
        if(task_list[i].task==str)
        {
            task_list[i].status='C';
            cout<<"\n\nTask No. "<<task_list[i].id<<" marked as Completed!!\n"<<endl;
            break;
        }
    }
}

void searchTask(Task task_list[],int tot){
    string str;
    cout<<"\nEnter task to be searched : ";
    cin>>str;
    for(int i=0; i<tot; i++)
    {
        if(task_list[i].task==str)
        {
            cout<<"\nTask FOUND!!!\n\n"<<endl;
            cout << "\n\nSNo.\tTask\t\tStatus ( P-Pending , C-Completed )" << endl;
            cout << task_list[i].id << "\t" << task_list[i].task << "\t\t" << task_list[i].status << endl;
            break;
        }
        else{
            cout<<"\nTask NOT FOUND!!!\n"<<endl;
        }
    }
}

int main()
{
    cout << "\n\n-------------------------------- To Do List --------------------------------\n"
         << endl;
    int c;
    Task task_list[10];
    int i=0;
    while (true)
    {   
        cout << "\n\n1. Add Task\n2. View Task\n3. Remove Task\n4. Mark Task as completed\n5. Search Task\nWhich operation do you want to perform? : ";
        cin >> c;
        switch (c)
        {
        case 1:
            addTask(task_list,i);
            cout<<"\nTask added successfully!!"<<endl;
            i++;
            break;
        case 2:
            viewTasks(task_list,i);
            break;
        case 3:
            deleteTask(task_list,i);
            i--;
            break;
        case 4:
            markComplete(task_list,i);
            break;
        case 5:
            searchTask(task_list,i);
            break;
        default:
            cout << "\n**Invalid Input**\nEnter a valid input\n\n";
        }
        char ch1;
        cout<<"\nDo you want to perform another operation? (y/n) : ";
        cin>>ch1;
        if(ch1=='n'){
            cout<<"\n\n-----------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\tThank YOU !!\n\n"<<endl;        
            return false;
        }
    }
    return 0;
}