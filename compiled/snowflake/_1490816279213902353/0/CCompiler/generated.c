// <file: generated.c>
#include <stdint.h>
#define encode162_162_162_162(x0, x1, x2, x3) (4251528 * (long) (x0) + 26244 * (long) (x1) + 162 * (long) (x2) + 1 * (long) (x3))
void kernel(double* restrict mesh, double* restrict beta_0, double* restrict beta_1, double* restrict beta_2, double* restrict beta_3, double* restrict out) {
    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = (mesh[encode162_162_162_162(index_0 + -1, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)]) * beta_0[encode162_162_162_162(index_0 + 1, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + -1, index_2 + 0, index_3 + 0)] * -1) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]) * beta_1[encode162_162_162_162(index_0 + 0, index_1 + 1, index_2 + 0, index_3 + 0)]);

                            };
                        };
                    };
                };
            };
        };

    
        for (long index_0_outer = 1; index_0_outer < 161; index_0_outer += 16) {
            for (long index_1_outer = 1; index_1_outer < 161; index_1_outer += 16) {
                for (long index_0_inner = 0; index_0_inner < 16 && index_0_inner + index_0_outer < 161; index_0_inner += 1) {
                    for (long index_1_inner = 0; index_1_inner < 16 && index_1_inner + index_1_outer < 161; index_1_inner += 1) {
                        long index_0 = index_0_inner + index_0_outer;
                        long index_1 = index_1_inner + index_1_outer;
                        for (long index_2 = 1; index_2 < 161; index_2 += 1) {
                            for (long index_3 = 1; index_3 < 161; index_3 += 1) {
                                
                                    out[encode162_162_162_162(index_0, index_1, index_2, index_3)] = out[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + -1, index_3 + 0)] * -1) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1 + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)]) * beta_2[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 1, index_3 + 0)] + ((mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + -1)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] + (mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)] + mesh[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 0)] * -1) * beta_3[encode162_162_162_162(index_0 + 0, index_1 + 0, index_2 + 0, index_3 + 1)]));

                            };
                        };
                    };
                };
            };
        };

};
