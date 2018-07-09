#ifndef HOUSE_H
#define HOUSE_H


class House
{
public:
    House(){;}
    int roomNumber() { return m_roomNumber; }
    void setRoomNumber(int roomNumber) { m_roomNumber = roomNumber; }

    int windowNumber() { return m_windowNumber;}
    void setWindowNumber(int windowNumber) {m_windowNumber = windowNumber;}

private:
    int m_roomNumber, m_windowNumber;
};

#endif // HOUSE_H
