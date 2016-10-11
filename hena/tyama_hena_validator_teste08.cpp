#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
/*0*/ test("d3d4e3e4d9h7h9j3j4j7j9,f4f6g4g5g6h5h6", "5,3");
/*1*/ test("a1,s19", "0,0");
/*2*/ test("a1a2b1b2,r18r19s18s19", "1,1");
/*3*/ test("b1d1b2d2e2f2b5d5e5f5b6d6,b3d3b4d4", "7,2");
/*4*/ test("b2c2e2f2b3c3e3f3b5c5e5f5,d4", "8,0");
/*5*/ test("a1a18s1s18,a19", "306,0");
/*6*/ test("b11b15i11i15,a13h3m1q9", "28,0");
/*7*/ test("b7b8b15f7f8q8,d1d14j16n14o19p7", "4,0");
/*8*/ test("c3e9g17h4p17p19r12s13,c5c6d18k5k6k10n14p6", "0,8");
/*9*/ test("b7c12c13i8j12j13k7k16l1r18,a15b18d18f16h5j6m10n6n7o8", "7,0");
/*10*/ test("a12a17b10b17b19d7e12g3g17g19q18s2,c10c16f5g7i5j13k6l4n19o7p9q19", "10,0");
/*11*/ test("a19b2b3d2e13f5f14g15h1i7o2p19q3r17,a4a6a8a18b17c4c8f13h8j8l13n12n17p5", "0,8");
/*12*/ test("b13b14b17c4d12e3f16h5l19m2n1n19o3o4o14q13q16,d3d8d14e1e16f12g6j8o1p5p7q1r9r15r16s5s7", "0,6");
/*13*/ test("b6b17c4c9c12c16d14e14g5g9i10j10j13m8q2q5q18r1r6,b8c11e13f3h11h18j7m1m3m7n3n4n11o4p12q3q4q17s13", "0,3");
/*14*/ test("a9a10a15d2d16d17d18g18i11k11k15l14m15n5n11o1p6p14q11q14r7r15,a11c3c10c12d4f1f16f19g3g6g10i16k2k16l12n12o12p1r5r6s9s11", "0,28");
/*15*/ test("a10c4c16c19e12g11g17h1h9i8i12i17i19k18l5l16n10n19p12p19q5q9r6r9r16,b8b19c1c10d11d15e1f3f8f13i7j5j8k1k6l2l4l6l11m2m13p2r1r11s18", "0,0");
/*16*/ test("a12a19b6b7c13c19d5d12d19e8f7h1h14i3k4k5k15l10m3n3o2p18q11q17q19r11r14s18,c6c7c9e16f8f9f13g14h9h12h15j5j10j18k11k14k18n5n18o1o18p4p10p14r13s2s7s13", "21,0");
/*17*/ test("a8b18d6e6f12f16g9g12h15i7j5j6j12k2k10k11k19l6n18o15p6q6r1r2r5r6r9r17s1s19,a10a13a15b6b10c1c5c18d18e1e3e5e19g3h6j7j15j17k18l3l9m2m4m14m16n9o17q18s7s13", "8,8");
/*18*/ test("a3a15b17d1e4e19f1f10f13f15g8h3h6h11i6i12j18l5l8l9l11m3m8n7n8n18o3o19p13r7r17s2s11,a6c1c2c5c13d13e16f2f5f14g1g2g4g5g14i10j9k1k7k15m2m4n13n14n19p6p18q7q13r3r18s17s18", "0,3");
/*19*/ test("a6a8a9b1b12d1d3d4f4f13f16g7h10j13j15j17k2k6k7k15k17l2l17m5m8n4n12n18o11o13p9q6r15s2s3s17,a2b7b14c2c8c19d8e1e3e15f5f14g9g14h15i11i18k16l10l11l18m9o2o3o5p10p17q2q5q19r1r6r18s1s7s19", "0,6");
/*20*/ test("a2b1c1c5c12c14d12e2e17g4g7g19h3h9h18i2i8i14j3j15j17k13k19l8l15l16l18n8n12o14o15o18o19p17q6q9q12r3r5,a11a14a19b7c11e6e10e13e14e19f3f4f14h15h17i1j19k1k2k3k7k10l11l19m4m13n1n5n13n16o1o7o17p5q16r2r8r12s6", "0,24");
/*21*/ test("a15a18b15b16b18c4c10c13c18d7d10e15g6g9g14i6i19j9j15k1k5k16k17l2l14l18m5m9n3n7n14o5o7o8p13p17q5q9r11r12r16s11,a6a10a12a19b6c6d1d3d8d13e4f3f4f9f12f15f17g2g5g8g17h6h16i14i18l1l7m12m14n16n18o2o10o12p7p8q13q15q17r3r7s10", "3,0");
/*22*/ test("a10a18b4b7b16c6c11d13d17e14e19f9f14h7h9h10i3i6j12k1k7k10k19l1l3l12m8m15n4n14o7o10o17p8p16q7q10q18r1r8r11r13r15s2s14,a2a4a9a12a13a19b12d5d15e1e13e15f1f10g9g12h3h4h6i2i12i19j3j11j19l2l7l10l14l19m3m14n3n5n11o5o9o18o19p18q4q11r2r17r19", "9,0");
/*23*/ test("a6b19c12c13c17e3e15e17e18f9f10f17g16g17h4h7h13h17i8i10i11i13i14i19j2j5j8k16l18m10n7n8n11n18o2o7o8o12p1p6p7p9p15p18p19r1r15r18s1s6s14s16,a4b6b9b13c5c9d1d5d14e8e10e16f1f6f12f18g3g14h1h3h8h15i2i3j6j10j17k8l4l8l9l11m7m11m17m18n10n12n14n15o1o9o17p2q12r2r4r8r14s12s15s17", "7,0");
/*24*/ test("a12b4b11b13b17c2c3c4d11d18d19e13e18e19f11f13f17g2g4h1i9i11j3j4j11j17k3k10k13l7l10l14m1m2m5m12m18n10n12o2o5o7o14p2p13p16p18p19q16q18r5r6r19s12s18,a2b2b6b9c8c9c12c17d5d17e4e10e15e16f7f12f15f19g8g9h4h9h11h18i1i13i16i17i18j7k1k19l1l12m11n5n17o9o12p1p5p7p9p12p17q3q5q7q19r1s4s5s6s7s19", "1,9");
/*25*/ test("a10a11a16b1b2b4b14c5c6c9c17d2d11d18d19e11e15f2f6f16g4g5g14h4h10h12i5i15i18j7j11j15j16k3k8k9k18l13l14l16l18m3m4m12m18n7n11n15o5o9p1p4p16q5q6q8q9q17r15r17s3s6,a1a3a7a9b3b8b11b18d1d5d6d14e13e19f4f5f12f13g1g2g9g13g15h6h8h11h13h14i3i14i17k2k7k16k17l6m2m10n2n4n12n14n18o2o15p3p13p14p15p18q3q13q14r1s1s5s7s10s11s16s18s19", "12,1");
/*26*/ test("a2a3a14b15b18c1c10c14c16c17d8d12d19e1e2e4e5e8e9e11e13f4f19g5h4h15h17i19j2j9j12j16j18k2k5k8l7l10l17m13n7n9n10n15o1o6o9o10p3p14p16q10q11q12q16q17q18q19r7r10s3s5s11s14s16,a4a10a11a12b1b2b11b13c4c11c13d3d4d5d9d11e6e10e15e19f10f12g1g8g12g19h6h19i2i3j7j19k1k16k18l11l12l13l14m1m14n1n2n13o8o12o15p2p4p5p7p8p15p17q1q6q8r3r4r6r11r12r18s15s19", "7,2");
/*27*/ test("a4a10b2b16c3c13d9d10d14d16d17e3e10e11e16f1f5f7f8f10f18g7g17h3h5h8i1i5i7i14i18j3j13j17k10k15k17l1l5l6l9l11l14l15m3m4m15m19n3n15o5o8o11o12o13o17p4p6p16q2q5q6q8q11q13q15r5r7r15s5s14s15,a6a15a17b1b6b7b8b14b18b19c2c8c9c14c16e5e15f2f17g1g8g14g15g19h9h14h19i4i6i8i11i13j2j6j14j15j16j18k9k14l8l12l13m5m7m8m12m13m17m18n2n4o15o18p2p8p18q16q17q19r2r3r8r10r11r13r16r17s1s8s13s19", "4,7");
/*28*/ test("a13a14a18b1b2b3b11b18b19c1c3c5c11d2d4d12d18e3e5e7e8e10f3f7g6g18h1h3h7h11h14h15h19i1i2i8i9i10j9j10j17k7k15l6l8l10l12m5m6m7m12m17n2n4n5o2o18p2p7p8p10p14q2q4q7q14q16r2r5r19s1s2s9s12s17s19,a1a5a6a8b8c15c17d6d11d13d15d17e9e11e12e15e17f1f6f9f11f16f18g2g5g7g13g15g19h2h10h12i7i15j2j4j5k5k9k10k11k13k14k18l2l19m1m4m11m13m16n12n17n18o4o15o17p6p9p11p12p17q13q15q17q18r3r4r6r9r10s4s7s10s11s14", "7,10");
/*29*/ test("a10a11a12a14a17b4b6b9c13c15c16d5d9d11d19e5e6e7e16f3f6g1g5g13g16g18h2h4h8h17h18h19i2i3i4i9i10i14i19j1j6j7j13j18j19k8l3l7l10m3m6m18n8n10n11n16o1o7o12o13o14o17o19p6p9p10p17q1q11q18r7r10r12r15r18s3s4s9s11,a2a6a16b1b2b15b18b19c3c7c8c18c19d2d3d7d8e2e3e4e13e18f9f11g3g4g10g14g15g17g19h9h12h15i6i8i16i17j3j4j5j11j12k1k2k11k12k15k16l1l2l6l16l19m1m14n2n6n14n15n18o2o6o10o11p19q2q3q4q6q8q17r2s6s7s12s13s15s18", "4,9");
/*30*/ test("a3a5a9a11b2b3b4b5b6b9b19c5c11c14c16c18d5d6d11d19e5e7e12e15f4f8f11g5g14g19h2h3h5h10h16h17h19i17i18j1j4j5j6j9j12k7k15k17k19l1l5l16l17m1m2m11n6n8n12n14n18o1o11o12o16p1p12p14p15p16p18q2q12q13q14q18r5r10r13r14r15r16s13,a1a4a6a10a13a17a19b15b18c1c2c4c6c17d10d16e3e4e10e19f5f9f10f13f14f17f19g10g16h9h12i1i2i5i11i13i15i19j2j15j17k2k6k9k12k13k18l2l6l9l12l19m5m6m14m17n2n3n4n5n9n10n11o2o5o7o15o17p8p9p11p19q5q6q8q9q15r4r9s5s9s12s14", "7,7");

