//
//  main.cpp
//  OctomapRTT
//
//  Created by Daxin Wang on 2018/7/15.
//  Copyright © 2018 Daxin Wang. All rights reserved.
//

#include "../include/octomap_rrt.hpp"
#include "../include/map.hpp"
#include <octomap/octomap.h>
#include <octomap/ColorOcTree.h>

int main(int argc, char** argv) {
    Map* map = new Map("./hello_2.bt");
    octomap::point3d start_position(0,0,0);
    octomap::point3d end_position(39,20,9);
    RRT3D rrt(start_position, end_position, map, 60000, 2);
    rrt.run(false);
    // rrt.writeMap();
    // map->writeFile("./path_octotree.bt");
    rrt.writeInfo2File("./path_distance.txt");
}
