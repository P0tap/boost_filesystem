// Copyright 2020 P0tap <nikita.potapov.1999@bk.ru>


#include "account.hpp"

void account::addFile(boost::filesystem::path path) { files.push_back(path); }

void account::incFilesSum() { ++filesSum; }
void account::setLastDate(int date) { lastDate = date; }
void account::setBrocker(std::string brockerArg) { brocker = brockerArg; }
void account::setAccountNumber(std::string accNum) { accountNumber = accNum; }
std::string account::getBrocker() { return brocker; }
std::string account::getAccountNum() { return accountNumber; }
std::size_t account::getFileSum() { return filesSum; }
int account::getLastDate() { return lastDate; }

