set(CPACK_GENERATOR NSIS
    CACHE STRING "Generator for packaging")
set(RUNTIME_DESTINATION "/")
set(ICON_FILE ${PROJECT_SOURCE_DIR}/icons/crystalexplorer.ico)
set(OS_BUNDLE WIN32)
# Windows NSIS installer stuff
set(RESOURCES_DESTINATION "/")
set(TONTO_DESTINATION "/")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_INSTALL_PREFIX}/${RUNTIME_DESTINATION}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_INSTALL_PREFIX}/${RUNTIME_DESTINATION}")
set(CMAKE_INSTALL_SYSTEM_RUNTIME_DESTINATION "${RUNTIME_DESTINATION}")
set(APPS "\${CMAKE_INSTALL_PREFIX}/${PROJECT_NAME}.exe")
include(InstallRequiredSystemLibraries)
set(CMAKE_INSTALL_UCRT_LIBRARIES TRUE)
configure_file(
    ${PROJECT_SOURCE_DIR}/scripts/setup.iss.in
    ${PROJECT_BINARY_DIR}/setup.iss
)

