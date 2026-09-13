std::string Server::retrieveCPUInfo()
{
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