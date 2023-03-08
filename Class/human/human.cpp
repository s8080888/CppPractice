#include "human.h"

human::human():m_age(0),m_leg(0){}
human::human(int age):m_age(age), m_leg(0){}
human::human(int age, int leg):m_age(age), m_leg(leg){}
int human::age(){
    return m_age;
}