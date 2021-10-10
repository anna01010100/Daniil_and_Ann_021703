#include "pch.h"
#include "../PPVIS/Realize.cpp"



::testing::AssertionResult Sum1(bool foo3)
{
	Vector v1(7, 8, 9);
	Vector v2(3, 2, 1);
	Vector sr(10, 10, 10);
	Vector v4;

	v4 = v1 + v2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Sum2(bool foo3)
{
	Vector v1(5, 5, 5);
	Vector v2(5, 5, 5);
	Vector sr(10, 10, 10);
	Vector v4;

	v4 = v1 + v2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Sum3(bool foo3)
{
	Vector v1(2, 6, 3);
	Vector v2(3, 2, 1);
	Vector sr(5, 8, 4);
	Vector v4;

	v1 += v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Sum4(bool foo3)
{
	Vector v1(5, 5, 5);
	Vector v2(23, 8, 10);
	Vector sr(28, 13, 15);
	Vector v4;

	v1+=v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}



::testing::AssertionResult Min1(bool foo3)
{
	Vector v1(7, 8, 9);
	Vector v2(3, 2, 1);
	Vector sr(4, 6, 8);
	Vector v4;

	v4 = v1 - v2;
	
	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Min2(bool foo3)
{
	Vector v1(5, 5, 5);
	Vector v2(5, 5, 5);
	Vector sr(0, 0, 0);
	Vector v4;

	v4 = v1 - v2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Min3(bool foo3)
{
	Vector v1(2, 6, 3);
	Vector v2(3, 2, 1);
	Vector sr(-1, 4, 2);
	Vector v4;

	v1 -= v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Min4(bool foo3)
{
	Vector v1(5, 5, 5);
	Vector v2(23, 8, 10);
	Vector sr(-18, -3, -5);
	Vector v4;

	v1 -= v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}




::testing::AssertionResult Proizv1(bool foo3)
{
	Vector v1(7, 8, 9);
	Vector v2(3, 2, 1);
	Vector sr(21, 16, 9);
	Vector v4;

	v4 = v1 * v2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Proizv2(bool foo3)
{
	Vector v1(4, 8, 5);
	Vector v2(6, 5, 5);
	Vector sr(24, 40, 25);
	Vector v4;

	v4 = v1 * v2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Proizv3(bool foo3)
{
	Vector v1(2, 6, 3);
	Vector v2(3, 2, 1);
	Vector sr(6, 12, 3);
	Vector v4;

	v1 *= v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Proizv4(bool foo3)
{
	Vector v1(9, 5, 7);
	Vector v2(9, 2, 7);
	Vector sr(81, 10, 49);
	Vector v4;

	v1 *= v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


::testing::AssertionResult Delen1(bool foo3)
{
	Vector v1(20, 8, 9);
	Vector v2(10, 2, 9);
	Vector sr(2, 4, 1);
	Vector v4;

	v4 = v1 / v2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Delen2(bool foo3)
{
	Vector v1(6, 25, 81);
	Vector v2(2, 5, 9);
	Vector sr(3, 5, 9);
	Vector v4;

	v4 = v1 / v2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Delen3(bool foo3)
{
	Vector v1(45, 6, 12);
	Vector v2(5, 2, 4);
	Vector sr(9, 3, 3);
	Vector v4;

	v1 /= v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult Delen4(bool foo3)
{
	Vector v1(14, 36, 7);
	Vector v2(7, 6, 7);
	Vector sr(2, 6, 1);
	Vector v4;

	v1 /= v2;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


::testing::AssertionResult ProizvCh1(bool foo3)
{
	Vector v1(7, 8, 9);
	Vector v2(3, 2, 1);
	Vector sr(28, 32, 36);
	Vector v4;

	v4 = v1 * 4;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult ProizvCh2(bool foo3)
{
	Vector v1(4, 8, 5);
	Vector v2(6, 5, 5);
	Vector sr(8, 16, 10);
	Vector v4;

	v4 = v1 * 2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult ProizvCh3(bool foo3)
{
	Vector v1(2, 6, 3);
	Vector v2(3, 2, 1);
	Vector sr(20, 60, 30);
	Vector v4;

	v1 *= 10;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult ProizvCh4(bool foo3)
{
	Vector v1(9, 5, 7);
	Vector v2(9, 2, 7);
	Vector sr(81, 45, 63);
	Vector v4;

	v1 *= 9;

	if (v1 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


::testing::AssertionResult Cos1(bool foo3)
{
	Vector s1(2, 3, 1);
	Vector s2(9, 2, 7);
	Cos v4;
	Cos sr(1);
	 

	v4 = s1^s2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


::testing::AssertionResult Cos2 (bool foo3)
{
	Vector s1(5, 9, 8);
	Vector s2(13, 12, 17);
	Cos v4;
	Cos sr(1);


	v4 = s1 ^ s2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


::testing::AssertionResult Cos3(bool foo3)
{
	Vector s1(4, 16, 20);
	Vector s2(4, 7, 0);
	Cos v4;
	Cos sr(1);


	v4 = s1 ^ s2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


::testing::AssertionResult Cos4(bool foo3)
{
	Vector s1(12, 15, 17);
	Vector s2(9, 2, 7);
	Cos v4;
	Cos sr(1);


	v4 = s1 ^ s2;

	if (v4 == sr)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


::testing::AssertionResult VecLen1(bool foo3)
{
	Vector v1(12, 15, 17);
	
	double sr = v1.length_v();


	if (sr == 26)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult VecLen2(bool foo3)
{
	Vector v1(4, 8, 16);

	double sr = v1.length_v();


	if (sr == 19)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult VecLen3(bool foo3)
{
	Vector v1(3, 7, 5);

	double sr = v1.length_v();


	if (sr == 10)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}

::testing::AssertionResult VecLen4(bool foo3)
{
	Vector v1(13, 16, 2);

	double sr = v1.length_v();


	if (sr == 21)
		return ::testing::AssertionSuccess();
	else
		return ::testing::AssertionFailure() << foo3;

}


TEST(SumTest, Test1)
{
	EXPECT_TRUE(Sum1(true));
}

TEST(SumTest, Test2)
{
	EXPECT_TRUE(Sum2(true));
}

TEST(SumTest, Test3)
{
	EXPECT_TRUE(Sum3(true));
}

TEST(SumTest, Test4)
{
	EXPECT_TRUE(Sum4(true));
}



TEST(MinTest, Test1)
{
	EXPECT_TRUE(Min1(true));
}

TEST(MinTest, Test2)
{
	EXPECT_TRUE(Min2(true));
}

TEST(MinTest, Test3)
{
	EXPECT_TRUE(Min3(true));
}

TEST(MinTest, Test4)
{
	EXPECT_TRUE(Min4(true));
}


TEST(ProizvTest, Test1)
{
	EXPECT_TRUE(Proizv1(true));
}
TEST(ProizvTest, Test2)
{
	EXPECT_TRUE(Proizv2(true));
}

TEST(ProizvTest, Test3)
{
	EXPECT_TRUE(Proizv3(true));
}

TEST(ProizvTest, Test4)
{
	EXPECT_TRUE(Proizv4(true));
}



TEST(ProizvChTest, Test1)
{
	EXPECT_TRUE(ProizvCh1(true));
}
TEST(ProizvChTest, Test2)
{
	EXPECT_TRUE(ProizvCh2(true));
}

TEST(ProizvChTest, Test3)
{
	EXPECT_TRUE(ProizvCh3(true));
}

TEST(ProizvChTest, Test4)
{
	EXPECT_TRUE(ProizvCh4(true));
}


TEST(CosTest, Test1)
{
	EXPECT_TRUE(Cos1(true));
}
TEST(CosTest, Test2)
{
	EXPECT_TRUE(Cos2(true));
}

TEST(CosTest, Test3)
{
	EXPECT_TRUE(Cos3(true));
}

TEST(CosTest, Test4)
{
	EXPECT_TRUE(Cos4(true));
}


TEST(DelenTest, Test1)
{
	EXPECT_TRUE(Delen1(true));
}

TEST(DelenTest, Test2)
{
	EXPECT_TRUE(Delen2(true));
}

TEST(DelenTest, Test3)
{
	EXPECT_TRUE(Delen3(true));
}

TEST(DelenTest, Test4)
{
	EXPECT_TRUE(Delen4(true));
}


TEST(VecLenTest, Test1)
{
	EXPECT_TRUE(VecLen1(true));
}

TEST(VecLenTest, Test2)
{
	EXPECT_TRUE(VecLen2(true));
}

TEST(VecLenTest, Test3)
{
	EXPECT_TRUE(VecLen3(true));
}

TEST(VecLenTest, Test4)
{
	EXPECT_TRUE(VecLen4(true));
}

