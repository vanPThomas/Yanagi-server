//CPU struct
struct cpuCore {
    int logical_id = -1;
    std::string model_name;
    std::string cpu_MHz;
    std::string cache_size;
};

//RAM struct
struct ramInfo {
    long mem_total_kb = 0;
    long mem_available_kb = 0;
    long swap_total_kb = 0;
    long swap_free_kb = 0;
};

class InfoRetriever
{
    public:
        std::string retrieveCPUInfo();
    private:
        
}