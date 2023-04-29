class Student:
    def __init__(self):
        self.m_identifier = 0
        self.m_name = ""
        self.m_surname = ""
        
    # Setters
    def setIdentifier(self, identifier: int):
        self.m_identifier = identifier
    
    def setName(self, name: str):
        self.m_name = name
    
    def setSurname(self, surname: str):
        self.m_surname = surname
    
    # Getters
    def getIdentifier(self) -> int:
        return self.m_identifier
    
    def getName(self) -> str:
        return self.m_name
    
    def getSurname(self) -> str:
        return self.m_surname
    
    def __del__(self):
        pass