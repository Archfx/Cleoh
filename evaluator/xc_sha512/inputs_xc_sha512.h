#define ADD_HEADER_TO_CSV() \
    outputFile << "hw(rs1)" << std::endl;

#define SET_RAND_VALS() \
    top->rs1 = distHw<uint64_t>(dis64(gen), generator); \
    top->ss = dis2(gen); 

#define ADD_ROW_TO_CSV() \
    outputFile << hammingWeight(top->rs1) << std::endl;
