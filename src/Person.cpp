//
// Created by Maikol Guzman on 8/20/20.
//

#include "Person.h"

Person::Person() { delete sendPayment;}

Person::Person(const std::string &firstName, const std::string &lastName, int documentId, ISendPayment* sendPayment)
: firstName(firstName),lastName(lastName),documentId(documentId),sendPayment(sendPayment) {}

const std::string &Person::getFirstName() const {
    return firstName;
}

void Person::setFirstName(const std::string &firstName) {
    Person::firstName = firstName;
}

const std::string &Person::getLastName() const {
    return lastName;
}

void Person::setLastName(const std::string &lastName) {
    Person::lastName = lastName;
}

int Person::getDocumentId() const {
    return documentId;
}

void Person::setDocumentId(int documentId) {
    Person::documentId = documentId;
}

ISendPayment* const Person::getSendPayment() const {
    return sendPayment;
}

void Person::setSendPayment(ISendPayment* sendPayment) {
    Person::sendPayment = sendPayment;
}
std::string Person:: processPayment(ISendPayment* sendPayment){
    return sendPayment->sendPayment();
}

std::string Person::toString() const {
    return getFirstName() + " " + getLastName() + "\nDoc Id: " + std::to_string(getDocumentId());
}
