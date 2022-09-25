#!/usr/bin/python3
# 8-multiple_returns.py
# kidist shiferaw Meshesha <kidist.shiferaw@aau.edu.et>
def multiple_returns(sentence):
    """Returns the length of a string and its first character."""
    if sentence == "":
        return (0, None)
    return (len(sentence), sentence[0])
