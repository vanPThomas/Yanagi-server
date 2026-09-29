// Gather and return CPU info in the form of a cpu core struct
std::vector<cpuCore> Server::retrieveCPUInfo()
{
    std::vector<cpuCore> cores;
    std::ifstream in("/proc/cpuinfo");
    if (!in)
    {
        std::cerr << "Can't locate CPU info\n";
        return cores;
    }

    cpuCore current;
    std::string line;

    auto flush = [&]()
    {
        if (current.logical_id >= 0)
            cores.push_back(std::move(current));
        current = cpuCore{};
    };

    while (std::getline(in, line))
    {
        if (line.empty())
        {
            flush();
            continue;
        }

        auto pos = line.find(':');
        if (pos == std::string::npos)
            continue;

        std::string key   = trim(line.substr(0, pos));
        std::string value = trim(line.substr(pos + 1));

        if (key == "processor")
            current.logical_id = std::stoi(value);
        else if (key == "model name")
            current.model_name = value;
        else if (key == "cpu MHz")
            current.cpu_MHz = value;
        else if (key == "cache size")
            current.cache_size = value;
    }
    flush();
    return cores;
}