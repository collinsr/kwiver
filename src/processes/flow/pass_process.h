/*ckwg +29
 * Copyright 2012 by Kitware, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *  * Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 *  * Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 *  * Neither name of Kitware, Inc. nor the names of any contributors may be used
 *    to endorse or promote products derived from this software without specific
 *    prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SPROKIT_PROCESSES_PASS_PROCESS_H
#define SPROKIT_PROCESSES_PASS_PROCESS_H

#include "flow-config.h"

#include <sprokit/pipeline/process.h>

#include <boost/scoped_ptr.hpp>

/**
 * \file pass_process.h
 *
 * \brief Declaration of the pass process.
 */

namespace sprokit
{

/**
 * \class pass_process
 *
 * \brief A process to pass through a data stream.
 *
 * \process Passes through incoming data.
 *
 * \iports
 *
 * \iport{pass} The datum to pass.
 *
 * \oports
 *
 * \oport{pass} The passed datum.
 *
 * \reqs
 *
 * \req The \port{pass} ports must be connected.
 *
 * \ingroup process_flow
 */
class SPROKIT_PROCESSES_FLOW_NO_EXPORT pass_process
  : public process
{
  public:
    /**
     * \brief Constructor.
     *
     * \param config The configuration for the process.
     */
    pass_process(config_t const& config);
    /**
     * \brief Destructor.
     */
    ~pass_process();
  protected:
    /**
     * \brief Step the process.
     */
    void _step();
  private:
    class priv;
    boost::scoped_ptr<priv> d;
};

}

#endif // SPROKIT_PROCESSES_PASS_PROCESS_H
