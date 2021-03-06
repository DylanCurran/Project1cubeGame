#ifndef CUBE_H
#define CUBE_H

#include <gl/glew.h>

//Cube Vertices
/*
		  (-1.0f, 1.0f, -1.0f)          (1.0f, 1.0f, -1.0f)
		          [7]                          [6]
		          #-----------------------------#
		         /|                            /|
		        / |                           / |
	  (-1.0f, 1.0f, 1.0f)           (1.0f, 1.0f, 1.0f)
		  [3] /                         [2] /
		     #-----------------------------#    |
		     |    |                        |    |
		     |    |                        |    |
		     |   [4]                       |   [5]
		  (-1.0f, -1.0f, -1.0f)         (1.0f, -1.0f, -1.0f)
		     |    #-----------------------------#
		     |   /                         |   /
		     |  /                          |  /
		     | /                           | /
		     |/                            |/
		     #-----------------------------#
		    [0]                           [1]
	(-1.0f, -1.0f, 1.0f)         (1.0f, -1.0f, 1.0f)
*/

const int VERTICES	= 98;	// Total Number of Vertices
const int INDICES	= 48;	// Total Number of Indexes
const int UVS		= 192;	// Total Number of UVs
const int COLORS	= 98;	// Total Number of Colors

static const GLfloat vertices[] =
{

	// Cube 1
	// Front Face
	-1.00f, -1.00f,  1.00f,	// [0]	// ( 0)
	 1.00f, -1.00f,  1.00f,	// [1]	// ( 1)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 2)
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 3)

	// Top Face
	-1.00f,  1.00f,  1.00f,	// [3]	// ( 4)
	 1.00f,  1.00f,  1.00f,	// [2]	// ( 5)
	 1.00f,  1.00f, -1.00f,	// [6]	// ( 6)
	-1.00f,  1.00f, -1.00f,	// [7]	// ( 7)

	// Back Face
	 1.00f, -1.00f, -1.00f,	// [5]	// ( 8)
	-1.00f, -1.00f, -1.00f, // [4]	// ( 9)
	-1.00f,  1.00f, -1.00f,	// [7]	// (10)
	 1.00f,  1.00f, -1.00f,	// [6]	// (11)

	// Bottom Face
	-1.00f, -1.00f, -1.00f, // [4]	// (12)
	 1.00f, -1.00f, -1.00f, // [5]	// (13)
	 1.00f, -1.00f,  1.00f, // [1]	// (14)
	-1.00f, -1.00f,  1.00f, // [0]	// (15)

	// Left Face
	-1.00f, -1.00f, -1.00f, // [4]	// (16)
	-1.00f, -1.00f,  1.00f, // [0]	// (17)
	-1.00f,  1.00f,  1.00f, // [3]	// (18)
	-1.00f,  1.00f, -1.00f, // [7]	// (19)

	// Right Face
	 1.00f, -1.00f,  1.00f, // [1]	// (20)
	 1.00f, -1.00f, -1.00f, // [5]	// (21)
	 1.00f,  1.00f, -1.00f, // [6]	// (22)
	 1.00f,  1.00f,  1.00f, // [2]	// (23)

	 // cube 2
	// Front Face
	-1.00f, -1.00f,  -11.00f,	// [0]	// ( 0)
	1.00f, -1.00f,  -11.00f,	// [1]	// ( 1)
	1.00f,  1.00f, - 11.00f,	// [2]	// ( 2)
	-1.00f,  1.00f, - 11.00f,	// [3]	// ( 3)

	// Top Face
	-1.00f,  1.00f,  -11.00f,	// [3]	// ( 4)
	1.00f,  1.00f,  -11.00f,	// [2]	// ( 5)
	1.00f,  1.00f, -13.00f,	// [6]	// ( 6)
	-1.00f,  1.00f, -13.00f,	// [7]	// ( 7)

	// Back Face
	1.00f, -1.00f, -13.00f,	// [5]	// ( 8)
	-1.00f, -1.00f, -13.00f, // [4]	// ( 9)
	-1.00f,  1.00f, -13.00f,	// [7]	// (10)
	1.00f,  1.00f, -13.00f,	// [6]	// (11)

	// Bottom Face
	-1.00f, -1.00f, -13.00f, // [4]	// (12)
	1.00f, -1.00f, -13.00f, // [5]	// (13)
	1.00f, -1.00f,  -11.00f, // [1]	// (14)
	-1.00f, -1.00f,  -11.00f, // [0]	// (15)

	// Left Face
	-1.00f, -1.00f, -13.00f, // [4]	// (16)
	-1.00f, -1.00f,  -11.00f, // [0]	// (17)
	-1.00f,  1.00f,  -11.00f, // [3]	// (18)
	-1.00f,  1.00f, -13.00f, // [7]	// (19)

	// Right Face
	1.00f, -1.00f,  -11.00f, // [1]	// (20)
	1.00f, -1.00f, -13.00f, // [5]	// (21)
	1.00f,  1.00f, -13.00f, // [6]	// (22)
	1.00f,  1.00f,  -11.00f, // [2]	// (23)



	// cube 3
	// Front Face
	 -7.00f, -1.00f, -11.00f,	// [0]	// ( 0)
	 -5.00f, -1.00f, -11.00f,	// [1]	// ( 1)
	-5.00f, 1.00f, -11.00f,	// [2]	// ( 2)
	-7.00f, 1.00f, -11.00f,	// [3]	// ( 3)

	// Top Face
	 -7.00f, 1.00f, -11.00f,	// [3]	// ( 4)
	 -5.00f, 1.00f, -11.00f,	// [2]	// ( 5)
	 -5.00f, 1.00f, -13.00f,	// [6]	// ( 6)
	-7.00f, 1.00f, -13.00f,	// [7]	// ( 7)

	// Back Face
	-5.00f, -1.00f, -13.00f,	// [5]	// ( 8)
	-7.00f, -1.00f, -13.00f, // [4]	// ( 9)
	-7.00f, 1.00f, -13.00f,	// [7]	// (10)
	-5.00f, 1.00f, -13.00f,	// [6]	// (11)

	// Bottom Face
	-7.00f, -1.00f, -13.00f, // [4]	// (12)
	-5.00f, -1.00f, -13.00f, // [5]	// (13)
	-5.00f, -1.00f, -11.00f, // [1]	// (14)
	-7.00f, -1.00f, -11.00f, // [0]	// (15)

	 // Left Face
	-7.00f, -1.00f, -13.00f, // [4]	// (16)
	-7.00f, -1.00f, -11.00f, // [0]	// (17)
	-7.00f, 1.00f, -11.00f, // [3]	// (18)
	-7.00f, 1.00f, -13.00f, // [7]	// (19)

	// Right Face
	-5.00f, -1.00f, -11.00f, // [1]	// (20)
	-5.00f, -1.00f, -13.00f, // [5]	// (21)
	-5.00f, 1.00f, -13.00f, // [6]	// (22)
	-5.00f, 1.00f, -11.00f, // [2]	// (23)

	//cube 4
	//front
	5.00f, -1.00f, -11.00f,	// [0]	// ( 0)
	7.00f, -1.00f, -11.00f,	// [1]	// ( 1)
	7.00f, 1.00f, -11.00f,	// [2]	// ( 2)
	5.00f, 1.00f, -11.00f,	// [3]	// ( 3)
	//top
	5.00f, 1.00f, -11.00f,	// [3]	// ( 4)
	7.00f, 1.00f, -11.00f,	// [2]	// ( 5)
	7.00f, 1.00f, -13.00f,	// [6]	// ( 6)
	5.00f, 1.00f, -13.00f,	// [7]	// ( 7)
	//back
	7.00f, -1.00f, -13.00f,	// [5]	// ( 8)
	5.00f, -1.00f, -13.00f, // [4]	// ( 9)
	5.00f, 1.00f, -13.00f,	// [7]	// (10)
	7.00f, 1.00f, -13.00f,	// [6]	// (11)
	//bottom
	5.00f, -1.00f, -13.00f, // [4]	// (12)
	7.00f, -1.00f, -13.00f, // [5]	// (13)
	7.00f, -1.00f, -11.00f, // [1]	// (14)
	5.00f, -1.00f, -11.00f, // [0]	// (15)
	//left
	5.00f, -1.00f, -13.00f, // [4]	// (16)
	5.00f, -1.00f, -11.00f, // [0]	// (17)
	5.00f, 1.00f, -11.00f, // [3]	// (18)
	5.00f, 1.00f, -13.00f, // [7]	// (19)
	//right
	7.00f, -1.00f, -11.00f, // [1]	// (20)
	7.00f, -1.00f, -13.00f, // [5]	// (21)
	7.00f, 1.00f, -13.00f, // [6]	// (22)
	7.00f, 1.00f, -11.00f // [2]	// (23)
};

