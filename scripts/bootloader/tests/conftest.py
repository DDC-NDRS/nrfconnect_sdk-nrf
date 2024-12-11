#
# Copyright (c) 2024 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-Nordic-5-Clause

import sys
from pathlib import Path

# make all scripts importable in tests
sys.path.insert(0, str(Path(__file__).parent.parent))