add_executable(test_runner
    test_runner.cpp

    # Testy
    tests/test_descriptors.cpp
    tests/test_create.cpp
    tests/test_descriptors_and_create.cpp
    tests/test_filter_parameter.cpp
    tests/test_filter_configuration_executor.cpp
    tests/test_configuration_link.cpp
    tests/test_persistent_chain_configuration.cpp
    tests/test_composite_filter.cpp
    tests/test_executor.cpp

    # Potřebné implementace
    ../core/scgms/src/filter_parameter.cpp
    ../core/scgms/src/filter_configuration_executor.cpp
    ../core/scgms/src/composite_filter.cpp
    ../core/scgms/src/executor.cpp
    ../core/scgms/src/device_event.cpp
    ../core/scgms/src/simple_bindings.cpp
    ../core/scgms/src/filters.cpp
    ../core/scgms/src/configuration_link.cpp
    ../core/scgms/src/persistent_chain_configuration.cpp
)

target_link_libraries(test_runner PRIVATE scgms-common)

target_include_directories(test_runner PRIVATE 
    ../core
    ../common
    ../core/scgms/src
)
