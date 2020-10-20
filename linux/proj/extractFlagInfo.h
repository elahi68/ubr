int extractFlagInfo(char* ptr,union argvInfo *data)
{
	while(*++ptr)
	{
		switch(*ptr)
		{
			case 'a':data->flags.aFlag=1;
				 break;
			case 'i':data->flags.iFlag=1;
				 break;
			case 'l':data->flags.lFlag=1;
				 break;
			case 't':data->flags.sortFlag=1;
				 break;
			case 'r':data->flags.rsortFlag=1;
				 break;
		}
	}
}
