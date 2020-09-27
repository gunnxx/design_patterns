add_subdirectory(/usr/src/gtest ${PROJECT_BINARY_DIR}/gtest)
include(CTest)

# Strategy Pattern Test
set(TEST_STRATEGY_EXE test_strategy)
add_executable(${TEST_STRATEGY_EXE} test_strategy.cpp)
target_link_libraries(${TEST_STRATEGY_EXE} ducks gtest gtest_main)

# Observer Pattern Test
set(TEST_OBSERVER_EXE test_observer)
add_executable(${TEST_OBSERVER_EXE} test_observer.cpp)
target_link_libraries(${TEST_OBSERVER_EXE} weather_station gtest gtest_main)

# Add tests
add_test(NAME ${TEST_STRATEGY_EXE} COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_STRATEGY_EXE})
add_test(NAME ${TEST_OBSERVER_EXE} COMMAND ${EXECUTABLE_OUTPUT_PATH}/${TEST_OBSERVER_EXE})