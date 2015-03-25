/*
 * File:   FileWriterTest.h
 * Author: wbsimms
 *
 * Created on Mar 25, 2015, 11:27:58 AM
 */

#ifndef FILEWRITERTEST_H
#define	FILEWRITERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class FileWriterTest : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(FileWriterTest);

    CPPUNIT_TEST(testMethod);
    CPPUNIT_TEST(testFailedMethod);

    CPPUNIT_TEST_SUITE_END();

public:
    FileWriterTest();
    virtual ~FileWriterTest();
    void setUp();
    void tearDown();

private:
    void testMethod();
    void testFailedMethod();
};

#endif	/* FILEWRITERTEST_H */

