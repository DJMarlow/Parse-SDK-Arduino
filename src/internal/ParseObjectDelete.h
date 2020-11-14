/*
 *  Copyright (c) 2015, Parse, LLC. All rights reserved.
 *
 *  You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
 *  copy, modify, and distribute this software in source code or binary form for use
 *  in connection with the web services and APIs provided by Parse.
 *
 *  As with any software that integrates with the Parse platform, your use of
 *  this software is subject to the Parse Terms of Service
 *  [https://www.parse.com/about/terms]. This copyright notice shall be
 *  included in all copies or substantial portions of the software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 *  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 *  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 *  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 *  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef ParseObjectDelete_h
#define ParseObjectDelete_h

#include "ParseRequest.h"

/*! \file ParseObjectDelete.h
 *  \brief ParseObjectDelete object for the Yun
 *  include Parse.h, not this file
 */

/*! \class ParseObjectDelete
 *  \brief Class responsible for object deletion.
 */
class ParseObjectDelete : public ParseRequest
{
public:
    /*! \fn ParseObjectDelete()
   *  \brief Constructor of ParseObjectDelete object
   */
    ParseObjectDelete();

    /*! \fn ParseResponse send() override
   *  \brief launch the object deletion request and execute.
   *
   *  \return  response of request.
   */
    ParseResponse send();
};

#endif
