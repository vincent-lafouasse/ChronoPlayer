from typing import List, Dict, Optional, Callable
from dataclasses import dataclass


@dataclass
class OpcodeMetadata:
    mnemonic: str  # LDA STY etc
    cycles: int
    length: int  # number of bytes
    operation: str  # C code as a string
