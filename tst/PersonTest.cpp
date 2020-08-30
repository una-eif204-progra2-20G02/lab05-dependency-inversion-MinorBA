//
// Created by Maikol Guzman on 8/24/20.
//

#include "BankTransferSender.h"
#include "Person.h"
#include "CashSender.h"
#include "CheckSender.h"
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){
    ISendPayment* bankTransferSenter = new BankTransferSender();
    ISendPayment* cashSender = new CashSender();
    ISendPayment* checkSender = new CheckSender();
    Person person;

    EXPECT_EQ(person.processPayment(bankTransferSenter), "Sending the money by transference" );
    EXPECT_EQ(person.processPayment(cashSender), "Give the money in the hands");
    EXPECT_EQ(person.processPayment(checkSender), "Sending the check with the money");
}