static const GLfloat colors[] = {
	
	// cube 1
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
    1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)
							
	
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
    1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

	
	1.0f, 0.0f, 0.0f, 1.0f, // [0]	// ( 0)
	1.0f, 0.0f, 0.0f, 1.0f, // [1]	// ( 1)
	1.0f, 0.0f, 0.0f, 1.0f, // [2]	// ( 2)
	1.0f, 0.0f, 0.0f, 1.0f, // [3]	// ( 3)

													
	//cube 2
	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	0.0f, 1.0f, 0.0f, 1.0f, // [3]	// ( 4)
	0.0f, 1.0f, 0.0f, 1.0f, // [2]	// ( 5)
	0.0f, 1.0f, 0.0f, 1.0f, // [6]	// ( 6)
	0.0f, 1.0f, 0.0f, 1.0f, // [7]	// ( 7)

	// cube 3
	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 8)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (10)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 8)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (10)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 8)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (10)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 8)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (10)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 8)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (10)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	0.0f, 0.0f, 1.0f, 1.0f, // [5]	// ( 8)
	0.0f, 0.0f, 1.0f, 1.0f, // [4]	// ( 9)
	0.0f, 0.0f, 1.0f, 1.0f, // [7]	// (10)
	0.0f, 0.0f, 1.0f, 1.0f, // [6]	// (11)

	// cube 4
	
