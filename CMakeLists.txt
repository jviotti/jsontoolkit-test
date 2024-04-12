cmake_minimum_required(VERSION 3.14)
project(jsontoolkit-test)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
  jsontoolkit
  URL https://github.com/sourcemeta/jsontoolkit/archive/aadb403139736411cd2ef37c106578e4b9c41782.zip
  DOWNLOAD_EXTRACT_TIMESTAMP NO)
FetchContent_MakeAvailable(jsontoolkit)

add_executable(main main.cc)
target_link_libraries(main PUBLIC sourcemeta::jsontoolkit::json)
target_link_libraries(main PUBLIC sourcemeta::jsontoolkit::jsonschema)
