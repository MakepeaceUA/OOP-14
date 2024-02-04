#pragma once

struct Node
{
    char Last_Name[15];
	char Name[15];
    char Surname[15];
    float GPA[15];

	Node* m_parent;

    Node* m_left;  
    Node* m_right;
	

    char* Get_LastName();
    char* Get_Name();
    char* Get_Surname();
    float* Get_GPA();
};