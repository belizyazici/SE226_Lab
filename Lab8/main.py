from abc import ABC, abstractmethod


class AbstractClass(ABC):
    address = None

    def __init__(self, address):
        self.address = address

    @abstractmethod
    def calculateFreqs(self):
        pass


class ListCount(AbstractClass):
    def calculateFreqs(self):
        with open(self.address, 'r') as f:
            text = f.read()
        letters = list(text)
        freqs = []
        for letter in set(letters):
            if letter.strip():  # exclude whitespace characters
                freq = letters.count(letter)
                freqs.append((letter, freq))
        print(freqs)


class DictCount(AbstractClass):
    def calculateFreqs(self):
        with open(self.address, 'r') as f:
            text = f.read()
        freqs = {}
        for letter in text:
            if letter.strip():
                freqs[letter] = freqs.get(letter, 0) + 1
        print(freqs)


file_address = 'weirdWords.txt'
lc = ListCount(file_address)
lc.calculateFreqs()

dc = DictCount(file_address)
dc.calculateFreqs()
