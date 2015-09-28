#ifndef __QUEUE_TEST_H__
#define __QUEUE_TEST_H__

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

#include "queue.h"

using namespace std;

class QueueTest {
  public:
    QueueTest( int );
    ~QueueTest();
    void run_tests();

    const int TEST_RANGE = 10000;

  private:
    void initialize_queue();

    void test_header( string );
    void print_test( bool );

    void check_queue_is_not_empty();
    void check_queue_is_empty();
    void check_queue_size();
    void check_queue_front();
    void check_queue_dequeue();
    void clear_queue();
    void check_queue_default_value();

    int expected_front();

    Queue * queue;
    int test_size;
    int * test_values;
    int test_index;
};

#endif