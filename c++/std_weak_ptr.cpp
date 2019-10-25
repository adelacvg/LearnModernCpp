#include<iostream>
#include<memory>
#include<string>

class Person
{
    std::string m_name;
    std::weak_ptr<Person> m_partener;
public:

    Person(const std::string &name) : m_name(name)
    {
        std::cout<<m_name<<" created\n";
    }
    ~Person()
    {
        std::cout<<m_name<<" destroyed\n";
    }

    friend bool partenerUp(std::shared_ptr<Person> &p1, std::shared_ptr<Person> &p2)
    {
        if(!p1||!p2)
            return false;

        p1->m_partener = p2;
        p2->m_partener = p1;

        std::cout<<p1->m_name<<" is now partenered with "<<p2->m_name<<'\n';

        return true;
    }
    const std::shared_ptr<Person> getPartner() const{return m_partener.lock();}
    const std::string& getName() const {return m_name;}
};

int main()
{
    auto lucy = std::make_shared<Person>("Lucy");
    auto ricky = std::make_shared<Person>("Ricky");

    partenerUp(lucy, ricky);

    auto partner = ricky->getPartner();
    std::cout<< ricky->getName()<<"'s partner is: "<<partner->getName()<<'\n';

    return 0;
}
