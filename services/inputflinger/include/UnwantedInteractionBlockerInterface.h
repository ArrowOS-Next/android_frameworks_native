/*
 * Copyright (C) 2022 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "InputListener.h"

namespace android {

/**
 * Base interface for an InputListener stage.
 * Blocks unintentional input events. Not thread safe. Must be called from the same
 * thread. All work is performed on the calling threads.
 */
class UnwantedInteractionBlockerInterface : public InputListenerInterface {
public:
    /**
     * Dump the state of the interaction blocker.
     * This method may be called on any thread (usually by the input manager on a binder thread).
     */
    virtual void dump(std::string& dump) = 0;

    /* Called by the heartbeat to ensures that the blocker has not deadlocked. */
    virtual void monitor() = 0;

    UnwantedInteractionBlockerInterface() {}
    ~UnwantedInteractionBlockerInterface() override {}
};

} // namespace android
