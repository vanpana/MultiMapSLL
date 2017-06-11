gcov ./CMakeFiles/Multimap.dir/ && lcov --capture --directory . --output-file Multimap.info && genhtml Multimap.info --output-directory CODE_COVERAGE && open CODE_COVERAGE/index.html
