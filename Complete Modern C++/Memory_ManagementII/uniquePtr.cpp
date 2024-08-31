#include<bits/stdc++.h>
#include<memory>
using namespace std;

class Project{

    string m_name;
    public:
    void SetName(string name)
    {
        m_name = name;
    }
    void ShowProjectDetail() const
    {
        cout<<"Project Name = "<<m_name<<endl;
    }
};

class Employee{

    unique_ptr<Project>m_project{};
    public:

    void SetProject(unique_ptr<Project>&p)
    {
        m_project = move(p);
    }
    const unique_ptr<Project>& GetProject() const{
        return m_project;
    }

};

void ShowInfo(unique_ptr<Employee>&e)
{
    cout<<"Employee info = ";
    (e->GetProject())->ShowProjectDetail();

}
int main()
{

    unique_ptr<Project>prj (new Project{});
    prj->SetName("Video Creater");

    unique_ptr<Employee>e1 (new Employee{});
    e1->SetProject(prj);

    // Employee *e2 = new Employee();
    // e2->SetProject(prj);

    // Employee *e3 = new Employee();
    // e3->SetProject(prj);

    ShowInfo(e1);
    // ShowInfo(e2);
    // ShowInfo(e3);


    
}
