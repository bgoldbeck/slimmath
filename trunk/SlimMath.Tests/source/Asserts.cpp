/*
* Copyright (c) 2007-2010 SlimDX Group
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/
#include "stdafx.h"
#include "Asserts.h"

const float ZeroTolerance = 1e-6f;

void AssertEq(D3DXVECTOR2 expected, SlimMath::Vector2 actual)
{
	ASSERT_LE(abs(expected.x - actual.X), ZeroTolerance);
	ASSERT_LE(abs(expected.y - actual.Y), ZeroTolerance);
}

void AssertEq(D3DXVECTOR3 expected, SlimMath::Vector3 actual)
{
	ASSERT_LE(abs(expected.x - actual.X), ZeroTolerance);
	ASSERT_LE(abs(expected.y - actual.Y), ZeroTolerance);
	ASSERT_LE(abs(expected.z - actual.Z), ZeroTolerance);
}

void AssertEq(D3DXVECTOR4 expected, SlimMath::Vector4 actual)
{
	ASSERT_LE(abs(expected.x - actual.X), ZeroTolerance);
	ASSERT_LE(abs(expected.y - actual.Y), ZeroTolerance);
	ASSERT_LE(abs(expected.z - actual.Z), ZeroTolerance);
	ASSERT_LE(abs(expected.w - actual.W), ZeroTolerance);
}

void AssertEq(D3DXMATRIX expected, SlimMath::Matrix actual)
{
	for (int row = 0; row < 4; row++)
	{
		for (int col = 0; col < 4; col++)
			ASSERT_LE(abs(expected(row, col) - actual[row, col]), ZeroTolerance);
	}
}