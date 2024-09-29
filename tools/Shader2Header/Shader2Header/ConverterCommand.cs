﻿namespace Shader2Header
{
    /// <summary>
    /// 
    /// </summary>
    internal class ConverterCommand
    {
        private string _shaderClassContent = string.Empty;
        private IShaderInfo _shaderInfo;
        private object c;

        /// <summary>
        /// 
        /// </summary>
        /// <param name="shaderInfo"></param>
        public ConverterCommand(IShaderInfo shaderInfo)
        {
            _shaderInfo = shaderInfo;            
        }

        /// <summary>
        /// 
        /// </summary>
        public void Execute()
        {
            BuildHead();
            BuildVertexShaderMethod();
            BuildFragmentShaderMethod();
            BuildTail();
            File.WriteAllText(Path.Combine(_shaderInfo.RootFolder, _shaderInfo.Version, _shaderInfo.ClassName + ".hpp"), _shaderClassContent);
        }

        /// <summary>
        /// 
        /// </summary>
        private void BuildHead()
        {
            _shaderClassContent = "//------------------------------------------------------------------------------\n";
            _shaderClassContent += "// <auto-generated>\n";
            _shaderClassContent += "//\tThis code was generated by a tool\n";
            _shaderClassContent += "//\tChanges will be lost if code is regenerated\n";
            _shaderClassContent += "// </auto-generated>\n";
            _shaderClassContent += "//------------------------------------------------------------------------------\n";
            _shaderClassContent += "#ifndef __SPARK_RENDERER_SHADER_" + _shaderInfo.Guard + "_" + _shaderInfo.ClassName.ToUpper() + "_HPP_INCLUDED__\n";
            _shaderClassContent += "#define __SPARK_RENDERER_SHADER_" + _shaderInfo.Guard + "_" + _shaderInfo.ClassName.ToUpper() + "_HPP_INCLUDED__\n";
            _shaderClassContent += "\n";
            _shaderClassContent += "namespace spark {\n";
            _shaderClassContent += "\tnamespace renderer {\n";
            _shaderClassContent += "\t\tnamespace shader {\n";
            _shaderClassContent += "\t\t\tnamespace " + _shaderInfo.Namespace + " {\n";
            _shaderClassContent += "\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t///\n";
            _shaderClassContent += "\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\tclass " + _shaderInfo.ClassName + "\n";
            _shaderClassContent += "\t\t\t\t{\n";
            _shaderClassContent += "\t\t\t\tpublic:\n";
            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\t///\n";
            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\t" + _shaderInfo.ClassName + "(void)\n";
            _shaderClassContent += "\t\t\t\t\t{\n";
            _shaderClassContent += "\t\t\t\t\t}\n";
            _shaderClassContent += "\n";
            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\t///\n";
            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\tvirtual ~" + _shaderInfo.ClassName + "(void)\n";
            _shaderClassContent += "\t\t\t\t\t{\n";
            _shaderClassContent += "\t\t\t\t\t}\n";
            _shaderClassContent += "\n";
            _shaderClassContent += "\t\t\t\tpublic:\n";
        }

        /// <summary>
        /// 
        /// </summary>
        private void BuildVertexShaderMethod()
        {
            string vertexShaderFileContent = File.ReadAllText(Path.Combine(_shaderInfo.RootFolder, _shaderInfo.Version, _shaderInfo.VertexName));
            string[] vertexShaderLines = vertexShaderFileContent.Split('\n');
            string[] vertexShaderConvertedLines = Convert(vertexShaderLines);

            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\t///\n";
            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\tconst char* GetVertexShader() const\n";
            _shaderClassContent += "\t\t\t\t\t{\n";
            _shaderClassContent += "\t\t\t\t\t\tconst char* vertexShaderStr =\n";

            for (int i = 0; i < vertexShaderConvertedLines.Length; i++)
            {
                _shaderClassContent += "\t\t\t\t\t\t\t" + vertexShaderConvertedLines[i];
            }

            _shaderClassContent += "\t\t\t\t\t\t\t;\n";
            _shaderClassContent += "\t\t\t\t\t\treturn vertexShaderStr;\n";
            _shaderClassContent += "\t\t\t\t\t}\n";
            _shaderClassContent += "\n";
        }

        /// <summary>
        /// 
        /// </summary>
        private void BuildFragmentShaderMethod()
        {
            string fragmentShaderFileContent = File.ReadAllText(Path.Combine(_shaderInfo.RootFolder, _shaderInfo.Version, _shaderInfo.FragmentName));
            string[] fragmentShaderLines = fragmentShaderFileContent.Split('\n');
            string[] fragmentShaderConvertedLines = Convert(fragmentShaderLines);

            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\t///\n";
            _shaderClassContent += "\t\t\t\t\t/// <summary>\n";
            _shaderClassContent += "\t\t\t\t\tconst char* GetFragmentShader() const\n";
            _shaderClassContent += "\t\t\t\t\t{\n";
            _shaderClassContent += "\t\t\t\t\t\tconst char* fragmentShaderStr =\n";

            for (int i = 0; i < fragmentShaderConvertedLines.Length; i++)
            {
                _shaderClassContent += "\t\t\t\t\t\t\t" + fragmentShaderConvertedLines[i];
            }

            _shaderClassContent += "\t\t\t\t\t\t\t;\n";
            _shaderClassContent += "\t\t\t\t\t\treturn fragmentShaderStr;\n";
            _shaderClassContent += "\t\t\t\t\t}\n";
            _shaderClassContent += "\n";
        }

        /// <summary>
        /// 
        /// </summary>
        private void BuildTail()
        {
            _shaderClassContent += "\t\t\t\t};\n";
            _shaderClassContent += "\t\t\t}\n";
            _shaderClassContent += "\t\t}\n";
            _shaderClassContent += "\t}\n";
            _shaderClassContent += "}\n";
            _shaderClassContent += "#endif\n";
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="lines"></param>
        /// <returns></returns>
        private string[] Convert(string[] lines)
        {
            string[] result = new string[lines.Length];

            for (int i = 0; i < lines.Length; i++)
            {
                string xx = lines[i].Replace("\r", "");

                lines[i] = xx;
            }

            for (int i = 0; i < lines.Length; i++)
            {
                string conv = "\"" + lines[i] + @"\n" + "\"";

                result[i] = conv + "\n";
            }

            return result;
        }
    }
}