0.0f, 1.0f, 1.0f, 1.0f, // [4]	// (12)
0.0f, 1.0f, 1.0f, 1.0f, // [5]	// (13)
0.0f, 1.0f, 1.0f, 1.0f, // [1]	// (14)
0.0f, 1.0f, 1.0f, 1.0f, // [0]	// (15)

0.0f, 1.0f, 1.0f, 1.0f, // [4]	// (12)
0.0f, 1.0f, 1.0f, 1.0f, // [5]	// (13)
0.0f, 1.0f, 1.0f, 1.0f, // [1]	// (14)
0.0f, 1.0f, 1.0f, 1.0f, // [0]	// (15)

0.0f, 1.0f, 1.0f, 1.0f, // [4]	// (12)
0.0f, 1.0f, 1.0f, 1.0f, // [5]	// (13)
0.0f, 1.0f, 1.0f, 1.0f, // [1]	// (14)
0.0f, 1.0f, 1.0f, 1.0f, // [0]	// (15)

0.0f, 1.0f, 1.0f, 1.0f, // [4]	// (12)
0.0f, 1.0f, 1.0f, 1.0f, // [5]	// (13)
0.0f, 1.0f, 1.0f, 1.0f, // [1]	// (14)
0.0f, 1.0f, 1.0f, 1.0f, // [0]	// (15)

0.0f, 1.0f, 1.0f, 1.0f, // [4]	// (12)
0.0f, 1.0f, 1.0f, 1.0f, // [5]	// (13)
0.0f, 1.0f, 1.0f, 1.0f, // [1]	// (14)
0.0f, 1.0f, 1.0f, 1.0f, // [0]	// (15)

0.0f, 1.0f, 1.0f, 1.0f, // [4]	// (12)
0.0f, 1.0f, 1.0f, 1.0f, // [5]	// (13)
0.0f, 1.0f, 1.0f, 1.0f, // [1]	// (14)
0.0f, 1.0f, 1.0f, 1.0f, // [0]	// (15)


	//// Left Face
	//1.0f, 1.0f, 0.0f, 1.0f, // [4]	// (16)
	//1.0f, 1.0f, 0.0f, 1.0f, // [0]	// (17)
	//1.0f, 1.0f, 0.0f, 1.0f, // [3]	// (18)
	//1.0f, 1.0f, 0.0f, 1.0f, // [7]	// (19)

	//// Right Face
	//1.0f, 0.0f, 1.0f, 1.0f, // [1]	// (20)
	//1.0f, 0.0f, 1.0f, 1.0f, // [5]	// (21)
	//1.0f, 0.0f, 1.0f, 1.0f, // [6]	// (22)
	//1.0f, 0.0f, 1.0f, 1.0f, // [2]	// (23)
};

GLfloat uvs[2 * 4 * 6 * 4] = {
	// Front Face (other faces populated in initialisation)
	0.0, 0.0,
	1.0, 0.0,
	1.0, 1.0,
	0.0, 1.0
};

static const GLuint indices[] =
{
	// cube 1
	// Front Face
	0, 1, 2,
	2, 3, 0,

	// Top Face
	4, 5, 6,
	6, 7, 4,

	// Back Face
	8, 9, 10,
	10, 11, 8,

	// Bottom Face
	12, 13, 14,
	14, 15, 12,

	// Left Face
	16, 17, 18,
	18, 19, 16,

	// Right Face
	20, 21, 22,
	22, 23, 20,

	//cube 2
	//front
	24,25,26,
	26,27,24,

	//top
	28,29,30,
	30,31,28,

	//back
	32,33,34,
	34,35,32,

	//bottom
	36,37,38,
	38,39,36,

	//left
	40,41,42,
	42,43,40,

	//right
	44,45,46,
	46,47,44,

	//cube 3
	//front
	48,49,50,
	50,51,48,

	//top
	52,53,54,
	54,55,52,

	//back
	56,57,58,
	58,59,56,

	//bottom
	60,61,62,
	62,63,60,

	//left
	64,65,66,
	66,67,64,

	//right
	68,69,70,
	70,71,68,

	//cube 4
	//front
	72,73,74,
	74,75,72,

	//top
	76,77,78,
	78,79,76,

	//back
	80,81,82,
	82,83,80,

	//bottom
	84,85,86,
	86,87,84,

	//left
	88,89,90,
	90,91,88,

	//right
	92,93,94,
	94,95,92
};

#endif

