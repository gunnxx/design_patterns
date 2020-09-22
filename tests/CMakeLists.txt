add_subdirectory(/usr/src/gtest ${PROJECT_BINARY_DIR}/gtest)
include(CTest)

# Strategy Pattern Test
set(TEST_STRATEGY_EXE test_strategy)
add_executable(${TEST_STRATEGY_EXE} test_strategy.cpp)
target_link_libraries(${TEST_STRATEGY_EXE} ducks gtest gtest_main)

# Add tests
add_test(NAME ${TEST_STRATEGY_EXE} COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_STRATEGY_EXE})