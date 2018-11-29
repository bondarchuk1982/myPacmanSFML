#pragma once
#include "StaticObject.h"

// ����������� �� StaticObject ������, ����� �������� ��� ������� ����������.
class DinamicObject :
	public StaticObject
{
public:
	DinamicObject();
	virtual ~DinamicObject();

	/* ��������� ������� � ���������� ���������� �������� 
	 * �������� �������� ����:
	 * s - ������ �� �������� �������� ���� 
	*/
	void setSpeed(float& s);

	/* ��������� ��� ���������� � ��������� ���� Vector 
	 * ��������� ��������, ������������ ��������� ������
	 * � ����������� ������ :
	 * spr - ������ �� ��� �������������� ��������.
	*/
	void setVSprites(Sprite& spr);

	/* ��������� ���� �������� ��������� ���������� 
	 * ������� ����������� �������� �������:
	 * � - �������� �� ��� �.
	 * � - �������� �� ��� �.
	 * �������������� ��� ���������:
	 *  0 - ��� �������� �� ���.
	 *  1 - �������� � ������� ���������� �������� ���.
	 * -1 - �������� � ������� ���������� �������� ���.
	 * �������� �� ����� ������ �� ��������������.
	*/
	void setMoveVector(int x, int y);

	/* ��������� ������������ �������� ���������� 
	 * ���������� ������� ������� ����������� ��������
	 * �������.
	*/
	std::pair<int, int>& getMoveVector();

	/* ��������� ��� ���������� ������� ������� �� 
	 * ������� ����, �������� ������� �������� ��������,
	 * � ���������� ��� � �����������.
	 * time - �������� ������� ��� ������ �������.
	*/
	void update(const float& time);

	/* ��������� ��������������� ������������ ��������
	 * ������������ ������� �� ������� �� ������� ����.
	 * wall - ������ �� ��������� ���������� � ���� ���
	 * ������ �� ������� �������� ����.
	*/
	bool checkCollisionWall(std::vector <StaticObject*>& wall);
	/* ��������� ��������������� �����������, � ������ ������������
	 * �� ������, �������� ������ ������� ��� ��������������� ��������
	 * � �� ���� ��������� ����� �����.
	 * time - �������� ������� ��� ������ �������.
	*/
	void moveBack(const float& time);
protected:
	/* ���������� ������� �������� �������� ������������
	 * ������� ��������� �������.
	*/
	void setTexture();

	/* ���������� ������� �������� ������� �������� ���������
	 * ���������� ���������� �� ������ ������������ �������� 
	 * ������������ ������� ��������� �������.
	*/
	void setCurrent(const float& time);

	/* ������� ������ �������� �� ������������ ������� �������
	 * � ������ ��������, ���������� �������� ��������� � �������.
	 * p - ������ �� ���������� ������� ���������� ������������.
	 * ����������:
	 * true - � ������ ������������.
	 * false - � ������� ���������� ������������.
	*/
	bool collision(std::pair<float, float>& p);

	// ���������� ���������� �������� �������� �������� ����
	float speed = 0.0;
	
	/* ���������� ��������� ���������� �� ������ ������������ �������� 
	 * ������������ ������� ��������� �������.
	*/
	float current = 0.0;

	/* ���������� ��������� �������� � ���� �������� ��������
	 * ������� �������� �������.
	*/
	std::pair<int, int> moveVector = {0, -1};

	/* ��������� �������� ���������� �� ����������� ���������
	 * ������� � ������ �������.
	*/
	std::vector<Sprite> vSprites;
};

