/*
 * test2.cpp
 */

#include "mystring.h"

int main() {

  MyString s1("hello");

  MyString s2("world!");

  MyString s3;

  s3 = s1 + s2;

  cout << s3 << endl;

  cout << s1 + s2 << endl;

  cout << s1 + "world!" << endl;

  //remember: the statment below is an error
  //cout << "hello" + "world!" << endl;

  return 0;
}
