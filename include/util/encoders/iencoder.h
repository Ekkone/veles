/*
 * Copyright 2016 CodiLime
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
 *
 */
#ifndef VELES_UTIL_IENCODER_IENCODER_H
#define VELES_UTIL_IENCODER_IENCODER_H

#include <QByteArray>
#include <QString>

namespace veles {
namespace util {
namespace encoders {

class IEncoder {
 public:
  virtual ~IEncoder() {}
  virtual QString encode(const QByteArray& data) = 0;
  virtual QString encodingDisplayName() = 0;
};

}  // namespace encoders
}  // namespace util
}  // namespace veles

#endif  // VELES_UTIL_IENCODER_IENCODER_H
