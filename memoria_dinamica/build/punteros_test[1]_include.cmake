if(EXISTS "/workspaces/memoria_dinamica/build/punteros_test[1]_tests.cmake")
  include("/workspaces/memoria_dinamica/build/punteros_test[1]_tests.cmake")
else()
  add_test(punteros_test_NOT_BUILT punteros_test_NOT_BUILT)
endif()
