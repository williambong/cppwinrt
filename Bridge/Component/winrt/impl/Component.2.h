﻿// C++/WinRT v1.0.170906.1
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once
#include "winrt/impl/Component.1.h"

WINRT_EXPORT namespace winrt::Component {

struct WINRT_EBO Button :
    Component::IButton
{
    Button(std::nullptr_t) noexcept {}
    Button();
};

}
