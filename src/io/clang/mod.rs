/*  Copyright (C) 2012-2018 by László Nagy
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

pub mod config;
pub mod builder;
pub mod compilation;

pub use self::config::*;
pub use self::builder::*;
pub use self::compilation::*;

mod error {
    error_chain! {
        foreign_links {
            Io(std::io::Error);
            Json(serde_json::Error);
            String(std::str::Utf8Error);
        }
    }
}

pub use self::error::{Error, ErrorKind, Result, ResultExt};

mod file;
