//
// Created by OEM on 27/08/2020.
//

#ifndef MY_PROJECT_NAME_ISENDPAYMENT_H
#define MY_PROJECT_NAME_ISENDPAYMENT_H

#endif //MY_PROJECT_NAME_ISENDPAYMENT_H
#include <string>

class IsendPayment{
public:
    virtual std::string sendPayment() const = 0;
    virtual ~IsendPayment();
};