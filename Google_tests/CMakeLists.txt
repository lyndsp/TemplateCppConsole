project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${gmock_SOURCE_DIR}/include ${gmock_SOURCE_DIR})

# adding the Google_Tests_run target
set(SOURCE_FILES
        TemplateCppTests.cpp
        TemplateCppClassFixture.cpp
        )
add_executable(Google_Tests_run ${SOURCE_FILES})

# linking Google_Tests_run with TemplateCppLibrary which will be tested
target_link_libraries(Google_Tests_run TemplateCppLibrary)

target_link_libraries(Google_Tests_run gtest gtest_main)