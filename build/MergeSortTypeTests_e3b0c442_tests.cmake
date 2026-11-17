add_test([=[MergeSortTypeTests.SortsLongIntNumbers]=]  /Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTypeTests [==[--gtest_filter=MergeSortTypeTests.SortsLongIntNumbers]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MergeSortTypeTests.SortsLongIntNumbers]=]
  PROPERTIES
    
    _CMAKE_TEST_BUILD_DEPENDS [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTypeTests]==]
    DEF_SOURCE_LINE [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/Projekt/tests/MergeSortTypeTests.cpp:8]==]
    WORKING_DIRECTORY [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MergeSortTypeTests.SortsFloatNumbers]=]  /Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTypeTests [==[--gtest_filter=MergeSortTypeTests.SortsFloatNumbers]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MergeSortTypeTests.SortsFloatNumbers]=]
  PROPERTIES
    
    _CMAKE_TEST_BUILD_DEPENDS [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTypeTests]==]
    DEF_SOURCE_LINE [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/Projekt/tests/MergeSortTypeTests.cpp:17]==]
    WORKING_DIRECTORY [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MergeSortTypeTests.SortsDoubleNumbers]=]  /Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTypeTests [==[--gtest_filter=MergeSortTypeTests.SortsDoubleNumbers]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MergeSortTypeTests.SortsDoubleNumbers]=]
  PROPERTIES
    
    _CMAKE_TEST_BUILD_DEPENDS [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTypeTests]==]
    DEF_SOURCE_LINE [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/Projekt/tests/MergeSortTypeTests.cpp:26]==]
    WORKING_DIRECTORY [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
set(MergeSortTypeTests_TESTS [==[MergeSortTypeTests.SortsLongIntNumbers]==] [==[MergeSortTypeTests.SortsFloatNumbers]==] [==[MergeSortTypeTests.SortsDoubleNumbers]==])
