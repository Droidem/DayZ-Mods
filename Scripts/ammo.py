import os
import re

def replace_last_occurrence(file_path, pattern, replacement):
    with open(file_path, 'r+') as f:
        content = f.read()
        position = content.rfind(pattern)
        
        if position != -1:
            content = content[:position] + replacement + content[position + len(pattern):]
            f.seek(0)
            f.write(content)
            f.truncate()

def main():
    filename = 'config.cpp'
    modname = ''

    if not os.path.isfile(filename):
        modname = input('Enter mod name: ')
        with open(filename, 'w') as f:
            f.write(f'''class CfgPatches
{{
class {modname}
{{
units[] = {{}};
weapons[] = {{}};
requiredVersion = 0.1;
requiredAddons[] = {{"DZ_Weapons_Ammunition","DZ_Weapons_Magazines"}};
magazines[] = {{}};
}};
}};
class CfgMagazines
{{
class Magazine_Base;
class Ammunition_Base: Magazine_Base{{}};
}};
''')

    while True:
        class_name = input('Enter the class name (XXX to exit): ')
        
        if class_name.lower() == 'xxx':
            break

        with open(filename, 'r') as f:
            if re.search(rf'class {class_name}:', f.read(), re.IGNORECASE):
                print(f'{class_name} already exists in the file.')
                continue
                
        replace_last_occurrence(filename, '};', f'''class {class_name}: Ammunition_Base    
{{    
count = 100;
}};
}};
''')

if __name__ == '__main__':
    main()
