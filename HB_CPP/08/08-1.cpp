#include <iostream>
#include <cstring>

using namespace std;

namespace RISK_LEVEL {
    enum risks {
        RISK_C = 10, RISK_B = 20, RISK_A = 30
    };
}

class Employee {
private:
    char name[100];
public:
    Employee(char *name) {
        strcpy(this->name, name);
    }

    void ShowYourName() const {
        cout << "name: " << name << endl;
    }

    virtual int GetPay() const = 0; // 순수 가상함수

    virtual void ShowSalaryInfo() const = 0; // 순수 가상함수
};

class PermanentWorker : public Employee {
private:
    int salary;
public:
    PermanentWorker(char *name, int money)
            : Employee(name), salary(money) {}

    int GetPay() const {
        return salary;
    }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl << endl;
    }
};

class TemporaryWorker : public Employee {
private:
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(char *name, int pay)
            : Employee(name), workTime(0), payPerHour(pay) {}

    void AddWorkTime(int time) {
        workTime += time;
    }

    int GetPay() const {
        return workTime * payPerHour;
    }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl << endl;
    }
};

class SalesWorker : public PermanentWorker {
private:
    int salesResult;    // 월 판매실적
    double bonusRatio;    // 상여금 비율
public:
    SalesWorker(char *name, int money, double ratio)
            : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio) {}

    void AddSalesResult(int value) {
        salesResult += value;
    }

    int GetPay() const {
        return PermanentWorker::GetPay()
               + (int) (salesResult * bonusRatio);
    }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << GetPay() << endl << endl;
    }
};

class ForeignSalesWorker : public SalesWorker {
private:
    int risk;
public:
    ForeignSalesWorker(char *name, int money, double ratio, int risk)
            : SalesWorker(name, money, ratio), risk(risk) {}

    int GetRiskPay() const {
        return (int) (SalesWorker::GetPay() * (risk / 100.0));
    }

    int GetPay() const {
        return SalesWorker::GetPay() + GetRiskPay();
    }

    void ShowSalaryInfo() const {
        ShowYourName();
        cout << "salary: " << SalesWorker::GetPay() << endl;
        cout << "risk pay: " << GetRiskPay() << endl;
        cout << "sum: " << GetPay() << endl << endl;

    }

};

class EmployeeHandler {
private:
    Employee *empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0) {}

    void AddEmployee(Employee *emp) {
        empList[empNum++] = emp;
    }

    void ShowAllSalaryInfo() const {
        for (int i = 0; i < empNum; i++)
            empList[i]->ShowSalaryInfo();
    }

    void ShowTotalSalary() const {
        int sum = 0;

        for (int i = 0; i < empNum; i++)
            sum += empList[i]->GetPay();

        cout << "salary sum: " << sum << endl;
    }

    ~EmployeeHandler() {
        for (int i = 0; i < empNum; i++)
            delete empList[i];
    }
};

int main(void) {
    EmployeeHandler ehdlr;

    ForeignSalesWorker *fseller1 = new ForeignSalesWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    ForeignSalesWorker *fseller2 = new ForeignSalesWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    ForeignSalesWorker *fseller3 = new ForeignSalesWorker("Lee", 1000, 0.1, RISK_LEVEL::RISK_C);

    fseller1->AddSalesResult(7000);
    fseller2->AddSalesResult(7000);
    fseller3->AddSalesResult(7000);

    ehdlr.AddEmployee(fseller1);
    ehdlr.AddEmployee(fseller2);
    ehdlr.AddEmployee(fseller3);

    ehdlr.ShowAllSalaryInfo();

    return 0;
}