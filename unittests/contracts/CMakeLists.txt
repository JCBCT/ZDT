# will be implictly used for any compilation unit if not overrided by SYSTEM_INCLUDE_FOLDERS parameter
# these directories go as -isystem <dir> to avoid warnings from code of third-party libraries

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/zdtio.bios/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/zdtio.bios/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/zdtio.msig/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/zdtio.msig/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/zdtio.system/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/zdtio.system/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/zdtio.token/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/zdtio.token/)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/zdtio.wrap/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/zdtio.wrap/)
