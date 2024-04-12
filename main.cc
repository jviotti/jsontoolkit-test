#include <sourcemeta/jsontoolkit/json.h>
#include <iostream>
#include <cstdlib>

int main() {
  sourcemeta::jsontoolkit::JSON document{"Hello World!"};
  sourcemeta::jsontoolkit::prettify(document, std::cout);
  std::cout << "\n";
  return EXIT_SUCCESS;
}
