/*
 * Copyright 2022 Kurento
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __OPENCV_PLUGIN_SAMPLE_OPENCV_IMPL_HPP__
#define __OPENCV_PLUGIN_SAMPLE_OPENCV_IMPL_HPP__

#include "OpenCVPluginSample.hpp"
#include <OpenCVProcess.hpp>
#include <EventHandler.hpp>

namespace kurento
{
namespace module
{
namespace opencvpluginsample
{

class OpenCVPluginSampleOpenCVImpl : public virtual OpenCVProcess
{

public:

  OpenCVPluginSampleOpenCVImpl ();

  virtual ~OpenCVPluginSampleOpenCVImpl() = default;

  virtual void process (cv::Mat &mat);

  void setFilterType (int filterType);
  void setEdgeThreshold (int edgeValue);

private:

  int filterType;
  int edgeValue;
};

} /* opencvpluginsample */
} /* module */
} /* kurento */

#endif /*  __OPENCV_PLUGIN_SAMPLE_OPENCV_IMPL_HPP__ */
