function bitmap2coord( bitmap )
for row = 1:16
    for column = 1:8
        if(bitmap(row,column)==0)
            fprintf('{%d,%d},',column,17-row)
        end
    end
end
fprintf('\n')
end

