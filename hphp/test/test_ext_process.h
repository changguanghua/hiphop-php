/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __TEST_EXT_PROCESS_H__
#define __TEST_EXT_PROCESS_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <test/test_cpp_ext.h>

///////////////////////////////////////////////////////////////////////////////

class TestExtProcess : public TestCppExt {
 public:
  virtual bool RunTests(const std::string &which);

  bool test_pcntl_alarm();
  bool test_pcntl_exec();
  bool test_pcntl_fork();
  bool test_pcntl_getpriority();
  bool test_pcntl_setpriority();
  bool test_pcntl_signal();
  bool test_pcntl_wait();
  bool test_pcntl_waitpid();
  bool test_pcntl_wexitstatus();
  bool test_pcntl_wifexited();
  bool test_pcntl_wifsignaled();
  bool test_pcntl_wifstopped();
  bool test_pcntl_wstopsig();
  bool test_pcntl_wtermsig();
  bool test_pcntl_signal_dispatch();
  bool test_shell_exec();
  bool test_exec();
  bool test_passthru();
  bool test_system();
  bool test_proc_open();
  bool test_proc_terminate();
  bool test_proc_close();
  bool test_proc_get_status();
  bool test_proc_nice();
  bool test_escapeshellarg();
  bool test_escapeshellcmd();
};

///////////////////////////////////////////////////////////////////////////////

#endif // __TEST_EXT_PROCESS_H__