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

#include "ParseInternal.h"
#include "ParseRequest.h"

ParseRequest::ParseRequest()
{
	requestBody = "{";
	httpPath = "/";
	isBodySet = false;
}

ParseRequest::~ParseRequest()
{
}

void ParseRequest::setObjectId(const char *key)
{
	httpPath += "/";
	httpPath += key;
}

void ParseRequest::setClassName(const char *className)
{
	if (strcmp(className, "_User") == 0)
	{
		httpPath += "users";
	}
	else if (strcmp(className, "_Installation") == 0)
	{
		httpPath += "installations";
	}
	else if (strcmp(className, "_Role") == 0)
	{
		httpPath += "roles";
	}
	else
	{
		httpPath += "classes/";
		httpPath += className;
	}
}
