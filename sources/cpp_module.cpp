// cppimport
/*
<%
cfg['sources'] = ['add.cpp']
cfg['extra_compile_args'] = ['/wd4819']
cfg['extra_link_args'] = []
cfg['include_dirs'] = ['C:\pyth\c_python\pybind_trial\venv\Lib\site-packages\pybind11\include']
cfg['libraries'] = []
cfg['dependencies'] = []
setup_pybind11(cfg)
%>
*/

#include <pybind11/pybind11.h>
#include <iostream>
#include "main.h"


int sum(int value) {
    int temp = 0;
    for (int i = 0; i <= value; i++) {
        temp = add(temp, i);
    }
    return temp;
}

PYBIND11_MODULE(cpp_module, m) {
    m.doc() = "c++ test module";

    m.def("add", &add);
    m.def("sum", &sum);
}

