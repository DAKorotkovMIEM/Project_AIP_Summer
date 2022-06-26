#include "main.cpp"
#include <doctest.h>

TEST_SUITE_BEGIN("file main");

TEST_CASE("InfoChecks") {
    string subj = "Maths";
    string data = "24.06";
    string info = "Additional info";
    TestDeadline = deadline(subj, data, info);
    REQUIRE(TestDeadline.getdata_subj() == subj);
    REQUIRE(TestDeadline.getdata_date() == data);
    REQUIRE(TestDeadline.getdata_info() == info);
}

TEST_SUITE_END();