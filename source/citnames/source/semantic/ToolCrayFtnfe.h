/*  Copyright (C) 2012-2024 by László Nagy
    This file is part of Bear.

    Bear is a tool to generate compilation database for clang tooling.

    Bear is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Bear is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "Parsers.h"
#include "Tool.h"

namespace cs::semantic {

    struct ToolCrayFtnfe : public Tool {

        [[nodiscard]]
        rust::Result<SemanticPtr> recognize(const Execution& execution) const override;

    protected:
        [[nodiscard]] bool is_compiler_call(const fs::path& program) const;

        static const FlagsByName FLAG_DEFINITION;
    };
}
