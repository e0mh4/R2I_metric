typedef int __int64;
typedef int _QWORD;
typedef int _WORD;
__int64 sub_401C3D()
{
    char s[8]; // [rsp+0h] [rbp-60h] BYREF
    __int64 v2; // [rsp+8h] [rbp-58h]
    __int64 v3; // [rsp+10h] [rbp-50h]
    __int64 v4; // [rsp+18h] [rbp-48h]
    __int64 v5; // [rsp+20h] [rbp-40h]
    __int64 v6; // [rsp+28h] [rbp-38h]
    __int64 v7; // [rsp+30h] [rbp-30h]
    __int64 v8; // [rsp+38h] [rbp-28h]
    char v9; // [rsp+40h] [rbp-20h]
    __int64 v10; // [rsp+50h] [rbp-10h] BYREF
    int v11; // [rsp+58h] [rbp-8h]
    unsigned int v12; // [rsp+5Ch] [rbp-4h]

    *(_QWORD *)s = 0LL;
    v2 = 0LL;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    printf("Enter any binary number: ");
    __isoc99_scanf("%lld", &v10);
    v12 = v10;
    while ( v10 > 0 )
    {
    v11 = v10 % 10000;
    if ( v11 == 1111 )
    {
        *(_WORD *)&s[strlenstrlen(s)] = 70;
    }
else if ( v11 <= 1111 )
{
if ( v11 == 1110 )
{
*(_WORD *)&s[strlen(s)] = 69;
}
else if ( v11 == 1101 )
{
*(_WORD *)&s[strlen(s)] = 68;
}
else if ( v11 <= 1101 )
{
if ( v11 == 1100 )
{
*(_WORD *)&s[strlen(s)] = 67;
}
else if ( v11 == 1011 )
{
*(_WORD *)&s[strlen(s)] = 66;
}
else if ( v11 <= 1011 )
{
if ( v11 == 1010 )
{
*(_WORD *)&s[strlen(s)] = 65;
}
else if ( v11 == 1001 )
{
*(_WORD *)&s[strlen(s)] = 57;
}
else if ( v11 <= 1001 )
{
if ( v11 == 1000 )
{
*(_WORD *)&s[strlen(s)] = 56;
}
else if ( v11 == 111 )
{
*(_WORD *)&s[strlen(s)] = 55;
}
else if ( v11 <= 111 )
{
if ( v11 == 110 )
{
*(_WORD *)&s[strlen(s)] = 54;
}
else if ( v11 == 101 )
{
*(_WORD *)&s[strlen(s)] = 53;
}
else if ( v11 <= 101 )
{
if ( v11 == 100 )
{
*(_WORD *)&s[strlen(s)] = 52;
}
else if ( v11 == 11 )
{
*(_WORD *)&s[strlen(s)] = 51;
}
else if ( v11 <= 11 )
{
if ( v11 == 10 )
{
*(_WORD *)&s[strlen(s)] = 50;
 }
 else if ( v11 )
 {
 if ( v11 == 1 )
 *(_WORD *)&s[strlen(s)] = 49;
 }
 else
 {
*(_WORD *)&s[strlen(s)] = 48;
}
}
}
}
}
}
}
}
v10 /= 10000LL;
}
printf("Binary number: %lld\\n", v12);
printf("Hexadecimal number: %s", s);
return 0LL;
}