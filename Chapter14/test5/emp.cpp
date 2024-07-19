//
// Created by dell on 2024/7/10.
//

#include "emp.h"

abstr_emp::abstr_emp() = default;

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j)
                    : name(fn), lname(ln),  job(j){}

void abstr_emp::ShowAll() const {
    std::cout << "first name: " << name << " last name: " << lname
              << " job: " << job << std::endl;
}

void abstr_emp::SetAll() {
    std::cout << "Enter the first name:";
    getline(std::cin, name);
    std::cout << "Enter the last name:";
    getline(std::cin, lname);
    std::cout << "Enter the job";
    getline(std::cin, job);
}

abstr_emp::~abstr_emp() throw() {}

std::ostream & operator<<(std::ostream & os, const abstr_emp & e){
    os << "first name: " << e.name << " last name: " << e.lname << '\n';
    return os;
}

employee::employee() = default;

employee::employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j){}

void employee::SetAll() {
    abstr_emp::SetAll();
}

void employee::ShowAll() const{
    abstr_emp::ShowAll();
}

manager::manager() {}

manager::manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp(fn, ln, j){
    inchargeof = ico;
}

manager::manager(const abstr_emp &e, int ico) : abstr_emp(e) {
    inchargeof = ico;
}

manager::manager(const manager &m) : abstr_emp(m) {
    inchargeof = m.inchargeof;
}


void manager::ShowAll() const {
    abstr_emp::ShowAll();
    std::cout << "inchargeof: " << InChargeOf() << '\n';
}

void manager::SetAll() {
    abstr_emp::SetAll();
    std::cout << "Enter the inchargeof:\n";
    std::cin >> InChargeOf();
    std::cin.get();
}

fink::fink() {}

fink::fink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo) : abstr_emp(fn, ln, j), reportsto(rpo) {}

fink::fink(const abstr_emp &e, const std::string &rpo) : abstr_emp(e), reportsto(rpo){}

fink::fink(const fink &e) : abstr_emp(e){
    reportsto = e.reportsto;
}

void fink::ShowAll() const {
    abstr_emp::ShowAll();
    std::cout << "reporsto: " << ReportsTo() << std::endl;
}

void fink::SetAll() {
    abstr_emp::SetAll();
    std::cout << "Enter the reporsto:\n";
    getline(std::cin, ReportsTo());
}

highfink::highfink() {}

highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo,
                   int ico) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo){}

highfink::highfink(const abstr_emp &e, const std::string &rpo, int ico) : abstr_emp(e), manager(e, ico), fink(e, rpo){}

highfink::highfink(const fink &f, int ico) : abstr_emp(f), fink(f){
    InChargeOf() = ico;
}

highfink::highfink(const manager &m, const std::string &rpo) : abstr_emp(m), manager(m){
    ReportsTo() = rpo;
}

highfink::highfink(const highfink &h) : abstr_emp(h), manager(h), fink(h) {}

void highfink::ShowAll() const {
    abstr_emp::ShowAll();
    std::cout << "inchargeof: " << InChargeOf() << " reporsto: "
              << ReportsTo() << std::endl;
}

void highfink::SetAll() {
    abstr_emp::SetAll();
    std::cout << "Enter the inchargeof:";
    std::cin >> InChargeOf();
    std::cin.get();
    std::cout << "Enter the reporsto:";
    getline(std::cin, ReportsTo());
}