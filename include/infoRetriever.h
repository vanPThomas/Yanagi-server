
struct cpuCore
{
    int logical_id = -1;      // "processor"
    std::string model;        // Model
    std::string model_name;        // "model name"
    std::string cpu_MHz;
    std::string cash_size;
}


class InfoRetriever
{
    public:
        std::string retrieveCPUInfo();
    private:
        
}