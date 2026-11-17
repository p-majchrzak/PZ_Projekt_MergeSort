add_test([=[MergeSortTests.KeepsAlreadySortedArrayUnchanged]=]  /Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTests [==[--gtest_filter=MergeSortTests.KeepsAlreadySortedArrayUnchanged]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MergeSortTests.KeepsAlreadySortedArrayUnchanged]=]
  PROPERTIES
    
    _CMAKE_TEST_BUILD_DEPENDS [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTests]==]
    DEF_SOURCE_LINE [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/Projekt/tests/MergeSortTests.cpp:9]==]
    WORKING_DIRECTORY [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
add_test([=[MergeSortTests.SortsReverseSortedArray]=]  /Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTests [==[--gtest_filter=MergeSortTests.SortsReverseSortedArray]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[MergeSortTests.SortsReverseSortedArray]=]
  PROPERTIES
    
    _CMAKE_TEST_BUILD_DEPENDS [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build/MergeSortTests]==]
    DEF_SOURCE_LINE [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/Projekt/tests/MergeSortTests.cpp:18]==]
    WORKING_DIRECTORY [==[/Users/piotrmajchrzak/Desktop/PZ_Projekt_MergeSort/build]==]
    SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==]
    
)
set(MergeSortTests_TESTS [==[MergeSortTests.KeepsAlreadySortedArrayUnchanged]==] [==[MergeSortTests.SortsReverseSortedArray]==])
