/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(whitening.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(07debba2884a7e0790de0bb0c6d3c690)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/lora_sdr/whitening.h>
// pydoc.h is automatically generated in the build directory
#include <whitening_pydoc.h>

void bind_whitening(py::module& m)
{

    using whitening = ::gr::lora_sdr::whitening;


    py::class_<whitening, gr::sync_interpolator, std::shared_ptr<whitening>>(
        m, "whitening", D(whitening))

        .def(py::init(&whitening::make), py::arg("is_hex"), D(whitening, make))


        ;
}
