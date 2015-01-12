		class RenderTargets /// class for all Picture-in-Picture
		{
			class LeveZrcadko
			{
				renderTarget = "rendertarget0"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
				class CameraView1
				{
					pointPosition		= "PIP0_pos"; 	/// memory point of PiP origin
					pointDirection		= "PIP0_dir"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 4;			/// zero means standard vision
					fov 				= 0.7;			/// what is the angle of the PiP field of view
				};
			};
			class PraveZrcadko	/// rendering of PiPs is shared, it is best to have one for all sources, this is just an example
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 4;
					fov 				= 0.7;
				};
			};
			class LeveZrcadkoPredek
			{
				renderTarget = "rendertarget2"; /// what texture is going to be used, it should be mapped in model like #(argb,256,512,1)r2t(rendertarget0,1.0)
				class CameraView1
				{
					pointPosition		= "PIP2_pos"; 	/// memory point of PiP origin
					pointDirection		= "PIP2_dir"; 	/// memory point of PiP direction
					renderQuality 		= 2;			/// what quality should the PiP be
					renderVisionMode 	= 4;			/// zero means standard vision
					fov 				= 0.7;			/// what is the angle of the PiP field of view
				};
			};
			class PraveZrcadkoPredek	/// rendering of PiPs is shared, it is best to have one for all sources, this is just an example
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition		= "PIP3_pos";
					pointDirection		= "PIP3_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 4;
					fov 				= 0.7;
				};
			};
		};
