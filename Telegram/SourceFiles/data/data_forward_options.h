/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

// Forwarding modes, kept apart from data_types.h so that ui/ headers can
// use them without pulling in data_peer_id.h, which needs the MTP types
// that the td_ui precompiled header does not provide.
namespace Data {

enum class ForwardOptions {
	PreserveInfo,
	NoSenderNames,
	NoNamesAndCaptions,
};

enum class GroupingOptions {
	GroupAsIs,
	RegroupAll,
	Separate,
};

} // namespace Data