/*31*/test("a1c1g1a4c4g4,e1","6,0");
/*32*/test("e1,a1c1g1a4c4g4","0,6");
/*33*/test("a1a2a3a4a5a6a7a8a9a10a11a12a13a14a15a16a17a18a19b1b2b3b4b5b6b7b8b9b10b11b12b13b14b15b16b17b18b19c1c2c3c4c5c6c7c8c9c10c11c12c13c14c15c16c17c18c19d1d2d3d5d6d7d8d9d10d11d12d13d14d15d16d17d18d19e1e2e3e4e5e6e7e8e9e10e11e12e13e14e15e16e17e18e19f1f2f3f4f5f6f7f8f9f10f11f12f13f14f15f16f17f18f19g1g2g3g4g5g6g7g8g9g10g11g12g13g14g15g16g17g18g19h1h2h3h4h5h6h7h8h9h10h11h12h13h14h15h16h17h18h19i1i2i3i4i5i6i7i8i9i10i11i12i13i14i15i16i17i18i19j1j2j3j4j5j6j7j8j9j10j11j12j13j14j15j16j17j18j19k1k2k3k4k5k6k7k8k9k10k11k12k13k14k15k16k17k18k19l1l2l3l4l5l6l7l8l9l10l11l12l13l14l15l16l17l18l19m1m2m3m4m5m6m7m8m9m10m11m12m13m14m15m16m17m18m19n1n2n3n4n5n6n7n8n9n10n11n12n13n14n15n16n17n18n19o1o2o3o4o5o6o7o8o9o10o11o12o13o14o15o16o17o18o19p1p2p3p4p5p6p7p8p9p10p11p12p13p14p15p16p17p18p19q1q2q3q4q5q6q7q8q9q10q11q12q13q14q15q16q17q18q19r1r2r3r4r5r6r7r8r9r10r11r12r13r14r15r16r17r18r19s1s2s3s4s5s6s7s8s9s10s11s12s13s14s15s16s17s18s19,d4","320,0");
/*34*/test("a1b1c1d1e1f1g1h1i1j1k1l1m1n1o1p1q1r1s1,a19b19c19d19e19f19g19h19i19j19k19l19m19n19o19p19q19r19s19","0,0");
/*35*/test("a1a2b1b2c1c2d1d2e1e2f1f2g1g2h1h2i1i2j1j2k1k2l1l2m1m2n1n2o1o2p1p2q1q2r1r2s1s2,a18a19b18b19c18c19d18d19e18e19f18f19g18g19h18h19i18i19j18j19k18k19l18l19m18m19n18n19o18o19p18p19q18q19r18r19s18s19","18,18");
/*36*/test("a1a2a3b1b2b3c1c2c3d1d2d3e1e2e3f1f2f3g1g2g3h1h2h3i1i2i3j1j2j3k1k2k3l1l2l3m1m2m3n1n2n3o1o2o3p1p2p3q1q2q3r1r2r3s1s2s3,a17a18a19b17b18b19c17c18c19d17d18d19e17e18e19f17f18f19g17g18g19h17h18h19i17i18i19j17j18j19k17k18k19l17l18l19m17m18m19n17n18n19o17o18o19p17p18p19q17q18q19r17r18r19s17s18s19","36,36");
/*37*/test("a1a2a3a4b1b2b3b4c1c2c3c4d1d2d3d4e1e2e3e4f1f2f3f4g1g2g3g4h1h2h3h4i1i2i3i4j1j2j3j4k1k2k3k4l1l2l3l4m1m2m3m4n1n2n3n4o1o2o3o4p1p2p3p4q1q2q3q4r1r2r3r4s1s2s3s4,a16a17a18a19b16b17b18b19c16c17c18c19d16d17d18d19e16e17e18e19f16f17f18f19g16g17g18g19h16h17h18h19i16i17i18i19j16j17j18j19k16k17k18k19l16l17l18l19m16m17m18m19n16n17n18n19o16o17o18o19p16p17p18p19q16q17q18q19r16r17r18r19s16s17s18s19","54,54");
/*38*/test("a1a2a3a4a5b1b2b3b4b5c1c2c3c4c5d1d2d3d4d5e1e2e3e4e5f1f2f3f4f5g1g2g3g4g5h1h2h3h4h5i1i2i3i4i5j1j2j3j4j5k1k2k3k4k5l1l2l3l4l5m1m2m3m4m5n1n2n3n4n5o1o2o3o4o5p1p2p3p4p5q1q2q3q4q5r1r2r3r4r5s1s2s3s4s5,a15a16a17a18a19b15b16b17b18b19c15c16c17c18c19d15d16d17d18d19e15e16e17e18e19f15f16f17f18f19g15g16g17g18g19h15h16h17h18h19i15i16i17i18i19j15j16j17j18j19k15k16k17k18k19l15l16l17l18l19m15m16m17m18m19n15n16n17n18n19o15o16o17o18o19p15p16p17p18p19q15q16q17q18q19r15r16r17r18r19s15s16s17s18s19","72,72");
/*39*/test("a1a2a3a4a5a6b1b2b3b4b5b6c1c2c3c4c5c6d1d2d3d4d5d6e1e2e3e4e5e6f1f2f3f4f5f6g1g2g3g4g5g6h1h2h3h4h5h6i1i2i3i4i5i6j1j2j3j4j5j6k1k2k3k4k5k6l1l2l3l4l5l6m1m2m3m4m5m6n1n2n3n4n5n6o1o2o3o4o5o6p1p2p3p4p5p6q1q2q3q4q5q6r1r2r3r4r5r6s1s2s3s4s5s6,a14a15a16a17a18a19b14b15b16b17b18b19c14c15c16c17c18c19d14d15d16d17d18d19e14e15e16e17e18e19f14f15f16f17f18f19g14g15g16g17g18g19h14h15h16h17h18h19i14i15i16i17i18i19j14j15j16j17j18j19k14k15k16k17k18k19l14l15l16l17l18l19m14m15m16m17m18m19n14n15n16n17n18n19o14o15o16o17o18o19p14p15p16p17p18p19q14q15q16q17q18q19r14r15r16r17r18r19s14s15s16s17s18s19","90,90");
/*40*/test("a1a2a3a4a5a6a7b1b2b3b4b5b6b7c1c2c3c4c5c6c7d1d2d3d4d5d6d7e1e2e3e4e5e6e7f1f2f3f4f5f6f7g1g2g3g4g5g6g7h1h2h3h4h5h6h7i1i2i3i4i5i6i7j1j2j3j4j5j6j7k1k2k3k4k5k6k7l1l2l3l4l5l6l7m1m2m3m4m5m6m7n1n2n3n4n5n6n7o1o2o3o4o5o6o7p1p2p3p4p5p6p7q1q2q3q4q5q6q7r1r2r3r4r5r6r7s1s2s3s4s5s6s7,a13a14a15a16a17a18a19b13b14b15b16b17b18b19c13c14c15c16c17c18c19d13d14d15d16d17d18d19e13e14e15e16e17e18e19f13f14f15f16f17f18f19g13g14g15g16g17g18g19h13h14h15h16h17h18h19i13i14i15i16i17i18i19j13j14j15j16j17j18j19k13k14k15k16k17k18k19l13l14l15l16l17l18l19m13m14m15m16m17m18m19n13n14n15n16n17n18n19o13o14o15o16o17o18o19p13p14p15p16p17p18p19q13q14q15q16q17q18q19r13r14r15r16r17r18r19s13s14s15s16s17s18s19","108,108");
/*41*/test("a1a2a3a4a5a6a7a8b1b2b3b4b5b6b7b8c1c2c3c4c5c6c7c8d1d2d3d4d5d6d7d8e1e2e3e4e5e6e7e8f1f2f3f4f5f6f7f8g1g2g3g4g5g6g7g8h1h2h3h4h5h6h7h8i1i2i3i4i5i6i7i8j1j2j3j4j5j6j7j8k1k2k3k4k5k6k7k8l1l2l3l4l5l6l7l8m1m2m3m4m5m6m7m8n1n2n3n4n5n6n7n8o1o2o3o4o5o6o7o8p1p2p3p4p5p6p7p8q1q2q3q4q5q6q7q8r1r2r3r4r5r6r7r8s1s2s3s4s5s6s7s8,a12a13a14a15a16a17a18a19b12b13b14b15b16b17b18b19c12c13c14c15c16c17c18c19d12d13d14d15d16d17d18d19e12e13e14e15e16e17e18e19f12f13f14f15f16f17f18f19g12g13g14g15g16g17g18g19h12h13h14h15h16h17h18h19i12i13i14i15i16i17i18i19j12j13j14j15j16j17j18j19k12k13k14k15k16k17k18k19l12l13l14l15l16l17l18l19m12m13m14m15m16m17m18m19n12n13n14n15n16n17n18n19o12o13o14o15o16o17o18o19p12p13p14p15p16p17p18p19q12q13q14q15q16q17q18q19r12r13r14r15r16r17r18r19s12s13s14s15s16s17s18s19","126,126");
/*42*/test("a1a2a3a4a5a6a7a8a9b1b2b3b4b5b6b7b8b9c1c2c3c4c5c6c7c8c9d1d2d3d4d5d6d7d8d9e1e2e3e4e5e6e7e8e9f1f2f3f4f5f6f7f8f9g1g2g3g4g5g6g7g8g9h1h2h3h4h5h6h7h8h9i1i2i3i4i5i6i7i8i9j1j2j3j4j5j6j7j8j9k1k2k3k4k5k6k7k8k9l1l2l3l4l5l6l7l8l9m1m2m3m4m5m6m7m8m9n1n2n3n4n5n6n7n8n9o1o2o3o4o5o6o7o8o9p1p2p3p4p5p6p7p8p9q1q2q3q4q5q6q7q8q9r1r2r3r4r5r6r7r8r9s1s2s3s4s5s6s7s8s9,a11a12a13a14a15a16a17a18a19b11b12b13b14b15b16b17b18b19c11c12c13c14c15c16c17c18c19d11d12d13d14d15d16d17d18d19e11e12e13e14e15e16e17e18e19f11f12f13f14f15f16f17f18f19g11g12g13g14g15g16g17g18g19h11h12h13h14h15h16h17h18h19i11i12i13i14i15i16i17i18i19j11j12j13j14j15j16j17j18j19k11k12k13k14k15k16k17k18k19l11l12l13l14l15l16l17l18l19m11m12m13m14m15m16m17m18m19n11n12n13n14n15n16n17n18n19o11o12o13o14o15o16o17o18o19p11p12p13p14p15p16p17p18p19q11q12q13q14q15q16q17q18q19r11r12r13r14r15r16r17r18r19s11s12s13s14s15s16s17s18s19","144,144");
/*43*/test("b1d1f1h1j1l1n1p1r1a2c2e2g2i2k2m2o2q2s2b3d3f3h3j3l3n3p3r3a4c4e4g4i4k4m4o4q4s4b5d5f5h5j5l5n5p5r5a6c6e6g6i6k6m6o6q6s6b7d7f7h7j7l7n7p7r7a8c8e8g8i8k8m8o8q8s8b9d9f9h9j9l9n9p9r9a10c10e10g10i10k10m10o10q10s10b11d11f11h11j11l11n11p11r11a12c12e12g12i12k12m12o12q12s12b13d13f13h13j13l13n13p13r13a14c14e14g14i14k14m14o14q14s14b15d15f15h15j15l15n15p15r15a16c16e16g16i16k16m16o16q16s16b17d17f17h17j17l17n17p17r17a18c18e18g18i18k18m18o18q18s18b19d19f19h19j19l19n19p19r19,a1c1e1g1i1k1m1o1q1s1b2d2f2h2j2l2n2p2r2a3c3e3g3i3k3m3o3q3s3b4d4f4h4j4l4n4p4r4a5c5e5g5i5k5m5o5q5s5b6d6f6h6j6l6n6p6r6a7c7e7g7i7k7m7o7q7s7b8d8f8h8j8l8n8p8r8a9c9e9g9i9k9m9o9q9s9b10d10f10h10j10l10n10p10r10a11c11e11g11i11k11m11o11q11s11b12d12f12h12j12l12n12p12r12a13c13e13g13i13k13m13o13q13s13b14d14f14h14j14l14n14p14r14a15c15e15g15i15k15m15o15q15s15b16d16f16h16j16l16n16p16r16a17c17e17g17i17k17m17o17q17s17b18d18f18h18j18l18n18p18r18a19c19e19g19i19k19m19o19q19s19","0,0");
/*44*/test("a1a2a3a4a5b1b2b3b4b5c1c2c4c5d1d2d3d4d5e1e2e3e4e5,l9","16,0");
/*45*/test("a2a3b1b4c1c4d2d3,l9","5,0");
/*46*/test("a1a6b3b4c2c5d2d5e3e4f1f6,l9","25,0");
}