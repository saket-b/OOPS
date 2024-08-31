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

    shared_ptr<Project>m_project{};
    public:

    void SetProject(shared_ptr<Project>p)
    {
        m_project = p;
    }
    const shared_ptr<Project>& GetProject() const{
        return m_project;
    }

};

void ShowInfo(shared_ptr<Employee>e)
{
    cout<<"Employee info = ";
    (e->GetProject())->ShowProjectDetail();

}
int main()
{

    shared_ptr<Project>prj (new Project{});
    prj->SetName("Video Creater");

    shared_ptr<Employee>e1 (new Employee{});
    e1->SetProject(prj);

    shared_ptr<Employee>e2 ( new Employee());
     e2->SetProject(prj);

    
    shared_ptr<Employee>e3 ( new Employee());
     e3->SetProject(prj);

    // e3.reset();

    cout<<"use count of refrences = "<< prj.use_count()<<endl;



    ShowInfo(e1);
    ShowInfo(e2);
    ShowInfo(e3);


    
}
