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
/* BINDTOOL_HEADER_FILE(decoder_c.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(29c7c213d86fbfc60349c8e795d67122)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/NTSC/decoder_c.h>
// pydoc.h is automatically generated in the build directory
#include <decoder_c_pydoc.h>

void bind_decoder_c(py::module& m)
{

    using decoder_c    = ::gr::NTSC::decoder_c;


    py::class_<decoder_c, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<decoder_c>>(m, "decoder_c", D(decoder_c))

        .def(py::init(&decoder_c::make),
           py::arg("samp_rate"),
           D(decoder_c,make)
        )
        



        ;




}








