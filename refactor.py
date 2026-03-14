import os
import glob

files = glob.glob('include/*.h') + glob.glob('src/*.cpp')

for f in files:
    try:
        with open(f, 'r', encoding='utf-8') as file:
            content = file.read()
        
        new_content = content.replace('#include <optional>', '#include "compat_optional.h"')
        new_content = new_content.replace('std::optional', 'compat::optional')
        new_content = new_content.replace('std::nullopt', 'compat::nullopt')
        
        if content != new_content:
            with open(f, 'w', encoding='utf-8') as file:
                file.write(new_content)
            print(f"Updated {f}")
    except Exception as e:
        print(f"Failed {f}: {e}")
