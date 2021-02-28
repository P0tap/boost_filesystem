// Copyright 2020 P0tap <nikita.potapov.1999@bk.ru>


#include "iostream"
#include "parser.hpp"
int main(int argc, char *argv[]) {
  std::string path;

  if (argc == 1) {
    path = ".";

  } else {
    path = argv[1];
  }

  parserOfDir parser(path);
  parser.assembleFilesForAcc();
  std::cout<<parser.printFormatted();
}