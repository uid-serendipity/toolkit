/*
* MIT License
* 
* Copyright (c) 2020 Cproape (911830982@qq.com)
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
* 
* Change Logs:
* Date           Author       Notes
* 2020-01-29     zhangran     the first version
* 2020-01-31     zhangran     add event define switch
*/
#ifndef __TOOLKIT_CFG_H_
#define __TOOLKIT_CFG_H_

/* toolkit Configuration item */
#define TOOLKIT_USING_ASSERT
#define TOOLKIT_USING_QUEUE
#define TOOLKIT_USING_TIMER
#define TOOLKIT_USING_EVENT

/* toolkit queue Configuration item */
#define TK_QUEUE_USING_CREATE

/* toolkit timer Configuration item */
#define TK_TIMER_USING_CREATE
//#define TK_TIMER_USING_INTERVAL
#define TK_TIMER_USING_TIMEOUT_CALLBACK

/* toolkit event Configuration item */
#define TK_EVENT_USING_CREATE

#endif /* __TOOLKIT_CFG_H_ */
