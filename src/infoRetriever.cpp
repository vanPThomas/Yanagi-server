// Gather and return CPU info in the form of a cpu core struct
std::vector<cpuCore> Server::retrieveCPUInfo()
{
    std::vector<cpuCore> CPUCores{};

    std::ifstream in("/proc/cpuinfo");
    if (!in)
    {
        std::cout << "Can't locate CPU info\n";
    }

        std::string line;
    while (std::getline(in, line))
    {
        auto pos = line.find(':');
        if(pos = std::string::npos)
            continue;

            std::string key = line.substr(0, pos);
            std::string value = line.substr(pos+1);
    }
    
}