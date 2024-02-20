typedef int size_t;
long sub_401c3d() {
    size_t var_5;
    long i;
    long var_0;
    long var_2;
    long var_4;
    long * var_3;
    printf(/* format */ "Enter any binary number: ");
    var_3 = &var_0;
    __isoc99_scanf(/* format */ "%lld", var_3);
    var_2 = 0L;
    for (i = var_0; i > 0L; i /= 0x2710) {
        var_4 = i % 0x2710;
        switch(var_4) {
        case 0:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x30;
            break;
        case 1:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x31;
            break;
        case 10:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x32;
            break;
        case 11:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x33;
            break;
        case 100:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x34;
            break;
        case 101:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x35;
            break;
        case 110:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x36;
            break;
        case 111:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x37;
            break;
        case 0x3e8:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x38;
            break;
        case 0x3e9:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x39;
            break;
        case 0x3f2:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x41;
            break;
        case 0x3f3:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x42;
            break;
        case 0x44c:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x43;
            break;
        case 0x44d:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x44;
            break;
        case 0x456:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x45;
            break;
        case 0x457:
            var_3 = &var_2;
            var_5 = strlen(var_3);
            *(&var_2 + var_5) = 0x46;
            break;
        }
    }
    printf(/* format */ "Binary number: %lld\\n", var_0 & 0xffffffff);
    var_3 = &var_2;
    printf(/* format */ "Hexadecimal number: %s", var_3);
    return 0L;
}