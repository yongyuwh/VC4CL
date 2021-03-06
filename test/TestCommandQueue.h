/*
 * Author: doe300
 *
 * See the file "LICENSE" for the full license governing this code.
 */

#ifndef TESTCOMMANDQUEUE_H
#define TESTCOMMANDQUEUE_H

#include <CL/opencl.h>

#include "cpptest.h"

class TestCommandQueue : public Test::Suite
{
public:
    TestCommandQueue();
    
    void testCreateCommandQueue();
    void testGetCommandQueueInfo();
    void testRetainCommandQueue();
    void testReleaseCommandQueue();
    
private:
    cl_context context;
    cl_command_queue queue;
};

#endif /* TESTCOMMANDQUEUE_H */

