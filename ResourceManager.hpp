#pragma once

#include "include/Resource.hpp"

class ResourceManager
{
    public:
    ResourceManager()
    {
        res_ref = new Resource;
    }

    ~ResourceManager()
    {
        delete res_ref;
    }

    ResourceManager(const ResourceManager& ResMgr) : res_ref{ResMgr.res_ref} {}

    ResourceManager& operator=(const ResourceManager& other_res)
    {
        res_ref = other_res.res_ref;
        return *this;
    }

    double get()
    {
        return res_ref->get();
    }

    private:
    Resource* res_ref;
};
