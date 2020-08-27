//
// Created by Maikol Guzman on 8/24/20.
//

#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    IsendPayment* bankTransferSenter = new BankTransferSender();
    Person person;

    person.setSendPayment(bankTransferSenter);

    EXPECT_EQ(person.processPayment(), "Sending the money by transference" );
 /*   EXPECT_EQ(person.processPayment(), "Give the money in the hands");
    EXPECT_EQ(person.processPayment(), "Sending the check with the money");*/
}
