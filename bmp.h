#pragma pack(2)        //设置为2字节对齐
struct bmp_fileheader
{
    unsigned short      bfType;
    unsigned int        bfSize;
    unsigned short      bfReverved1;
    unsigned short      bfReverved2;
    unsigned int        bfOffBits;
};
struct bmp_infoheader
{
    unsigned int    biSize;
    unsigned int    biWidth;
    unsigned int    biHeight;
    unsigned short  biPlanes;
    unsigned short  biBitCount;
    unsigned int    biCompression;
    unsigned int    biSizeImage;
    unsigned int    biXPelsPerMeter;
    unsigned int    biYPelsPerMeter;
    unsigned int    biClrUsed;
    unsigned int    biClrImportant;
};

typedef struct BITMAPFILE
{
	struct bmp_fileheader header;
	struct bmp_infoheader info;
	unsigned char *data;
} BITMAPFILE_t;

typedef unsigned int uint32_t;
