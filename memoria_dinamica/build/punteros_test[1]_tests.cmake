add_test( PunterosTest.01 /workspaces/memoria_dinamica/build/punteros_test [==[--gtest_filter=PunterosTest.01]==] --gtest_also_run_disabled_tests)
set_tests_properties( PunterosTest.01 PROPERTIES WORKING_DIRECTORY /workspaces/memoria_dinamica/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( PunterosTest.02 /workspaces/memoria_dinamica/build/punteros_test [==[--gtest_filter=PunterosTest.02]==] --gtest_also_run_disabled_tests)
set_tests_properties( PunterosTest.02 PROPERTIES WORKING_DIRECTORY /workspaces/memoria_dinamica/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( PunterosTest.03 /workspaces/memoria_dinamica/build/punteros_test [==[--gtest_filter=PunterosTest.03]==] --gtest_also_run_disabled_tests)
set_tests_properties( PunterosTest.03 PROPERTIES WORKING_DIRECTORY /workspaces/memoria_dinamica/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( PunterosTest.04 /workspaces/memoria_dinamica/build/punteros_test [==[--gtest_filter=PunterosTest.04]==] --gtest_also_run_disabled_tests)
set_tests_properties( PunterosTest.04 PROPERTIES WORKING_DIRECTORY /workspaces/memoria_dinamica/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( punteros_test_TESTS PunterosTest.01 PunterosTest.02 PunterosTest.03 PunterosTest.04)
