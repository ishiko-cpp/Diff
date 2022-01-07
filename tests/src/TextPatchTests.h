/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/diff/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_DIFF_TESTS_TEXTPATCHTESTS_H_
#define _ISHIKO_CPP_DIFF_TESTS_TEXTPATCHTESTS_H_

#include <Ishiko/Tests/Core.hpp>

class TextPatchTests : public Ishiko::Tests::TestSequence
{
public:
    TextPatchTests(const Ishiko::Tests::TestNumber& number, const Ishiko::Tests::TestEnvironment& environment);

private:
    static void ConstructorTest1(Ishiko::Tests::Test& test);
};

#endif
