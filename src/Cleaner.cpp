//  Copyright 2021 GHA created by Klykov Anton

#include "Cleaner.h"
#include <iomanip>
#include <iostream>

class Personal;
Cleaner::Cleaner(int id, std::string name, std::string position, int salary)
                : Personal(id, name, position, salary) {
}
int Cleaner::calcBonus() {
  return 0;
}
void Cleaner::calc() {
  int BasePayment = calcBase(m_salary, m_worktime);
  int BonusPayment = calcBonus();
  m_payment = BasePayment + BonusPayment;
}
void Cleaner::printinfo() {
  std::cout << std::setw(30) << m_name << std::setw(15)
            << m_position << std::setw(10) << m_payment << std::endl;
}
