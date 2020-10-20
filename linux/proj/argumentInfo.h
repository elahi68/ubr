union argvInfo
{
	size_t info;
	struct
	{
		size_t aFlag:1;
		size_t lFlag:1;
		size_t iFlag:1;
		size_t pathFlag:1;
		size_t dirFlag:1;
		size_t sortFlag:1;
		size_t rsortFlag:1;
	}flags;
};
union fileTypeInfo
{
	int info;
	struct 
	{
		size_t blkflag:1;
		size_t charflag:1;
		size_t dirflag:1;
		size_t fifoflag:1;
		size_t linkflag:1;
		size_t regflag:1;
		size_t sockflag:1;
	}flags;
};
