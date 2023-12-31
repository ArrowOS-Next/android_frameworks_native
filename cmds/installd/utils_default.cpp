/*
** Copyright 2019, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#include "utils.h"

namespace android {
namespace installd {

// In this file are default definitions of the functions that may contain
// platform dependent logic.

int rm_package_dir(const std::string& package_dir) {
    return rename_delete_dir_contents_and_dir(package_dir);
}

}  // namespace installd
}  // namespace android
