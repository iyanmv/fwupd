/*
 * Copyright (C) 2019 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include <glib.h>

enum {
	/*
	 * Generic Command Status:
	 */
	NVME_SC_SUCCESS = 0x0,
	NVME_SC_INVALID_OPCODE = 0x1,
	NVME_SC_INVALID_FIELD = 0x2,
	NVME_SC_CMDID_CONFLICT = 0x3,
	NVME_SC_DATA_XFER_ERROR = 0x4,
	NVME_SC_POWER_LOSS = 0x5,
	NVME_SC_INTERNAL = 0x6,
	NVME_SC_ABORT_REQ = 0x7,
	NVME_SC_ABORT_QUEUE = 0x8,
	NVME_SC_FUSED_FAIL = 0x9,
	NVME_SC_FUSED_MISSING = 0xa,
	NVME_SC_INVALID_NS = 0xb,
	NVME_SC_CMD_SEQ_ERROR = 0xc,
	NVME_SC_SGL_INVALID_LAST = 0xd,
	NVME_SC_SGL_INVALID_COUNT = 0xe,
	NVME_SC_SGL_INVALID_DATA = 0xf,
	NVME_SC_SGL_INVALID_METADATA = 0x10,
	NVME_SC_SGL_INVALID_TYPE = 0x11,

	NVME_SC_SGL_INVALID_OFFSET = 0x16,
	NVME_SC_SGL_INVALID_SUBTYPE = 0x17,

	NVME_SC_SANITIZE_FAILED = 0x1C,
	NVME_SC_SANITIZE_IN_PROGRESS = 0x1D,

	NVME_SC_NS_WRITE_PROTECTED = 0x20,

	NVME_SC_LBA_RANGE = 0x80,
	NVME_SC_CAP_EXCEEDED = 0x81,
	NVME_SC_NS_NOT_READY = 0x82,
	NVME_SC_RESERVATION_CONFLICT = 0x83,

	/*
	 * Command Specific Status:
	 */
	NVME_SC_CQ_INVALID = 0x100,
	NVME_SC_QID_INVALID = 0x101,
	NVME_SC_QUEUE_SIZE = 0x102,
	NVME_SC_ABORT_LIMIT = 0x103,
	NVME_SC_ABORT_MISSING = 0x104,
	NVME_SC_ASYNC_LIMIT = 0x105,
	NVME_SC_FIRMWARE_SLOT = 0x106,
	NVME_SC_FIRMWARE_IMAGE = 0x107,
	NVME_SC_INVALID_VECTOR = 0x108,
	NVME_SC_INVALID_LOG_PAGE = 0x109,
	NVME_SC_INVALID_FORMAT = 0x10a,
	NVME_SC_FW_NEEDS_CONV_RESET = 0x10b,
	NVME_SC_INVALID_QUEUE = 0x10c,
	NVME_SC_FEATURE_NOT_SAVEABLE = 0x10d,
	NVME_SC_FEATURE_NOT_CHANGEABLE = 0x10e,
	NVME_SC_FEATURE_NOT_PER_NS = 0x10f,
	NVME_SC_FW_NEEDS_SUBSYS_RESET = 0x110,
	NVME_SC_FW_NEEDS_RESET = 0x111,
	NVME_SC_FW_NEEDS_MAX_TIME = 0x112,
	NVME_SC_FW_ACTIVATE_PROHIBITED = 0x113,
	NVME_SC_OVERLAPPING_RANGE = 0x114,
	NVME_SC_NS_INSUFFICENT_CAP = 0x115,
	NVME_SC_NS_ID_UNAVAILABLE = 0x116,
	NVME_SC_NS_ALREADY_ATTACHED = 0x118,
	NVME_SC_NS_IS_PRIVATE = 0x119,
	NVME_SC_NS_NOT_ATTACHED = 0x11a,
	NVME_SC_THIN_PROV_NOT_SUPP = 0x11b,
	NVME_SC_CTRL_LIST_INVALID = 0x11c,
	NVME_SC_BP_WRITE_PROHIBITED = 0x11e,

	/*
	 * I/O Command Set Specific - NVM commands:
	 */
	NVME_SC_BAD_ATTRIBUTES = 0x180,
	NVME_SC_INVALID_PI = 0x181,
	NVME_SC_READ_ONLY = 0x182,
	NVME_SC_ONCS_NOT_SUPPORTED = 0x183,

	/*
	 * I/O Command Set Specific - Fabrics commands:
	 */
	NVME_SC_CONNECT_FORMAT = 0x180,
	NVME_SC_CONNECT_CTRL_BUSY = 0x181,
	NVME_SC_CONNECT_INVALID_PARAM = 0x182,
	NVME_SC_CONNECT_RESTART_DISC = 0x183,
	NVME_SC_CONNECT_INVALID_HOST = 0x184,

	NVME_SC_DISCOVERY_RESTART = 0x190,
	NVME_SC_AUTH_REQUIRED = 0x191,

	/*
	 * Media and Data Integrity Errors:
	 */
	NVME_SC_WRITE_FAULT = 0x280,
	NVME_SC_READ_ERROR = 0x281,
	NVME_SC_GUARD_CHECK = 0x282,
	NVME_SC_APPTAG_CHECK = 0x283,
	NVME_SC_REFTAG_CHECK = 0x284,
	NVME_SC_COMPARE_FAILED = 0x285,
	NVME_SC_ACCESS_DENIED = 0x286,
	NVME_SC_UNWRITTEN_BLOCK = 0x287,

	/*
	 * Path-related Errors:
	 */
	NVME_SC_ANA_PERSISTENT_LOSS = 0x301,
	NVME_SC_ANA_INACCESSIBLE = 0x302,
	NVME_SC_ANA_TRANSITION = 0x303,

	NVME_SC_DNR = 0x4000,
};

const gchar *
fu_nvme_status_to_string(guint32 status);
