from typing import List, Dict, Optional, Callable
from dataclasses import dataclass


@dataclass
class OpcodeMetadata:
    mnemonic: str  # LDA STY etc
    cycles: int
    length: int  # number of bytes
    addressing_mode: str  # bus access pattern
    operation: str  # payload after bus access, e.g. bus write or register write
