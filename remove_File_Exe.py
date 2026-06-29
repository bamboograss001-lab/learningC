import os
import shutil
def remove_exe_files(directory):
    for root, dirs, files in os.walk(directory):
        for file in files:
            if file.endswith(".exe"):
                file_path = os.path.join(root, file)
                try:
                    os.remove(file_path)
                    print(f"Removed: {file_path}")
                except OSError as e:
                    print(f"Error: {file_path} - {e}")

script_dir = os.path.dirname(os.path.abspath(__file__))        
remove_exe_files(script_dir)