% TASK 5.3

function [index_max_height, index_min_height] = min_max_H(lab4_data)
    [max_height, index_max_height] = max(lab4_data(:,end));                    %#ok<ASGLU>
    [min_height, index_min_height] = min(lab4_data(:,end));                    %#ok<ASGLU>

end


