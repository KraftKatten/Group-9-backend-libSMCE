if(EXISTS "/home/ludvig/programs/Group-9-backend-libSMCE/test/SMCE_Tests_tests-b12d07c.cmake")
  include("/home/ludvig/programs/Group-9-backend-libSMCE/test/SMCE_Tests_tests-b12d07c.cmake")
else()
  add_test(SMCE_Tests_NOT_BUILT-b12d07c SMCE_Tests_NOT_BUILT-b12d07c)
endif()