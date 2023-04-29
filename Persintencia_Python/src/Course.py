class Course:
    def __init__(self):
        self.m_identifier = 0
        self.m_name = ''
        self.m_surname = ''
        
    # Setters
    def setIdentifier(self, identifier):
        self.m_identifier = identifier
        
    def setName(self, name):
        self.m_name = name
        
    def setSurname(self, surname):
        self.m_surname = surname
        
    # Getters
    def getIdentifier(self):
        return self.m_identifier
        
    def getName(self):
        return self.m_name
        
    def getSurname(self):
        return self.m_surname
        
    def __del__(self):
        pass