#ifndef __SPARK_RENDERER_SHADER_GLSL_FOR_SPIR_FEATURE_LEVEL_GLSLES10_HPP_INCLUDED__
#define __SPARK_RENDERER_SHADER_GLSL_FOR_SPIR_FEATURE_LEVEL_GLSLES10_HPP_INCLUDED__
#include <string>

namespace spark {
    namespace renderer {
        namespace shader {
            namespace glsl_for_spir_feature_level_glsles10 {
                /**
                * glslc.exe vertex.vert -o vertex.spv
                * https://www.base64encode.net/file-to-base64
                */
                class DefaultShader
                {
                public:
                    /**
                    *
                    */
                    const char* getVertexShader()
                    {
                        return m_base64VertexShader.c_str();
                    }

                    /**
                    *
                    */
                    const char* getFragmentShader()
                    {
                        return m_base64FragmentShader.c_str();
                    }

                private:
                    std::string m_base64VertexShader = "AwIjBwAAAQAKAA0AJQAAAAAAAAARAAIAAQAAAAsABgABAAAAR0xTTC5zdGQuNDUwAAAAAA4AAwAAAAAAAQAAAA8ACwAAAAAABAAAAG1haW4AAAAACQAAAAsAAAASAAAAFwAAABsAAAAkAAAAAwADAAIAAADCAQAABAAKAEdMX0dPT0dMRV9jcHBfc3R5bGVfbGluZV9kaXJlY3RpdmUAAAQACABHTF9HT09HTEVfaW5jbHVkZV9kaXJlY3RpdmUABQAEAAQAAABtYWluAAAAAAUABQAJAAAAZnJhZ0NvbG9yAAAABQAEAAsAAABhQ29sb3IAAAUABgAQAAAAZ2xfUGVyVmVydGV4AAAAAAYABgAQAAAAAAAAAGdsX1Bvc2l0aW9uAAYABwAQAAAAAQAAAGdsX1BvaW50U2l6ZQAAAAAGAAcAEAAAAAIAAABnbF9DbGlwRGlzdGFuY2UABgAHABAAAAADAAAAZ2xfQ3VsbERpc3RhbmNlAAUAAwASAAAAAAAAAAUACQAXAAAAdU1vZGVsVmlld1Byb2plY3Rpb25NYXRyaXgAAAUABQAbAAAAYVBvc2l0aW9uAAAABQAEACQAAABhTm9ybWFsAEcABAAJAAAAHgAAAAQAAABHAAQACwAAAB4AAAACAAAASAAFABAAAAAAAAAACwAAAAAAAABIAAUAEAAAAAEAAAALAAAAAQAAAEgABQAQAAAAAgAAAAsAAAADAAAASAAFABAAAAADAAAACwAAAAQAAABHAAMAEAAAAAIAAABHAAQAFwAAAB4AAAADAAAARwAEABsAAAAeAAAAAAAAAEcABAAkAAAAHgAAAAEAAAATAAIAAgAAACEAAwADAAAAAgAAABYAAwAGAAAAIAAAABcABAAHAAAABgAAAAQAAAAgAAQACAAAAAMAAAAHAAAAOwAEAAgAAAAJAAAAAwAAACAABAAKAAAAAQAAAAcAAAA7AAQACgAAAAsAAAABAAAAFQAEAA0AAAAgAAAAAAAAACsABAANAAAADgAAAAEAAAAcAAQADwAAAAYAAAAOAAAAHgAGABAAAAAHAAAABgAAAA8AAAAPAAAAIAAEABEAAAADAAAAEAAAADsABAARAAAAEgAAAAMAAAAVAAQAEwAAACAAAAABAAAAKwAEABMAAAAUAAAAAAAAABgABAAVAAAABwAAAAQAAAAgAAQAFgAAAAEAAAAVAAAAOwAEABYAAAAXAAAAAQAAABcABAAZAAAABgAAAAMAAAAgAAQAGgAAAAEAAAAZAAAAOwAEABoAAAAbAAAAAQAAACsABAAGAAAAHQAAAAAAgD87AAQACgAAACQAAAABAAAANgAFAAIAAAAEAAAAAAAAAAMAAAD4AAIABQAAAD0ABAAHAAAADAAAAAsAAAA+AAMACQAAAAwAAAA9AAQAFQAAABgAAAAXAAAAPQAEABkAAAAcAAAAGwAAAFEABQAGAAAAHgAAABwAAAAAAAAAUQAFAAYAAAAfAAAAHAAAAAEAAABRAAUABgAAACAAAAAcAAAAAgAAAFAABwAHAAAAIQAAAB4AAAAfAAAAIAAAAB0AAACRAAUABwAAACIAAAAYAAAAIQAAAEEABQAIAAAAIwAAABIAAAAUAAAAPgADACMAAAAiAAAA/QABADgAAQA=";
                    std::string m_base64FragmentShader = "AwIjBwAAAQAKAA0ADQAAAAAAAAARAAIAAQAAAAsABgABAAAAR0xTTC5zdGQuNDUwAAAAAA4AAwAAAAAAAQAAAA8ABwAEAAAABAAAAG1haW4AAAAACQAAAAsAAAAQAAMABAAAAAcAAAADAAMAAgAAAMIBAAAEAAoAR0xfR09PR0xFX2NwcF9zdHlsZV9saW5lX2RpcmVjdGl2ZQAABAAIAEdMX0dPT0dMRV9pbmNsdWRlX2RpcmVjdGl2ZQAFAAQABAAAAG1haW4AAAAABQAFAAkAAABvdXRDb2xvcgAAAAAFAAUACwAAAGZyYWdDb2xvcgAAAEcABAAJAAAAHgAAAAAAAABHAAQACwAAAB4AAAAAAAAAEwACAAIAAAAhAAMAAwAAAAIAAAAWAAMABgAAACAAAAAXAAQABwAAAAYAAAAEAAAAIAAEAAgAAAADAAAABwAAADsABAAIAAAACQAAAAMAAAAgAAQACgAAAAEAAAAHAAAAOwAEAAoAAAALAAAAAQAAADYABQACAAAABAAAAAAAAAADAAAA+AACAAUAAAA9AAQABwAAAAwAAAALAAAAPgADAAkAAAAMAAAA/QABADgAAQA=";
                };
            }
        }
    }
}
#endif