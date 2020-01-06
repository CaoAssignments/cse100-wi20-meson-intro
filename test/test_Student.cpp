#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

#include <gtest/gtest.h>
#include "Student.hpp"

using namespace std;
using namespace testing;

TEST(STUDENT_TEST, TEST_CONSTRUCTOR) {
    Student s("Xavier", 3);
    ASSERT_EQ(s.getName(), "Xavier");
    ASSERT_EQ(s.getPid(), 3);
}

TEST(STUDENT_TEST, TEST_NAME_SETTER) {
    Student s("Xavier", 3);
    s.setName("Paul");
    ASSERT_EQ(s.getName(), "Paul");
}

TEST(STUDENT_TEST, TEST_PID_SETTER) {
    Student s("Xavier", 3);
    s.setPid(666);
    ASSERT_EQ(s.getPid(), 666);
}