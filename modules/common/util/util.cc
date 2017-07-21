/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/common/util/util.h"

namespace apollo {
namespace common {
namespace util {

using STPoint = apollo::common::STPoint;

bool EndWith(const std::string &original, const std::string &pattern) {
  return original.length() >= pattern.length() &&
         original.substr(original.length() - pattern.length()) == pattern;
}

STPoint MakeSTPoint(const double s, const double t) {
  STPoint st;
  st.set_s(s);
  st.set_t(t);
  return st;
}

}  // namespace util
}  // namespace common
}  // namespace apollo
