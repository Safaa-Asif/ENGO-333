% Safaa Asif 30274206
% 2026-10-14
% Lab 4: Main Script

close all
clear
clc

% TASK 2
v = [1, 2, 3, 4, 5];
a = v' * v;
b = v * v';
c = v .* v;

% TASK 3
lab4xyz = load("lab4xyz.txt");
lab4ENh = importdata("lab4ENh.txt");

% TASK 4

% (A) Default Settings
figure
plot(lab4xyz(:,2), lab4xyz(:,3))

% (B) Colored Markers, No Line
figure
plot(lab4xyz(:,2), lab4xyz(:,3), "r*")
xlabel("Horizontal Coordinates")
ylabel("Vertical Coordinates")
title("Barrier Mountain & Barrier Lake in Kananaskis (2D Coordinates)")

% TASK 5.2

% (A) Figure 2
figure
plot3(lab4xyz(:,2), lab4xyz(:,3), lab4xyz(:,4), "g*")
hold on
title("Barrier Mountain & Barrier Lake in Kananaskis (3D Coordinates)")
xlabel("Horizontal Coordinates")
ylabel("Vertical Coordinates")
zlabel("Elevation Above Sea Level (ft)")
[index_max_height_1, index_min_height_1] = min_max_H(lab4xyz);
plot3(lab4xyz(index_max_height_1,2), lab4xyz(index_max_height_1,3), lab4xyz(index_max_height_1,4), "r^", "Markersize", 10)
plot3(lab4xyz(index_min_height_1,2), lab4xyz(index_min_height_1,3), lab4xyz(index_min_height_1,4), "r^", "Markersize", 10)
hold off


% (B) Figure 3
figure
plot3(lab4ENh.data(:,1), lab4ENh.data(:,2), lab4ENh.data(:,3), "c*")
hold on
title("Measurements from LiDAR Mapping Campaign (3D Coordinates)")
xlabel("Easting Coordinates (m)")
ylabel("Northing Coordinates (m)")
zlabel("Height (m)")
[index_max_height_2, index_min_height_2] = min_max_H(lab4ENh.data);
plot3(lab4ENh.data(index_max_height_2,1), lab4ENh.data(index_max_height_2,2), lab4ENh.data(index_max_height_2,3), "r^", "Markersize", 10)
plot3(lab4ENh.data(index_min_height_2,1), lab4ENh.data(index_min_height_2,2), lab4ENh.data(index_min_height_2,3), "r^", "Markersize", 10)
hold off

