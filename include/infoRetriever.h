
struct cpuCore {
    int logical_id = -1;
    std::string model_name;
    std::string cpu_MHz;
    std::string cache_size;
};

class InfoRetriever
{
    public:
        std::string retrieveCPUInfo();
    private:
        
}