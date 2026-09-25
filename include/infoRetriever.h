
struct cpuCore
{
    int logical_id = -1;      // "processor"
    std::string model;        // "model name"
}


class InfoRetriever
{
    public:
        std::string retrieveCPUInfo();
    private:
        
}