#include <iostream>
using namespace std;

class PermanentWorker  // entity클래스
{
private:
	char name[100];
	int salary;
public:
	PermanentWorker(const char* name, int money) : salary(money)
	{
		strcpy(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};

class EmployeeHandler  // 컨트롤 클래스
{
private:
	PermanentWorker* empList[50];
	int empNum;
public:
	EmployeeHandler(void): empNum(0)
	{}
	void AddEmployee(PermanentWorker* emp)
	{
		empList[empNum++] = emp;
	}
	void ShowAllSalaryInfo(void) const
	{
		for (int i = 0; i < empNum; i++)
		{
			empList[i]->ShowSalaryInfo();
		}
	}
	void ShowTotalSalary(void)
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
		{
			sum += empList[i]->GetPay();
		}
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler(void)
	{
		for (int i = 0; i < empNum; i++)
		{
			delete empList[i];
		}
	}
};

int main(void)
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1000));
	handler.AddEmployee(new PermanentWorker("JUN", 1000));

	handler.ShowAllSalaryInfo();

	handler.ShowTotalSalary();

	return 0;
}