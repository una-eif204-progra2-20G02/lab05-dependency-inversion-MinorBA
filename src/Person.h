#ifndef UNIT_TESTING_01_GTEST_PERSON_H
#define UNIT_TESTING_01_GTEST_PERSON_H

#include <string>
#include <ostream>
#include "BankTransferSender.h"
#include "CashSender.h"
#include "CheckSender.h"
#include "ISendPayment.h"
/**
 * Abstract Class of Person
 */
class Person {
public:

    // Constructors
    Person();
    Person(const std::string &firstName, const std::string &lastName, int documentId, IsendPayment* sendPayment);
    virtual ~Person() = default;

    // Gets and Sets
    const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    int getDocumentId() const;

    void setDocumentId(int documentId);

    IsendPayment* const getSendPayment() const;

    void setSendPayment(IsendPayment* sendPayment);

    std::string processPayment();

    virtual std::string toString() const; // Virtual
private:
    std::string firstName;
    std::string lastName;
    int documentId;
    IsendPayment* sendPayment;

};

#endif //UNIT_TESTING_01_BASIC_PERSON_H
